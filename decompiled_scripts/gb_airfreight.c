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
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	float fLocal_112 = 0f;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 1065353216;
	var uLocal_117 = 1065353216;
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = -1;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138[4] = { 0, 0, 0, 0 };
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159[3] = { 0, 0, 0 };
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	struct<3> Local_166[2];
	float fLocal_173[2] = { 0f, 0f };
	float fLocal_176 = 0f;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	struct<2> Local_189 = { 0, 0 } ;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	struct<114> Local_200 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1621617168, 0, 0, 0, 0, 0, 0, 0, 874602658, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_314[32];
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
	fLocal_98 = 3f;
	fLocal_99 = 0f;
	fLocal_100 = 2f;
	fLocal_101 = 100f;
	fLocal_112 = 0.5f;
	iLocal_156 = 3600000;
	iLocal_158 = -1;
	if (unk_0x17CC0D5008835470())
	{
		if (func_683(unk_0xE0BDAFA1A39552D6(), 0, 1))
		{
			if (!func_667(ScriptParam_0))
			{
				func_664(0, 1);
				func_646();
			}
		}
		else
		{
			func_646();
		}
	}
	else
	{
		func_664(0, 1);
		func_646();
	}
	while (true)
	{
		func_645();
		if (func_642())
		{
			func_664(0, 1);
			func_646();
		}
		if (func_634())
		{
			func_664(0, 1);
			func_646();
		}
		if (func_633() && func_632())
		{
			if (!func_631())
			{
				if (func_628())
				{
					func_609(170, unk_0xF4745590D18D14B8(func_627(), 1), &uLocal_163, 1140457472, 700f, iLocal_164);
				}
				else
				{
					func_609(170, unk_0xF4745590D18D14B8(func_608(), 1), &uLocal_163, 1140457472, 700f, iLocal_164);
				}
			}
		}
		func_587();
		switch (func_586(unk_0x490BA5FDD7EE47A9()))
		{
			case 0:
				if (func_585() == 1)
				{
					if (func_583())
					{
						func_582(unk_0x490BA5FDD7EE47A9(), 1);
					}
				}
				break;
			
			case 1:
				if (func_585() == 1)
				{
					func_90();
				}
				else if (func_585() == 3)
				{
					func_582(unk_0x490BA5FDD7EE47A9(), 3);
				}
				break;
			
			case 3:
				func_646();
				break;
		}
		if (unk_0x587E5997B76F47FE())
		{
			if (func_89())
			{
				func_88(3);
			}
			switch (func_585())
			{
				case 0:
					if (func_64())
					{
						func_88(1);
					}
					break;
				
				case 1:
					func_10();
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x6B90EB073E0E641F(iVar0))
		{
			iVar2 = iVar0;
			iVar1 = unk_0x1886D89D5D557CB4(iVar2);
			if (func_683(iVar1, 0, 1))
			{
				if (func_9(iVar2, 1))
				{
					bVar3 = true;
					iVar4 = iVar1;
				}
				if (!func_8(18))
				{
					if (func_5(iVar1, func_7(), 1))
					{
						if (func_9(iVar2, 6))
						{
							func_4(18);
						}
					}
				}
				if (!func_8(17))
				{
					if (func_9(iVar2, 5))
					{
						func_4(17);
					}
				}
				if (!func_8(9))
				{
					if (func_9(iVar2, 2))
					{
						func_4(9);
					}
				}
				if (!func_8(21))
				{
					if (func_9(iVar2, 7))
					{
						func_4(21);
					}
				}
				if (func_633())
				{
					if (!func_8(6))
					{
						if (func_9(iVar2, 4))
						{
							func_4(6);
							func_4(17);
						}
					}
				}
				if (func_632())
				{
					if (!func_8(7))
					{
						if (func_9(iVar2, 3))
						{
							func_4(7);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		if (!func_8(2))
		{
			Local_200.f_8 = iVar4;
			func_4(2);
		}
		if (!func_8(12))
		{
			func_4(12);
		}
	}
	else if (func_8(2))
	{
		Local_200.f_9 = Local_200.f_8;
		Local_200.f_8 = func_3();
		func_2(2);
	}
}

void func_2(int iParam0)
{
	if (!unk_0x587E5997B76F47FE())
	{
		return;
	}
	unk_0x99BCB15F954AF579(&(Local_200.f_1), iParam0);
}

int func_3()
{
	return -1;
}

void func_4(int iParam0)
{
	if (!unk_0x587E5997B76F47FE())
	{
		return;
	}
	unk_0xE27C8E42A97895CF(&(Local_200.f_1), iParam0);
}

int func_5(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_3())
	{
		if (!bParam2)
		{
			if (func_6(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610705[iParam0 /*178*/].f_10 != func_3())
		{
			return iParam1 == Global_1610705[iParam0 /*178*/].f_10;
		}
	}
	return 0;
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 != func_3())
	{
		if (iParam0 != func_3())
		{
			if (Global_1610705[iParam0 /*178*/].f_10 != func_3())
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

int func_7()
{
	return Local_200.f_7;
}

bool func_8(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Local_200.f_1, iParam0);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Local_314[iParam0 /*3*/].f_1, iParam1);
}

void func_10()
{
	switch (func_63())
	{
		case 0:
			func_62(1);
			unk_0x5F55B369FD8D3271(&(Local_200.f_112), &(Local_200.f_113));
			break;
		
		case 1:
			if (func_61() == 0)
			{
				if (!func_60(&(Local_200.f_2)))
				{
					func_59(&(Local_200.f_2), 0, 0);
				}
				else
				{
					if (func_57())
					{
						if (func_51())
						{
							func_50(4);
						}
					}
					if (func_8(10))
					{
						func_50(2);
					}
					if (func_48(&(Local_200.f_2), func_49(), 0))
					{
						func_50(1);
					}
				}
				func_46();
				func_42();
				func_40();
				func_35();
				func_28();
				func_24();
				func_23();
				func_17();
				func_16();
			}
			else
			{
				func_62(2);
			}
			break;
		
		case 2:
			func_15();
			if (!func_60(&(Local_200.f_20)) && !unk_0xBDA1F5E8A36BFA07(func_608(), 0))
			{
				func_59(&(Local_200.f_20), 0, 0);
			}
			else if (func_13())
			{
				if (func_12())
				{
					func_62(3);
				}
				else
				{
					if (!func_12())
					{
					}
					if (!func_11())
					{
					}
				}
			}
			break;
		
		case 3:
			func_88(3);
			break;
	}
}

int func_11()
{
	if (func_8(6) || func_8(17))
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x6B90EB073E0E641F(iVar0))
		{
			iVar2 = iVar0;
			if (!func_9(iVar2, 0))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (func_11())
	{
		return 1;
	}
	if (func_60(&(Local_200.f_20)))
	{
		if (func_48(&(Local_200.f_20), func_14() + 5000, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_14()
{
	return Global_262145.f_12607;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_200.f_31[iVar0 /*17*/].f_9)
		{
			Local_200.f_31[iVar0 /*17*/].f_9 = 0;
		}
		iVar0++;
	}
}

void func_16()
{
	if (!func_8(10))
	{
		if (!unk_0xA27C9E8196C79D22(func_7()))
		{
			func_4(10);
		}
	}
}

void func_17()
{
	if (func_22())
	{
		if (func_21(2))
		{
			if (func_18(func_20(2), func_19(), 1))
			{
				if (Local_200.f_31[2 /*17*/].f_9 == 1)
				{
					Local_200.f_31[2 /*17*/].f_9 = 0;
				}
			}
		}
	}
}

int func_18(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam0) && !unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		if (unk_0xC1EDB61CE0A4B94E(iParam1) && !unk_0xBDA1F5E8A36BFA07(iParam1, 0))
		{
			if (unk_0x93E49C491856D7AD(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19()
{
	if (func_22())
	{
		return unk_0xA9B72300DA155F92(Local_200.f_100);
	}
	return 0;
}

int func_20(int iParam0)
{
	if (func_21(iParam0))
	{
		return unk_0x220B3465A4B1FBA5(Local_200.f_31[iParam0 /*17*/]);
	}
	return 0;
}

bool func_21(int iParam0)
{
	return unk_0xC3A7CFC6468E0BAE(Local_200.f_31[iParam0 /*17*/]);
}

bool func_22()
{
	return unk_0xC3A7CFC6468E0BAE(Local_200.f_100);
}

void func_23()
{
	int iVar0;
	bool bVar1;
	
	if (func_633() && func_632())
	{
		if (!func_8(14))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_21(iVar0))
				{
					if (!unk_0xCFC04A38F256EE06(func_20(iVar0)) && !unk_0xBDA1F5E8A36BFA07(func_20(iVar0), 0))
					{
						bVar1 = false;
					}
				}
				iVar0++;
			}
			if (bVar1)
			{
				func_4(14);
			}
		}
	}
}

void func_24()
{
	int iVar0;
	
	if (unk_0x587E5997B76F47FE())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_200.f_31[iVar0 /*17*/].f_10)
			{
				case 0:
					if (func_21(iVar0))
					{
						Local_200.f_31[iVar0 /*17*/].f_10 = 1;
					}
					break;
				
				case 1:
					if (func_21(iVar0))
					{
						if (!unk_0xCFC04A38F256EE06(func_20(iVar0)))
						{
							if (func_27())
							{
								Local_200.f_31[iVar0 /*17*/].f_9 = 1;
								if (iVar0 == 2)
								{
									if ((func_22() && unk_0x1B6292EA51632C25(func_19(), 0)) && func_8(19))
									{
										Local_200.f_31[iVar0 /*17*/].f_10 = 3;
									}
									else
									{
										Local_200.f_31[iVar0 /*17*/].f_10 = 2;
									}
								}
								else
								{
									Local_200.f_31[iVar0 /*17*/].f_10 = 2;
								}
							}
						}
					}
					break;
				
				case 2:
					if (iVar0 == 2)
					{
						if (func_21(iVar0))
						{
							if (!unk_0xCFC04A38F256EE06(func_20(iVar0)))
							{
								if ((func_22() && unk_0x1B6292EA51632C25(func_19(), 0)) && func_8(19))
								{
									Local_200.f_31[iVar0 /*17*/].f_10 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (func_21(iVar0))
					{
						if (func_22())
						{
							if (!func_18(func_20(iVar0), func_19(), 0))
							{
								if (!func_25())
								{
									if (!unk_0x1B6292EA51632C25(func_19(), 0) || unk_0xBDA1F5E8A36BFA07(func_19(), 0))
									{
										if (!unk_0xCFC04A38F256EE06(func_20(iVar0)))
										{
											Local_200.f_31[iVar0 /*17*/].f_10 = 2;
										}
									}
								}
								else if (!unk_0xCFC04A38F256EE06(func_20(iVar0)))
								{
									Local_200.f_31[iVar0 /*17*/].f_10 = 2;
								}
							}
						}
						else if (!unk_0xCFC04A38F256EE06(func_20(iVar0)))
						{
							Local_200.f_31[iVar0 /*17*/].f_10 = 2;
						}
					}
					break;
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (unk_0xC3A7CFC6468E0BAE(Local_200.f_100))
	{
		if (unk_0x4321FC7479614822(func_19(), -1) != 0)
		{
			if (func_26(unk_0x4321FC7479614822(func_19(), -1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_27()
{
	return func_8(9);
}

void func_28()
{
	float fVar0;
	int iVar1;
	
	if (func_633() && func_632())
	{
		if (func_34() > func_33())
		{
			if (unk_0x046CEB8397234DA8(func_31(), func_627()))
			{
				if (iLocal_178 == 0)
				{
					iLocal_178 = 1;
				}
			}
			else if (iLocal_178)
			{
				if (unk_0x1C3F1A4FF0A66BD0(func_627()))
				{
					if (func_30(Local_179))
					{
						Local_179 = { unk_0xF4745590D18D14B8(func_627(), 0) };
					}
				}
				else if (!func_30(Local_179))
				{
					iVar1 = (Local_200.f_13 / 5);
					Local_182 = { unk_0xF4745590D18D14B8(func_627(), 0) };
					fVar0 = unk_0xA1F52EC3ECE1D42E(Local_179, Local_182, 1);
					if (fVar0 > 0f && fVar0 < (IntToFloat(func_29()) * 0.1f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 5);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.1f) && fVar0 < (IntToFloat(func_29()) * 0.2f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 10);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.2f) && fVar0 < (IntToFloat(func_29()) * 0.3f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 20);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.3f) && fVar0 < (IntToFloat(func_29()) * 0.4f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 30);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.4f) && fVar0 < (IntToFloat(func_29()) * 0.5f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 40);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.5f) && fVar0 < (IntToFloat(func_29()) * 0.6f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 50);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.6f) && fVar0 < (IntToFloat(func_29()) * 0.7f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 60);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.7f) && fVar0 < (IntToFloat(func_29()) * 0.8f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 70);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.8f) && fVar0 < (IntToFloat(func_29()) * 0.9f))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 80);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.9f) && fVar0 < IntToFloat(func_29()))
					{
						Local_200.f_13 = (Local_200.f_13 - (iVar1 / 100) * 90);
					}
					else if (fVar0 >= IntToFloat(func_29()))
					{
						Local_200.f_13 = (Local_200.f_13 - iVar1);
					}
					if (Local_200.f_13 < func_33())
					{
						Local_200.f_13 = func_33();
					}
					Local_179 = { 0f, 0f, 0f };
					Local_182 = { 0f, 0f, 0f };
					fVar0 = 0f;
					iLocal_178 = 0;
				}
			}
		}
	}
}

int func_29()
{
	return Global_262145.f_12615;
}

int func_30(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (func_633())
	{
		return unk_0xA9B72300DA155F92(func_32());
	}
	return 0;
}

var func_32()
{
	return Local_200.f_14;
}

int func_33()
{
	return Global_262145.f_12622;
}

int func_34()
{
	return Local_200.f_13;
}

void func_35()
{
	if (func_633())
	{
		if (func_632())
		{
			if (!func_8(5))
			{
				if (func_38(func_627(), func_39(), 1) < func_37())
				{
					if (func_36())
					{
						func_4(5);
					}
				}
			}
		}
	}
}

int func_36()
{
	if (unk_0x1C3F1A4FF0A66BD0(func_627()))
	{
		return 0;
	}
	if (unk_0x137B8B7A1CAD742A(func_627()) > 5f)
	{
		return 0;
	}
	if (unk_0xC774E76B3D78AD45(func_627()))
	{
		return 0;
	}
	if (unk_0x046CEB8397234DA8(func_31(), func_627()))
	{
		return 0;
	}
	return 1;
}

float func_37()
{
	return Local_200.f_111;
}

float func_38(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Param1, iParam4);
}

Vector3 func_39()
{
	return Local_200.f_108;
}

void func_40()
{
	if (!func_8(19))
	{
		if ((func_633() && !func_631()) && unk_0x1B6292EA51632C25(func_31(), 0))
		{
			if (func_41(func_31(), func_627(), 0) < 200f)
			{
				func_4(19);
			}
		}
	}
}

float func_41(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	if (!unk_0xBDA1F5E8A36BFA07(iParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, iParam2);
}

void func_42()
{
	if (func_633() && func_632())
	{
		if (unk_0x046CEB8397234DA8(func_31(), func_627()))
		{
			if (!func_8(11))
			{
				func_45(1);
				func_4(11);
			}
			if (!func_8(3))
			{
				func_4(3);
			}
			if (func_8(16))
			{
				func_45(0);
				func_2(16);
			}
		}
		else
		{
			if (func_8(11))
			{
				if (!func_8(16))
				{
					func_4(16);
				}
			}
			if (func_8(3))
			{
				func_2(3);
			}
		}
		if (func_60(&(Local_200.f_28)))
		{
			if (func_48(&(Local_200.f_28), func_44(), 0))
			{
				func_43(&(Local_200.f_28));
			}
		}
	}
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_44()
{
	return Global_262145.f_12605;
}

void func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (unk_0x587E5997B76F47FE())
		{
			Local_200.f_30++;
		}
	}
	if (!func_60(&(Local_200.f_28)))
	{
		func_59(&(Local_200.f_28), 0, 0);
	}
	else
	{
		func_43(&(Local_200.f_28));
		func_59(&(Local_200.f_28), 0, 0);
	}
}

void func_46()
{
	if (!func_8(4))
	{
		if (func_633() && func_632())
		{
			if (func_47())
			{
				func_4(4);
			}
		}
	}
}

bool func_47()
{
	return func_8(18);
}

int func_48(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_59(uParam0, bParam2, 0);
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

int func_49()
{
	return Global_262145.f_12601;
}

void func_50(int iParam0)
{
	if (!unk_0x587E5997B76F47FE())
	{
		return;
	}
	Local_200.f_5 = iParam0;
}

int func_51()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Local_200.f_6 == 0)
	{
		if (func_56())
		{
			Local_200.f_6 = 1;
			return 1;
		}
		if (func_11())
		{
			if (Local_200.f_10 == func_3())
			{
				iVar1 = unk_0xB1A2C40117216F8E(func_608(), &uVar0);
				iVar2 = func_52();
				if (iVar1 != func_3())
				{
					if (!func_5(iVar1, func_7(), 1))
					{
						Local_200.f_10 = iVar1;
					}
					else
					{
						Local_200.f_10 = iVar2;
					}
				}
				else if (iVar2 != func_3())
				{
					Local_200.f_10 = iVar2;
				}
			}
			Local_200.f_6 = 2;
			return 1;
		}
		if (func_8(7))
		{
			Local_200.f_6 = 3;
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar3 = func_3();
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar4)))
		{
			iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar4));
			if (!func_53(iVar2))
			{
				if (unk_0xBDA1F5E8A36BFA07(func_608(), 0))
				{
					if (unk_0xAFD80883820DD54C(iVar2, func_608(), &iVar1))
					{
						if (iVar1 > iVar0)
						{
							iVar0 = iVar1;
							iVar3 = iVar2;
						}
					}
				}
				else if (unk_0xC10BF4DD37BD0172(iVar2, func_608(), &iVar1))
				{
					if (iVar1 > iVar0)
					{
						iVar0 = iVar1;
						iVar3 = iVar2;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar3 == func_3())
	{
	}
	return iVar3;
}

int func_53(int iParam0)
{
	if (func_55(iParam0) || func_54(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54(int iParam0)
{
	return iParam0 == func_7();
}

int func_55(int iParam0)
{
	return func_5(iParam0, func_7(), 0);
}

bool func_56()
{
	return func_8(5);
}

int func_57()
{
	if (func_56())
	{
		return 1;
	}
	if (func_11())
	{
		return 1;
	}
	if (func_58())
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return func_8(7);
}

void func_59(var uParam0, bool bParam1, bool bParam2)
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

bool func_60(var uParam0)
{
	return uParam0->f_1;
}

int func_61()
{
	return Local_200.f_5;
}

void func_62(int iParam0)
{
	if (!unk_0x587E5997B76F47FE())
	{
		return;
	}
	Local_200.f_4 = iParam0;
}

int func_63()
{
	return Local_200.f_4;
}

int func_64()
{
	if (func_81())
	{
		if (func_66())
		{
			unk_0x0B87AFC0B2EECA19(Local_200.f_19);
			unk_0x0B87AFC0B2EECA19(Local_200.f_27);
			Local_200.f_7 = unk_0xE0BDAFA1A39552D6();
			Local_200.f_8 = func_3();
			Local_200.f_9 = func_3();
			Local_200.f_10 = func_3();
			Local_200.f_13 = func_65();
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return Global_262145.f_12621;
}

int func_66()
{
	if (!func_77())
	{
		return 0;
	}
	if (!func_74())
	{
		return 0;
	}
	if (!func_71())
	{
		return 0;
	}
	if (!func_67())
	{
		return 0;
	}
	return 1;
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_68(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_21(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_68(int iParam0)
{
	if (!func_21(iParam0))
	{
		if (func_70(Local_200.f_31[iParam0 /*17*/].f_5))
		{
			if (unk_0x98C9563B38ACD6D9(1))
			{
				if (func_69(&(Local_200.f_31[iParam0 /*17*/]), 26, Local_200.f_31[iParam0 /*17*/].f_5, Local_200.f_31[iParam0 /*17*/].f_1, Local_200.f_31[iParam0 /*17*/].f_4, 1, 1, 1))
				{
					unk_0x7D86F9C4E675434D(func_20(iParam0), 1, 0);
					unk_0xBA63517ADBC1E5E3(func_20(iParam0), 1);
					unk_0x38DB61894D88F955(func_20(iParam0), 1);
					if (iParam0 == 3)
					{
						unk_0xF0683EF788D4342B(func_20(iParam0), Local_200.f_31[iParam0 /*17*/].f_12, 99999999, 0, 1);
					}
					else
					{
						unk_0xF0683EF788D4342B(func_20(iParam0), Local_200.f_31[iParam0 /*17*/].f_12, 99999999, 1, 1);
					}
					unk_0x2FD7042D8FE731D1(func_20(iParam0), 1);
					unk_0x6553935614875699(func_20(iParam0), 42, 1);
					unk_0x76C1E6E8DA089C11(func_20(iParam0), 1);
					unk_0xD14E5ED9D5665519(func_20(iParam0), 43, 1);
					unk_0xD14E5ED9D5665519(func_20(iParam0), 44, 1);
					unk_0x61D7C8D2DB2887AA(func_20(iParam0), 1);
					unk_0x7BCBC6B8F89A88C1(func_20(iParam0), Local_200.f_23, 10f, 0, 0);
					unk_0xDEA5F99894469373(func_20(iParam0), Global_1574253);
					if (iParam0 == 3)
					{
						unk_0xD5FDD0DED35FFF91(func_20(iParam0), "WORLD_HUMAN_WELDING", 0, 0);
					}
				}
			}
		}
	}
	if (!func_21(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x98C9563B38ACD6D9(1))
	{
		return 0;
	}
	iVar0 = unk_0xB500796AAD639F82(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
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

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xBECC89ACB4E5D4ED(iParam0);
	return unk_0x5C9FE32E2FF37989(iParam0);
}

int func_71()
{
	int iVar0;
	
	if (!func_22())
	{
		if (func_70(Local_200.f_100.f_5))
		{
			if (unk_0x432BC9C0928AEEC4(1))
			{
				if (func_73(&(Local_200.f_100), Local_200.f_100.f_5, Local_200.f_100.f_1, Local_200.f_100.f_4, 1, 1, 1, 0, 1, 1))
				{
					unk_0x4CEDDB3E1734081F(func_72(), 1, 1);
					if (unk_0xAC584872D0639309("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xF5A99D0F2DE51D19(func_19(), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0xAC584872D0639309("MPBitset", 3))
					{
						if (unk_0x7B716E2E84158F57(func_19(), "MPBitset"))
						{
							iVar0 = unk_0x5330D6C095A88596(func_19(), "MPBitset");
						}
						unk_0xE27C8E42A97895CF(&iVar0, 10);
						unk_0xE27C8E42A97895CF(&iVar0, 11);
						unk_0xF5A99D0F2DE51D19(func_19(), "MPBitset", iVar0);
					}
					unk_0x68018E1A807B2CF1(func_19(), 0, 1, 0);
					unk_0xE2098C4F0BF55A98(func_19(), 1);
					unk_0x372BD522D381233C(func_19(), 1);
					unk_0xEAF2F3F5A45270D2(func_19());
					unk_0xCE889B96E78E6DC5(func_19());
					unk_0xD53D4444E2EE35FA(func_19(), 1);
					unk_0xAFD185F8D087942A(func_19(), 1);
					unk_0x786698C8F3347C87(func_19(), 1, 0);
					unk_0x60A0634A78E88070(1, joaat("weapon_vehicle_rocket"), func_19(), 0);
					unk_0xDC06178CBD34E048(func_19(), 0);
				}
			}
		}
	}
	if (!func_22())
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	if (func_22())
	{
		return unk_0x4C4151C3DEC199DC(Local_200.f_100);
	}
	return -1;
}

int func_73(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
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
	uVar0 = unk_0x75409DE1FC985A9D(uParam1, Param2, uParam5, iParam7, iParam6);
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

int func_74()
{
	if (!func_632())
	{
		if (func_70(Local_200.f_27))
		{
			if (unk_0xFCECCB6C10A241DF(1))
			{
				if (func_76(&(Local_200.f_22), Local_200.f_27, Local_200.f_23, 1, 1, 0, 1))
				{
					unk_0x4CEDDB3E1734081F(func_627(), 1, 1);
					unk_0xE2098C4F0BF55A98(func_627(), 0);
					unk_0x372BD522D381233C(func_627(), 1);
					unk_0xEAF2F3F5A45270D2(func_627());
					unk_0xEF32567B3A5047F5(func_627(), Local_200.f_26);
					unk_0xEC337F42DFBAD859(func_627(), func_75());
					unk_0x86A805FC25766987(func_627(), 1200);
					unk_0xD6844FCDD2BAFECD(Local_200.f_22, 1);
				}
			}
		}
	}
	if (!func_632())
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	return Global_262145.f_12617;
}

int func_76(var uParam0, var uParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	if (!unk_0xFCECCB6C10A241DF(1))
	{
		return 0;
	}
	*uParam0 = unk_0xE0E063A077171A2A(unk_0xE6B4261E1DAB4EE0(uParam1, Param2, iParam6, bParam5, iParam7));
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(unk_0xE65C345C8E8CDA4A(*uParam0), iParam8);
		if (unk_0x9CE530DAF9F58C77(unk_0xE65C345C8E8CDA4A(*uParam0)))
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

int func_77()
{
	int iVar0;
	
	if (!func_633())
	{
		if (func_70(Local_200.f_19))
		{
			if (unk_0x432BC9C0928AEEC4(1))
			{
				if (func_73(&(Local_200.f_14), Local_200.f_19, Local_200.f_15, Local_200.f_18, 1, 1, 1, 0, 1, 1))
				{
					unk_0x4CEDDB3E1734081F(func_608(), 1, 1);
					if (unk_0xAC584872D0639309("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xF5A99D0F2DE51D19(func_31(), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0xAC584872D0639309("MPBitset", 3))
					{
						if (unk_0x7B716E2E84158F57(func_31(), "MPBitset"))
						{
							iVar0 = unk_0x5330D6C095A88596(func_31(), "MPBitset");
						}
						unk_0xE27C8E42A97895CF(&iVar0, 10);
						unk_0xE27C8E42A97895CF(&iVar0, 11);
						unk_0xF5A99D0F2DE51D19(func_31(), "MPBitset", iVar0);
					}
					unk_0x22984397339DE6D1(func_31(), 40, 12);
					unk_0xACDED0164ADC06D7(func_31(), 0, 12);
					unk_0x476AC81BE147EC6F(func_31(), 0);
					unk_0x317F30DBC5273E19(func_31(), 0);
					unk_0x68018E1A807B2CF1(func_31(), 0, 1, 0);
					unk_0xE2098C4F0BF55A98(func_31(), 1);
					unk_0x372BD522D381233C(func_31(), 1);
					unk_0xEAF2F3F5A45270D2(func_31());
					unk_0xCE889B96E78E6DC5(func_31());
					unk_0xD53D4444E2EE35FA(func_31(), 1);
					unk_0xAFD185F8D087942A(func_31(), 1);
					unk_0xDC06178CBD34E048(func_31(), 0);
					unk_0x89FEA50F04D34AD7(func_31(), 0);
					unk_0xF7FEBD401A2B757E(func_31(), 1);
					unk_0x6754A50CEFF53A53(func_31(), 1);
					unk_0xBC70D0F4C7832614(func_31(), func_80());
					unk_0xEC337F42DFBAD859(func_31(), func_79());
					unk_0xF4CB4D4221C2D77E(func_31(), func_79());
					unk_0xFC462627D90533FE(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0xA393DEF92D73C91E(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0x47A85F333BCFEC77(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0x01AC8DB217B99AE3(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0xE4E9718AC6F58EB9(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0xD7757C8C366A0BD9(func_31(), 0);
					if (func_78())
					{
						unk_0x786698C8F3347C87(func_31(), 1, 0);
					}
					else
					{
						unk_0x786698C8F3347C87(func_31(), 0, 0);
					}
					unk_0xF313EEF1A670792F(func_31(), 0);
					if ((IntToFloat(func_79()) * 0.9f) > 900f)
					{
						unk_0x5FC7DD33523468C5(func_31(), (IntToFloat(func_79()) * 0.9f));
					}
				}
			}
		}
	}
	if (!func_633())
	{
		return 0;
	}
	return 1;
}

bool func_78()
{
	return Global_262145.f_12606;
}

int func_79()
{
	return Global_262145.f_12614;
}

var func_80()
{
	return Global_262145.f_12618;
}

int func_81()
{
	if (!func_8(1))
	{
		if (func_86())
		{
			Local_200.f_11 = iLocal_159[unk_0xA6055C735E3DD877(0, 3)];
			Local_200.f_12 = unk_0xA6055C735E3DD877(0, 3);
			if (func_85() > -1)
			{
				Local_200.f_11 = func_85();
				if (Global_2464975.f_4995 != Local_200.f_11)
				{
					Global_2464975.f_4996 = -1;
					Global_2464975.f_4995 = Local_200.f_11;
				}
				if (Global_2464975.f_4996 == -1)
				{
					Local_200.f_12 = 0;
					Global_2464975.f_4996 = 0;
				}
				else if (Global_2464975.f_4996 == 0)
				{
					Local_200.f_12 = 1;
					Global_2464975.f_4996 = 1;
				}
				else if (Global_2464975.f_4996 == 1)
				{
					Local_200.f_12 = 2;
					Global_2464975.f_4996 = 2;
				}
				else
				{
					Local_200.f_12 = 0;
					Global_2464975.f_4996 = 0;
				}
			}
			if (!func_84() || func_85() > -1)
			{
				switch (Local_200.f_11)
				{
					case 0:
						Local_200.f_15 = { 189.9142f, -2513.33f, 4.9961f };
						Local_200.f_18 = 269.0188f;
						Local_200.f_23 = { 1042.862f, -2873.798f, 18.0165f };
						Local_200.f_26 = 89.5995f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { 1042.85f, -2873.894f, 20.8386f };
						Local_200.f_31[0 /*17*/].f_4 = 353.3989f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { 1052.66f, -2866.365f, 18.0336f };
						Local_200.f_31[1 /*17*/].f_4 = 45.1981f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { 1061.598f, -2885.226f, 18.018f };
						Local_200.f_31[2 /*17*/].f_4 = 41.5981f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { 1046.898f, -2873.773f, 18.018f };
						Local_200.f_31[3 /*17*/].f_4 = 104.5985f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { 1057.638f, -2890.931f, 18.018f };
						Local_200.f_100.f_4 = 46.9998f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 1:
						Local_200.f_15 = { 47.3589f, -325.5841f, 43.1512f };
						Local_200.f_18 = 158.5709f;
						Local_200.f_23 = { -181.4615f, -1069.324f, 41.1378f };
						Local_200.f_26 = 140.5992f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { -182.4058f, -1069.914f, 43.96f };
						Local_200.f_31[0 /*17*/].f_4 = 167.799f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { -180.9027f, -1084.14f, 41.1747f };
						Local_200.f_31[1 /*17*/].f_4 = 150.5984f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { -171.2542f, -1084.216f, 41.1393f };
						Local_200.f_31[2 /*17*/].f_4 = 343.398f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { -178.9076f, -1066.203f, 41.1393f };
						Local_200.f_31[3 /*17*/].f_4 = 145.3985f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { -159.393f, -1085.093f, 41.139f };
						Local_200.f_100.f_4 = 27.197f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 2:
						Local_200.f_15 = { -1678.679f, 488.4541f, 127.8763f };
						Local_200.f_18 = 294.2007f;
						Local_200.f_23 = { -601.9863f, 313.6457f, 88.2f };
						Local_200.f_26 = 244.7996f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { -602.1668f, 313.48f, 91.0222f };
						Local_200.f_31[0 /*17*/].f_4 = 214.4477f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { -593.0814f, 320.082f, 88.2015f };
						Local_200.f_31[1 /*17*/].f_4 = 303.5987f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { -582.2228f, 297.6816f, 93.0922f };
						Local_200.f_31[2 /*17*/].f_4 = 62.5994f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { -605.6559f, 315.3309f, 88.2015f };
						Local_200.f_31[3 /*17*/].f_4 = 246.6474f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { -574.594f, 284.302f, 93.092f };
						Local_200.f_100.f_4 = 59.246f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 3:
						Local_200.f_15 = { -1014.687f, -1927.288f, 18.7639f };
						Local_200.f_18 = 44.0083f;
						Local_200.f_23 = { -1538.633f, -3183.779f, 12.9435f };
						Local_200.f_26 = 296.5988f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { -1538.567f, -3183.617f, 15.7656f };
						Local_200.f_31[0 /*17*/].f_4 = 5.3979f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { -1523.649f, -3198.947f, 13.6499f };
						Local_200.f_31[1 /*17*/].f_4 = 359.998f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { -1536.221f, -3200.823f, 12.9449f };
						Local_200.f_31[2 /*17*/].f_4 = 359.998f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { -1541.995f, -3185.51f, 12.9449f };
						Local_200.f_31[3 /*17*/].f_4 = 308.5976f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { -1544.632f, -3201.68f, 12.945f };
						Local_200.f_100.f_4 = 306.3984f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 4:
						Local_200.f_15 = { 1882.029f, -1045.27f, 78.2375f };
						Local_200.f_18 = 170.8719f;
						Local_200.f_23 = { 1203.167f, -1506.968f, 33.691f };
						Local_200.f_26 = 21.999f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { 1202.172f, -1506.194f, 36.513f };
						Local_200.f_31[0 /*17*/].f_4 = 160.799f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { 1201.206f, -1503.156f, 33.693f };
						Local_200.f_31[1 /*17*/].f_4 = 136.998f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { 1208.337f, -1501.759f, 33.693f };
						Local_200.f_31[2 /*17*/].f_4 = 108.799f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { 1204.782f, -1510.913f, 33.693f };
						Local_200.f_31[3 /*17*/].f_4 = 24.999f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { 1199.658f, -1494.233f, 33.693f };
						Local_200.f_100.f_4 = 127.4f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 5:
						Local_200.f_15 = { -2039.003f, -265.5846f, 22.3858f };
						Local_200.f_18 = 143.0463f;
						Local_200.f_23 = { -3100.435f, 444.906f, 1.374f };
						Local_200.f_26 = 308.598f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { -3100.591f, 444.925f, 4.196f };
						Local_200.f_31[0 /*17*/].f_4 = 260.397f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { -3097.096f, 444.617f, 1.369f };
						Local_200.f_31[1 /*17*/].f_4 = 200.796f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { -3081.263f, 446.521f, 3.209f };
						Local_200.f_31[2 /*17*/].f_4 = 116.995f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { -3103.644f, 442.422f, 1.384f };
						Local_200.f_31[3 /*17*/].f_4 = 312.795f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { -3076.92f, 465.435f, 1.335f };
						Local_200.f_100.f_4 = 198.799f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 6:
						Local_200.f_15 = { 728.02f, -1408.043f, 25.4891f };
						Local_200.f_18 = 90.1806f;
						Local_200.f_23 = { 1381.42f, -762.7927f, 65.8711f };
						Local_200.f_26 = 92.8485f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { 1381.338f, -763.0068f, 69.6918f };
						Local_200.f_31[0 /*17*/].f_4 = 4.94f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { 1400.973f, -752.1135f, 66.2362f };
						Local_200.f_31[1 /*17*/].f_4 = 90.9655f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { 1379.128f, -775.2779f, 66.2889f };
						Local_200.f_31[2 /*17*/].f_4 = 78.6381f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { 1385.204f, -762.8477f, 65.683f };
						Local_200.f_31[3 /*17*/].f_4 = 92.0539f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { 1361.352f, -758.7062f, 66.6214f };
						Local_200.f_100.f_4 = 326.148f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 7:
						Local_200.f_15 = { 1253.498f, 1840.716f, 79.9641f };
						Local_200.f_18 = 46.8947f;
						Local_200.f_23 = { 2774.083f, 2808.028f, 40.491f };
						Local_200.f_26 = 109.598f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { 2773.714f, 2807.965f, 43.313f };
						Local_200.f_31[0 /*17*/].f_4 = 63.597f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { 2772.637f, 2804.956f, 40.331f };
						Local_200.f_31[1 /*17*/].f_4 = 261.997f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { 2778.04f, 2814.614f, 40.518f };
						Local_200.f_31[2 /*17*/].f_4 = 311.397f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { 2778.008f, 2809.422f, 40.531f };
						Local_200.f_31[3 /*17*/].f_4 = 117.198f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { 2795.438f, 2821.497f, 40.935f };
						Local_200.f_100.f_4 = 250.8f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 8:
						Local_200.f_15 = { -346.9132f, 1154.042f, 324.6277f };
						Local_200.f_18 = 16.8176f;
						Local_200.f_23 = { 672.3871f, 1285.626f, 362.1034f };
						Local_200.f_26 = 267.9326f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { 672.4152f, 1285.745f, 365.9242f };
						Local_200.f_31[0 /*17*/].f_4 = 158.9035f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { 661.6746f, 1280.377f, 359.296f };
						Local_200.f_31[1 /*17*/].f_4 = 265.7611f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { 684.5181f, 1285.442f, 359.296f };
						Local_200.f_31[2 /*17*/].f_4 = 172.8322f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { 668.6322f, 1285.944f, 362.1047f };
						Local_200.f_31[3 /*17*/].f_4 = 268.138f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { 698.5234f, 1281.729f, 359.296f };
						Local_200.f_100.f_4 = 179.1677f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
					
					case 9:
						Local_200.f_15 = { 2272.492f, 4843.567f, 39.515f };
						Local_200.f_18 = 225.5383f;
						Local_200.f_23 = { 1641.274f, 3792.706f, 33.7837f };
						Local_200.f_26 = 124.0543f;
						Local_200.f_108 = { func_83() };
						Local_200.f_111 = 15f;
						Local_200.f_31[0 /*17*/].f_1 = { 1640.446f, 3792.24f, 37.6044f };
						Local_200.f_31[0 /*17*/].f_4 = 130.5668f;
						Local_200.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[0 /*17*/].f_8 = 0;
						Local_200.f_31[0 /*17*/].f_9 = 0;
						Local_200.f_31[0 /*17*/].f_12 = func_82();
						Local_200.f_31[1 /*17*/].f_1 = { 1651.009f, 3802.024f, 37.6556f };
						Local_200.f_31[1 /*17*/].f_4 = 171.5231f;
						Local_200.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[1 /*17*/].f_8 = 0;
						Local_200.f_31[1 /*17*/].f_9 = 0;
						Local_200.f_31[1 /*17*/].f_12 = func_82();
						Local_200.f_31[2 /*17*/].f_1 = { 1653.848f, 3788.61f, 33.9115f };
						Local_200.f_31[2 /*17*/].f_4 = 227.4158f;
						Local_200.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[2 /*17*/].f_8 = 0;
						Local_200.f_31[2 /*17*/].f_9 = 0;
						Local_200.f_31[2 /*17*/].f_12 = func_82();
						Local_200.f_31[3 /*17*/].f_1 = { 1644.477f, 3794.678f, 33.7998f };
						Local_200.f_31[3 /*17*/].f_4 = 119.3968f;
						Local_200.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_200.f_31[3 /*17*/].f_8 = 0;
						Local_200.f_31[3 /*17*/].f_9 = 0;
						Local_200.f_31[3 /*17*/].f_12 = func_82();
						Local_200.f_100.f_1 = { 1653.295f, 3761.657f, 33.7487f };
						Local_200.f_100.f_4 = 36.6346f;
						Local_200.f_100.f_5 = joaat("buzzard");
						Local_200.f_100.f_6 = 0;
						Local_200.f_100.f_7 = 0;
						break;
				}
				Global_2464975.f_4995 = Local_200.f_11;
				if ((!func_30(Local_200.f_15) && !func_30(Local_200.f_23)) && !func_30(Local_200.f_108))
				{
					func_4(1);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	int iVar0;
	
	iVar0 = unk_0xA6055C735E3DD877(0, 4);
	switch (iVar0)
	{
		case 0:
			return joaat("weapon_smg");
		
		case 1:
			return joaat("weapon_carbinerifle");
		
		case 2:
			return joaat("weapon_combatmg");
		
		case 3:
			return joaat("weapon_pumpshotgun");
		
		default:
	}
	return joaat("weapon_carbinerifle");
}

Vector3 func_83()
{
	switch (Local_200.f_11)
	{
		case 0:
			switch (Local_200.f_12)
			{
				case 0:
					return 1531.415f, 1684.644f, 109.006f;
				
				case 1:
					return 2073.5f, 2325.21f, 93.3021f;
				
				case 2:
					return 2452.845f, 1500.187f, 34.6955f;
				
				default:
			}
			break;
		
		case 1:
			switch (Local_200.f_12)
			{
				case 0:
					return 2777.029f, 2852.221f, 34.7472f;
				
				case 1:
					return 2386.253f, 3152.772f, 46.239f;
				
				case 2:
					return 1503.5f, 3761.3f, 33f;
				
				default:
			}
			break;
		
		case 2:
			switch (Local_200.f_12)
			{
				case 0:
					return 1662.926f, 6443.836f, 27.9099f;
				
				case 1:
					return 1987.6f, 5003.8f, 41.5f;
				
				case 2:
					return -470.0827f, 6314.478f, 12.7855f;
				
				default:
			}
			break;
		
		case 3:
			switch (Local_200.f_12)
			{
				case 0:
					return 762.7951f, 4181.884f, 39.5877f;
				
				case 1:
					return 1419.2f, 4368.2f, 42.9f;
				
				case 2:
					return 1713.144f, 4774.958f, 46.583f;
				
				default:
			}
			break;
		
		case 4:
			switch (Local_200.f_12)
			{
				case 0:
					return 369.589f, 3506.247f, 33.3387f;
				
				case 1:
					return 28.005f, 3057.184f, 39.7648f;
				
				case 2:
					return 197.4874f, 3056.602f, 41.7043f;
				
				default:
			}
			break;
		
		case 5:
			switch (Local_200.f_12)
			{
				case 0:
					return -934.4654f, 5533.987f, 5.8178f;
				
				case 1:
					return 353.4302f, 4441.722f, 62.0202f;
				
				case 2:
					return 116.9429f, 3634.013f, 38.7549f;
				
				default:
			}
			break;
		
		case 6:
			switch (Local_200.f_12)
			{
				case 0:
					return 3279.945f, 5162.452f, 18.0005f;
				
				case 1:
					return 2261.117f, 5603.044f, 53.0163f;
				
				case 2:
					return 2939.061f, 4535.25f, 47.6496f;
				
				default:
			}
			break;
		
		case 7:
			switch (Local_200.f_12)
			{
				case 0:
					return -809.7571f, -2664.963f, 12.812f;
				
				case 1:
					return -1211.795f, -2048.009f, 13.4178f;
				
				case 2:
					return 179.3704f, -2168.603f, 10.4103f;
				
				default:
			}
			break;
		
		case 8:
			switch (Local_200.f_12)
			{
				case 0:
					return 130.4951f, 6663.956f, 30.7705f;
				
				case 1:
					return -193.6152f, 6219.429f, 30.4893f;
				
				case 2:
					return 195.7f, 6412.5f, 30.2f;
				
				default:
			}
			break;
		
		case 9:
			switch (Local_200.f_12)
			{
				case 0:
					return -1567.759f, 845.0679f, 183.0854f;
				
				case 1:
					return -817.536f, 865.8911f, 202.0182f;
				
				case 2:
					return -921.0893f, -725.2122f, 18.9176f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_84()
{
	if (Global_2464975.f_4995 == Local_200.f_11)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	return Global_2464975.f_4685.f_137;
}

int func_86()
{
	int iVar0;
	float fVar1;
	float fVar2[3];
	struct<3> Var6;
	
	fVar2[0] = 9999.9f;
	fVar2[1] = 9999.9f;
	fVar2[2] = 9999.9f;
	if (func_683(unk_0xE0BDAFA1A39552D6(), 1, 1))
	{
		Var6 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
		iVar0 = 0;
		while (iVar0 < 11)
		{
			fVar1 = unk_0xA1F52EC3ECE1D42E(Var6, func_87(iVar0), 0);
			if (fVar1 < fVar2[0])
			{
				fVar2[2] = fVar2[1];
				iLocal_159[2] = iLocal_159[1];
				fVar2[1] = fVar2[0];
				iLocal_159[1] = iLocal_159[0];
				fVar2[0] = fVar1;
				iLocal_159[0] = iVar0;
			}
			else if (fVar1 > fVar2[0] && fVar1 < fVar2[1])
			{
				fVar2[2] = fVar2[1];
				iLocal_159[2] = iLocal_159[1];
				fVar2[1] = fVar1;
				iLocal_159[1] = iVar0;
			}
			else if (fVar1 > fVar2[1] && fVar1 < fVar2[2])
			{
				fVar2[2] = fVar1;
				iLocal_159[2] = iVar0;
			}
			iVar0++;
		}
	}
	if ((iLocal_159[0] != -1 && iLocal_159[1] != -1) && iLocal_159[2] != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 189.9142f, -2513.33f, 4.9961f;
		
		case 1:
			return 47.3589f, -325.5841f, 43.1512f;
		
		case 2:
			return -1678.679f, 488.4541f, 127.8763f;
		
		case 3:
			return -1014.687f, -1927.288f, 18.7639f;
		
		case 4:
			return 1882.029f, -1045.27f, 78.2375f;
		
		case 5:
			return -2039.003f, -265.5846f, 22.3858f;
		
		case 6:
			return 728.02f, -1408.043f, 25.4891f;
		
		case 7:
			return 1253.498f, 1840.716f, 79.9641f;
		
		case 8:
			return -346.9132f, 1154.042f, 324.6277f;
		
		case 9:
			return 2272.492f, 4843.567f, 39.515f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_88(int iParam0)
{
	Local_200.f_0 = iParam0;
}

int func_89()
{
	if (Global_2464975.f_4685.f_13)
	{
		Global_2464975.f_4685.f_13 = 0;
		return 1;
	}
	return 0;
}

void func_90()
{
	switch (func_63())
	{
		case 0:
			break;
		
		case 1:
			if (!func_581(2))
			{
				func_560(170, func_628(), -1);
				func_559(2);
			}
			else if (!func_581(3))
			{
				if (func_48(&(Local_200.f_2), 10000, 0))
				{
					func_559(3);
				}
			}
			func_483();
			func_482();
			func_481();
			func_480();
			func_477();
			func_474();
			func_471();
			func_469();
			func_468();
			func_467(1);
			func_463();
			func_460();
			if ((!func_455() && !func_454()) && !func_453(170))
			{
				if (func_61() == 0)
				{
					if (func_436(1))
					{
						if (!func_581(4))
						{
							func_432();
							func_559(4);
						}
						func_415();
						func_413();
						func_397();
						func_395();
						func_391();
						func_383();
						switch (func_382(unk_0x490BA5FDD7EE47A9()))
						{
							case 0:
								if (func_628())
								{
									if (!func_581(6))
									{
										func_380();
										func_378(1);
										func_377(1);
										func_376(1);
										func_559(6);
									}
									func_361(0);
									func_353(0);
									func_332(0);
									if (!func_9(unk_0x84CE7B1EF500E926(), 6))
									{
										if (func_331())
										{
											func_330(6);
										}
									}
								}
								else if (func_329())
								{
									func_361(0);
									func_353(0);
									func_332(0);
								}
								else if (!func_329())
								{
									if (func_328() || func_327())
									{
										func_361(3);
										func_353(10);
									}
								}
								if (func_8(2))
								{
									func_326(1);
								}
								break;
							
							case 1:
								if (func_628())
								{
									if (func_325())
									{
										if (func_331())
										{
											if (!func_9(unk_0x84CE7B1EF500E926(), 6))
											{
												func_330(6);
											}
											if (!func_581(5))
											{
												func_559(5);
											}
											func_353(7);
										}
									}
									else if (!func_581(5))
									{
										if (func_331())
										{
											if (!func_9(unk_0x84CE7B1EF500E926(), 6))
											{
												func_330(6);
											}
											func_559(5);
										}
									}
								}
								else if (!func_329())
								{
									if (func_328() || func_327())
									{
										func_361(3);
										func_353(10);
									}
								}
								if (func_8(11))
								{
									func_326(2);
								}
								break;
							
							case 2:
								if (func_628() || func_329())
								{
									func_332(1);
									if (func_325())
									{
										func_353(8);
										if (func_38(unk_0x06736567F820A39E(), func_39(), 0) < 100f)
										{
											func_353(12);
										}
									}
									else
									{
										func_353(9);
									}
									if (func_8(15))
									{
										func_353(11);
									}
								}
								else
								{
									func_361(3);
									func_353(10);
								}
								break;
							}
						}
				}
			}
			else
			{
				func_318();
				func_317();
				if (func_633())
				{
					if (!unk_0x4FD796341C251D39(func_31(), unk_0xE0BDAFA1A39552D6()))
					{
						unk_0xD81261A54FF973C2(func_31(), unk_0xE0BDAFA1A39552D6(), 1);
					}
				}
			}
			break;
		
		case 2:
			if (func_316(unk_0xE0BDAFA1A39552D6()))
			{
				func_378(0);
			}
			if (Global_2464975.f_5005 == 1)
			{
				Global_2464975.f_5005 = 0;
			}
			func_290();
			func_279();
			func_383();
			func_318();
			func_91();
			break;
		
		case 3:
			break;
	}
}

void func_91()
{
	bool bVar0;
	int iVar1;
	
	if (func_61() != 0)
	{
		if (func_436(1))
		{
			if ((!func_455() && !func_454()) && !func_453(171))
			{
				if (func_277())
				{
					switch (func_61())
					{
						case 2:
							func_361(11);
							break;
						
						case 3:
							break;
						
						case 1:
							if (func_628())
							{
								func_361(2);
							}
							else
							{
								func_361(8);
							}
							break;
						
						case 4:
							if (Local_200.f_6 != 0)
							{
								switch (Local_200.f_6)
								{
									case 1:
										if (func_628() || func_329())
										{
											if (!func_329())
											{
												bVar0 = true;
												func_276();
											}
											func_361(1);
										}
										else
										{
											func_361(10);
										}
										break;
									
									case 2:
										if (func_628() || func_329())
										{
											func_361(2);
										}
										else if (func_275())
										{
											bVar0 = true;
											func_361(4);
											func_276();
										}
										else if (func_274())
										{
											func_361(5);
											func_276();
										}
										else if (func_273())
										{
											if (func_271(func_272(), 1))
											{
												func_361(7);
											}
											else
											{
												func_361(6);
											}
										}
										else
										{
											func_361(8);
										}
										break;
									
									case 3:
										if (func_628() || func_329())
										{
											func_361(2);
										}
										else if (func_270(unk_0xE0BDAFA1A39552D6()))
										{
											func_361(9);
										}
										else
										{
											func_361(8);
										}
										break;
									
									case 4:
										if (func_628())
										{
											bVar0 = true;
											func_361(12);
										}
										else
										{
											func_361(13);
										}
										break;
									}
							}
							break;
						}
				}
				if (!func_581(1))
				{
					iVar1 = unk_0xE0BDAFA1A39552D6();
					func_268(0, iVar1);
					if (bVar0)
					{
						if (Local_200.f_6 == 1)
						{
							if (func_628())
							{
								iLocal_114 = (iLocal_114 + func_34());
							}
						}
						else if (Local_200.f_6 == 2)
						{
							if (func_275())
							{
								iLocal_114 = (iLocal_114 + func_65());
							}
						}
					}
					func_117(170, bVar0, &iLocal_114);
					func_664(bVar0, 0);
					func_559(1);
				}
			}
		}
	}
	if (func_92(&uLocal_124, 0))
	{
		func_330(0);
	}
}

int func_92(var uParam0, bool bParam1)
{
	bool bVar0;
	
	func_116(29);
	if ((*uParam0 > 0 && !func_115()) && func_108(unk_0xE0BDAFA1A39552D6()) != 0)
	{
		if (!func_105())
		{
			func_104();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_60(&(uParam0->f_3)))
			{
				func_59(&(uParam0->f_3), 0, 0);
			}
			else if (func_48(&(uParam0->f_3), 1000, 0))
			{
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 2);
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 0);
					func_59(&(uParam0->f_5), 0, 0);
				}
				func_59(&(uParam0->f_1), 0, 0);
				func_103(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_60(&(uParam0->f_5)))
			{
				if (func_48(&(uParam0->f_5), 3000, 0))
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
				func_97();
				func_103(uParam0, 2);
			}
			break;
		
		case 2:
			func_97();
			if (func_48(&(uParam0->f_1), 15000, 0))
			{
				if (func_93(func_94()))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
				func_103(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_48(&(uParam0->f_1), 23500, 0))
			{
				unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
				unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 2);
				func_103(uParam0, 4);
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

bool func_93(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

char* func_94()
{
	if (func_95(func_96()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_95(int iParam0)
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

int func_96()
{
	return Global_1616402;
}

void func_97()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0))
	{
		if ((((((((!unk_0xCA914B57A3600215() && !unk_0x7DA173D4FD42F36B(Global_2464975.f_743, 2)) && func_683(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !Global_68089) && !Global_52961) && !unk_0x4FF34B5B023875E1()) && !func_102(unk_0xE0BDAFA1A39552D6(), 22)) && func_108(unk_0xE0BDAFA1A39552D6()) != 0) && !func_100(func_101()))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 1);
			func_99(func_94(), -1);
			func_98(1);
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 0);
		}
	}
}

void func_98(int iParam0)
{
	if (iParam0 && !func_115())
	{
		unk_0x962E604CCA53388F(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_99(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam1);
}

int func_100(int iParam0)
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

int func_101()
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

bool func_102(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_10.f_4, iParam1);
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_104()
{
	Global_2445584 = 1;
}

int func_105()
{
	if (func_106(unk_0xE0BDAFA1A39552D6()) == 170)
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_107(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_28;
	}
	return -1;
}

int func_107(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_114(iParam0) && !func_113(iParam0)) && !unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8));
	bVar2 = func_270(iParam0);
	uVar3 = func_112();
	uVar4 = func_455();
	if ((bVar1 && (func_111(iParam0) || func_110(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_316(iParam0)) && !func_109(iParam0)))
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

bool func_109(int iParam0)
{
	return func_102(iParam0, 19);
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 0);
	}
	return 0;
}

int func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 7);
	}
	return 0;
}

bool func_112()
{
	return Global_1312416;
}

bool func_113(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 2);
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/] != -1;
	}
	return 0;
}

bool func_115()
{
	return Global_2428549.f_2191[0 /*72*/].f_1 != 0;
}

void func_116(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

void func_117(int iParam0, bool bParam1, int iParam2)
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
	
	func_266(iParam0, &fVar2, &fVar3);
	if (iParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + iParam2->f_1);
		iVar0 = (iVar0 + *iParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_265(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * iParam2->f_3));
		iVar0 = (iVar0 + func_264(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * iParam2->f_2));
	}
	if (func_106(unk_0xE0BDAFA1A39552D6()) == 167 || func_106(unk_0xE0BDAFA1A39552D6()) == 168)
	{
		if (bParam1)
		{
			if (func_263(unk_0xE0BDAFA1A39552D6()) > 0)
			{
				func_262();
			}
			else
			{
				func_261();
			}
		}
		else
		{
			func_260();
		}
	}
	if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_259(unk_0xE0BDAFA1A39552D6()))
			{
				if (iParam2->f_5)
				{
					iVar0 = (iVar0 + func_251(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_122));
				}
				else
				{
					iVar4 = iParam2->f_7;
					if (iParam2->f_8 > 0)
					{
						iVar4 = (iVar4 + iParam2->f_8);
					}
					iVar5 = func_250(iVar4);
					iVar6 = (iVar5 * iVar4);
					iVar0 = (iVar0 + iVar6);
					iVar8 = func_249(&uVar7);
					iVar9 = Global_262145.f_13770;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar8) * Global_262145.f_12980));
					iVar11 = ((iVar0 / 100) * iVar10);
					iVar0 = (iVar0 + iVar11);
					if (iParam2->f_6)
					{
						iVar0 = (iVar0 + *iParam2);
					}
					if (iVar8 > 0 && iParam2->f_9 != 4)
					{
						func_248(44);
					}
				}
				func_242(iVar0);
				func_241();
				Global_2464975.f_4685.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < unk_0xC4A9F8E5EC59EB4F())
				{
					iVar13 = iVar12;
					if (unk_0x6B90EB073E0E641F(iVar13))
					{
						iVar14 = unk_0x1886D89D5D557CB4(iVar13);
						if (func_240(iVar14))
						{
							func_232(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_259(unk_0xE0BDAFA1A39552D6()))
		{
			func_231();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_259(unk_0xE0BDAFA1A39552D6()))
		{
			if (bParam1)
			{
				func_230();
			}
			func_229();
		}
	}
	iVar15 = func_228();
	if (iVar15 != func_3() && iParam0 != 148)
	{
		if (func_271(unk_0xE0BDAFA1A39552D6(), 0))
		{
			if (!func_5(unk_0xE0BDAFA1A39552D6(), iVar15, 1))
			{
				func_192(&iVar0, 1);
			}
		}
	}
	func_188(iParam0, &iVar16, &iVar17);
	iVar1 = (iVar1 + iVar16);
	iVar0 = (iVar0 + iVar17);
	if (iVar1 > 0)
	{
		Global_1734817.f_10 = iVar1;
		func_187();
		func_136(0, unk_0x06736567F820A39E(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1734817.f_9 = iVar0;
		iVar20 = func_135();
		if (iVar20 != func_3())
		{
			func_134(iVar20, &uVar18, &uVar19);
		}
		bVar21 = !func_133(1);
		if (iParam0 == 168)
		{
			if (!func_132())
			{
				unk_0x3C4FC10A27FC59C0(iVar0, iVar4);
			}
		}
		else if (func_132())
		{
			func_122(-856006867, iVar0, &iVar22, 0, 1, 0);
			Global_2562803[iVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2562803[iVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2562803[iVar22 /*73*/].f_8.f_56 = bVar21;
		}
		else
		{
			unk_0x2622A5EF3329E2D6(uVar18, uVar19, iVar0, bVar21);
		}
		if (func_121(iParam0))
		{
			if (func_120(iParam0) > -1)
			{
				func_119(func_120(iParam0), iVar0);
			}
		}
		Global_2446413 = iVar0;
		func_118(&Global_2444522, 0, 0);
	}
}

void func_118(var uParam0, bool bParam1, bool bParam2)
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

void func_119(int iParam0, int iParam1)
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

int func_120(int iParam0)
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

int func_121(int iParam0)
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

void func_122(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_132())
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
				func_123(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_123(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_123(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_132())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_131()) || unk_0x8E2645554EC732F0())
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
			*uParam0 = func_130(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_129(1, iParam4);
			Global_2563293 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_124(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_124(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_125(iParam0);
	}
}

void func_125(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_132())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
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
		func_126(&(Global_2562803[iParam0 /*73*/]));
	}
}

void func_126(var uParam0)
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
	func_127(&(uParam0->f_8.f_3));
	func_127(&(uParam0->f_8.f_16));
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

void func_127(var uParam0)
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

int func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_129(int iParam0, var uParam1)
{
	Global_2446544 = uParam1;
	Global_2446543 = iParam0;
}

int func_130(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2562803[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_132())
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

int func_131()
{
	return Global_1312747;
}

int func_132()
{
	if (unk_0x55812CD5A331E1F8())
	{
		return 1;
	}
	return 0;
}

bool func_133(bool bParam0)
{
	return func_271(unk_0xE0BDAFA1A39552D6(), bParam0);
}

void func_134(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1610705[iParam0 /*178*/].f_10.f_7[0];
	*uParam2 = Global_1610705[iParam0 /*178*/].f_10.f_7[1];
}

int func_135()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10;
}

int func_136(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_137(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_137(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_147(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC1EDB61CE0A4B94E(iParam1))
		{
			if (unk_0x77CB3F400804EDD1(iParam1))
			{
				iVar1 = unk_0x406B8F450D0105AB(iParam1);
				func_143(unk_0xB90C4C04BACF96A1(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_138(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_138(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_141(iParam0, 1) };
	if (iParam0 == func_140(unk_0x06736567F820A39E()))
	{
		func_139(1);
	}
	func_143(Var0, iParam1, 0, sParam2, iParam3);
}

void func_139(int iParam0)
{
	Global_2428549.f_1375 = iParam0;
}

int func_140(int iParam0)
{
	return iParam0;
}

Vector3 func_141(int iParam0, bool bParam1)
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
	if (iParam0 == func_142(unk_0x06736567F820A39E()) && unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
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

int func_142(int iParam0)
{
	return iParam0;
}

void func_143(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2428549.f_774[iVar1 /*30*/].f_4 = func_146(Global_2428549.f_774[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2428549.f_774[iVar1 /*30*/].f_7 = unk_0x201D90648B2AE3CE();
			Global_2428549.f_774[iVar1 /*30*/].f_3 = iParam3;
			Global_2428549.f_774[iVar1 /*30*/].f_8 = iParam4;
			Global_2428549.f_774[iVar1 /*30*/].f_9 = func_145();
			Global_2428549.f_774[iVar1 /*30*/].f_10 = func_144();
			StringCopy(&(Global_2428549.f_774[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2428549.f_774[iVar1 /*30*/].f_26 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), iParam6);
		}
	}
}

int func_144()
{
	if (Global_2428549.f_1375)
	{
		Global_2428549.f_1375 = 0;
		return 1;
	}
	Global_2428549.f_1375 = 0;
	return 0;
}

var func_145()
{
	var uVar0;
	
	uVar0 = Global_2428549.f_1377;
	Global_2428549.f_1377 = 1;
	return uVar0;
}

float func_146(struct<3> Param0, var uParam3, var uParam4)
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

var func_147(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_148(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_148(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_186(unk_0xE0BDAFA1A39552D6()) || func_185(unk_0xE0BDAFA1A39552D6()))
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
	if (func_184(uParam2))
	{
	}
	if (func_183())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_181(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_180(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_177(0, &iVar1);
					break;
				
				case 3:
					func_177(1, &iVar1);
					break;
				
				case 1:
					func_173(&iVar1);
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
			func_170(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_159((func_169(unk_0xE0BDAFA1A39552D6()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xADECF862874B38F9(iVar1, iParam8, iParam9);
				if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_2 != -1)
				{
					func_170(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_153(iVar1);
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
				func_149((func_151(unk_0xE0BDAFA1A39552D6()) + iVar1));
			}
			else
			{
				func_149((func_151(unk_0xE0BDAFA1A39552D6()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_149(int iParam0)
{
	if (func_183())
	{
		Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_5 = iParam0;
		func_150(joaat("mpply_globalxp"), iParam0);
	}
}

void func_150(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, uParam1, 1);
	}
}

int func_151(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_683(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return func_152(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_152(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_152(int iParam0)
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

void func_153(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_158(unk_0xE0BDAFA1A39552D6()) };
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(&Var0))
		{
			iVar13 = func_156(func_157(&Var0));
			if (iVar13 == 0)
			{
				func_155(&Global_1347700, iParam0);
				func_154(joaat("mpply_crew_local_xp_0"), Global_1347700);
			}
			else if (iVar13 == 1)
			{
				func_155(&Global_1347701, iParam0);
				func_154(joaat("mpply_crew_local_xp_1"), Global_1347701);
			}
			else if (iVar13 == 2)
			{
				func_155(&Global_1347702, iParam0);
				func_154(joaat("mpply_crew_local_xp_2"), Global_1347702);
			}
			else if (iVar13 == 3)
			{
				func_155(&Global_1347703, iParam0);
				func_154(joaat("mpply_crew_local_xp_3"), Global_1347703);
			}
			else if (iVar13 == 4)
			{
				func_155(&Global_1347704, iParam0);
				func_154(joaat("mpply_crew_local_xp_4"), Global_1347704);
			}
		}
	}
}

void func_154(int iParam0, var uParam1)
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

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_156(int iParam0)
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

int func_157(var uParam0)
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

struct<13> func_158(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3C903E672223AE0B(iParam0, &Var0, 13);
	return Var0;
}

void func_159(int iParam0, int iParam1, int iParam2)
{
	if (func_183())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7814 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347815[func_168(-1)])
				{
					unk_0xADECF862874B38F9(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347815[func_168(-1)])
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
		if (func_167(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_1 = iParam0;
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_6 = func_165(iParam0, 1);
		}
		func_164(632, iParam0, -1, 1);
		func_163(633, func_165(iParam0, 1), -1, 1);
		Global_1347815[func_168(-1)] = iParam0;
		func_160(7, 0);
	}
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_162(iParam0, iParam1))
	{
		iVar0 = func_161();
		Global_2444000[iVar0] = iParam0;
	}
}

int func_161()
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

int func_162(int iParam0, var uParam1)
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

void func_163(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347761[func_168(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347767[func_168(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347773[func_168(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347779[func_168(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347737[func_168(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347743[func_168(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347749[func_168(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347755[func_168(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347713[func_168(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347719[func_168(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347725[func_168(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347731[func_168(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347785[func_168(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347791[func_168(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347797[func_168(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347803[func_168(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347809[func_168(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347815[func_168(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347821[func_168(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2497579[0 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2497579[1 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2497579[2 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2497579[3 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3918:
			Global_2497641[func_168(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347827[func_168(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347833[func_168(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347839[func_168(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347845[func_168(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2497610[0 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2497610[1 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2497610[2 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2497610[3 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2497610[4 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2497646[0 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2497646[1 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2497646[2 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2497646[3 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2497646[4 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2497672[0 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2497672[1 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2497672[2 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2497672[3 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2497672[4 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2497610[5 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2497579[4 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2497698[func_168(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2497713[func_168(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2497703[func_168(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2497718[func_168(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2497708[func_168(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2497723[func_168(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2497728[func_168(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_165(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_166(iParam0, 0);
}

int func_166(int iParam0, int iParam1)
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

int func_167(int iParam0)
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

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_131();
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

int func_169(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return Global_1347815[func_168(-1)];
			}
			else if (func_167(iParam0))
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347815[func_168(-1)];
	}
	return 0;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_172(iParam0, func_168(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_171(iParam0))
	{
		func_163(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_164(iParam0, iVar0, iParam2, 1);
	}
}

int func_171(int iParam0)
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

int func_172(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_168(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_173(int iParam0)
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
				if (unk_0xF749B19A9F9B3DBF(iVar5) == iVar1 || func_176(unk_0xF749B19A9F9B3DBF(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xE0BDAFA1A39552D6())
					{
						if (func_175(unk_0xE0BDAFA1A39552D6(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_174(*iParam0, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_174(*iParam0, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_174(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_175(int iParam0, int iParam1)
{
	if (unk_0x3D340893CA28EFFC())
	{
		Global_2460474 = { func_158(iParam0) };
		Global_2460487 = { func_158(iParam1) };
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

int func_176(int iParam0, int iParam1, int iParam2)
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

void func_177(bool bParam0, int iParam1)
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
				if (func_683(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xE0BDAFA1A39552D6())
					{
						iVar1++;
						if (func_175(unk_0xE0BDAFA1A39552D6(), iVar4))
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
			if (func_683(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xE0BDAFA1A39552D6())
				{
					if (func_178(unk_0xE0BDAFA1A39552D6(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_175(unk_0xE0BDAFA1A39552D6(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_174(*iParam1, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_174(*iParam1, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_178(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_179(iParam0), func_179(iParam1));
	return 0f;
}

Vector3 func_179(int iParam0)
{
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC66ACBB5C8ECB07() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_174(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_181(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xED165ADF51B05913(iParam0) > func_169(unk_0xE0BDAFA1A39552D6()))
		{
			iParam0 = -func_169(unk_0xE0BDAFA1A39552D6());
		}
	}
	if (func_182(8000, 0, 0) > 0)
	{
		if (func_182(8000, 0, 0) < (iParam0 + func_169(unk_0xE0BDAFA1A39552D6())))
		{
			iParam0 = (func_182(8000, 0, 0) - func_169(unk_0xE0BDAFA1A39552D6()));
		}
	}
	return iParam0;
}

int func_182(int iParam0, bool bParam1, int iParam2)
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

int func_183()
{
	return 1;
}

int func_184(var uParam0)
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

bool func_185(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_186(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

void func_187()
{
	Global_2445583 = 1;
}

void func_188(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_191(7))
	{
		return;
	}
	iVar0 = func_190(iParam0);
	iVar1 = func_189(iParam0);
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

int func_189(int iParam0)
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

int func_190(int iParam0)
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

bool func_191(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_18, iParam0);
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_227())
		{
			if (func_133(0))
			{
				if (unk_0xA27C9E8196C79D22(func_135()))
				{
					if (func_226() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_226());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_224(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_195("GB_BCUT_TICK1", func_135(), iVar0, 0, 0, 1, 1);
					}
					func_248(20);
					func_193(func_135(), iVar0, 1);
				}
			}
		}
	}
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_683(iParam0, 0, 1))
	{
		Var0.f_0 = 456;
		Var0.f_1 = unk_0xE0BDAFA1A39552D6();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xCCAB9843EFA5C08A(1, &Var0, 5, func_194(iParam0));
	}
}

var func_194(int iParam0)
{
	var uVar0;
	
	unk_0xE27C8E42A97895CF(&uVar0, iParam0);
	return uVar0;
}

int func_195(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0xD5EA844E0F1947AF(func_204(iParam1, -2, 1, 0));
		unk_0x9C174A0D56FFB64A(func_202(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xD5EA844E0F1947AF(iParam3);
		}
		unk_0xD92C45283BCDA624(iParam2);
		iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		func_196(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_196(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_201() || !unk_0x21A36E2323FEA4B1()) || !func_199(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_197(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = uParam4;
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

int func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_198(iVar0);
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

void func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_199(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_200(-1, 0) == 8;
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

int func_200(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_131();
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

bool func_201()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

var func_202(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_203(&cVar0);
}

var func_203(char[4] cParam0)
{
	return cParam0;
}

int func_204(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_222(iParam0))
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
	if (func_222(unk_0xE0BDAFA1A39552D6()) || (func_221() && func_220()))
	{
		uVar0 = func_219();
		if (unk_0xC1EDB61CE0A4B94E(uVar0))
		{
			if (unk_0x4E75E5867592AC01(iVar0))
			{
				if (unk_0x90CB634380C802C7(iVar0) != -1)
				{
					if (func_683(unk_0x90CB634380C802C7(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
						{
							if (Global_1617902.f_73330[iParam1] != -1)
							{
								return func_218(iParam1, iParam0, 0);
							}
							else
							{
								return func_211(iParam0, unk_0x90CB634380C802C7(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_211(iParam0, unk_0x90CB634380C802C7(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
			{
				if (Global_1617902.f_73330[iParam1] != -1)
				{
					return func_218(iParam1, iParam0, 0);
				}
				else
				{
					return func_205(0, -1, 0);
				}
			}
			else
			{
				return func_205(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
	{
		if (Global_1617902.f_73330[iParam1] != -1)
		{
			return func_218(iParam1, iParam0, 0);
		}
		else
		{
			return func_211(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
		}
	}
	return func_211(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
}

int func_205(bool bParam0, int iParam1, bool bParam2)
{
	return func_206(unk_0xE0BDAFA1A39552D6(), bParam0, iParam1, bParam2);
}

int func_206(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_176(iVar0, iParam2, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_210(1);
				}
				else
				{
					return func_210(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 20))
			{
				return func_207(iVar0, iParam2, 1);
			}
			else
			{
				return func_207(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_210(1);
	}
	return func_210(0);
}

int func_207(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_209(iParam0, iParam1);
	if (func_208(Global_1617902.f_76918))
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

int func_208(int iParam0)
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

int func_209(int iParam0, int iParam1)
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
			if (!func_176(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_210(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_211(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if ((func_217(iParam1, iParam0, iVar0, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)) || ((func_176(unk_0xF749B19A9F9B3DBF(iParam1), unk_0xF749B19A9F9B3DBF(iParam0), 0) && unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 23)) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)))
			{
				return func_210(1);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 26))
			{
				return func_216(1);
			}
			else
			{
				return func_206(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587816[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_210(1);
			}
			else
			{
				return func_206(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_214(iParam0);
	if (!iVar3 == -1)
	{
		return func_212(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(iParam0);
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

var func_213(int iParam0)
{
	return Global_2413817.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_214(int iParam0)
{
	if (!iParam0 == func_3())
	{
		if (func_271(iParam0, 1))
		{
			return Global_2413817.f_1946.f_11[func_215(iParam0)];
		}
	}
	return -1;
}

int func_215(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1610705[iParam0 /*178*/].f_10;
	}
	return func_3();
}

int func_216(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_217(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_218(int iParam0, int iParam1, bool bParam2)
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
		iVar0 = func_206(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

int func_219()
{
	return Global_2359301.f_2;
}

bool func_220()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 4);
}

bool func_221()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

int func_222(int iParam0)
{
	if (func_199(iParam0, 0))
	{
		return 1;
	}
	if (func_223())
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

bool func_223()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

void func_224(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_225(1);
	}
	else
	{
		iVar1 = func_225(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_225(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10577;
}

int func_226()
{
	return Global_262145.f_10576;
}

bool func_227()
{
	return func_259(unk_0xE0BDAFA1A39552D6());
}

int func_228()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_30;
}

void func_229()
{
	int iVar0;
	
	iVar0 = Global_2497703[func_131()];
	iVar0++;
	Global_2497703[func_131()] = iVar0;
	func_164(3245, iVar0, -1, 1);
}

void func_230()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2497698[func_131()];
	iVar1 = Global_2497713[func_131()];
	iVar0++;
	iVar1++;
	Global_2497698[func_131()] = iVar0;
	Global_2497713[func_131()] = iVar1;
	Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_85 = iVar1;
	func_164(3243, iVar0, -1, 1);
	func_164(3244, iVar1, -1, 1);
}

void func_231()
{
	int iVar0;
	
	iVar0 = Global_2497708[func_131()];
	iVar0++;
	func_164(3247, iVar0, -1, 1);
}

void func_232(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_234(iParam0);
	func_233(iParam0, uVar0, iParam1);
}

void func_233(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 453;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_3())
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			unk_0xCCAB9843EFA5C08A(1, &Var0, 4, func_194(iParam0));
		}
	}
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_239();
	iVar0 = func_237(iParam0, iVar0);
	iVar1 = Global_1610705[func_135() /*178*/].f_10.f_155;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12585));
	if (iVar0 < func_236())
	{
		iVar0 = func_236();
	}
	if (iVar0 > func_235())
	{
		iVar0 = func_235();
	}
	return iVar0;
}

int func_235()
{
	return Global_262145.f_12586;
}

int func_236()
{
	return Global_262145.f_13760;
}

int func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_263(iParam0) * func_238());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_238()
{
	return Global_262145.f_13759;
}

var func_239()
{
	return Global_262145.f_10568;
}

int func_240(int iParam0)
{
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (iParam0 != unk_0xE0BDAFA1A39552D6())
		{
			if (func_5(iParam0, unk_0xE0BDAFA1A39552D6(), 0))
			{
				if (!func_102(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_241()
{
	int iVar0;
	
	iVar0 = Global_2497718[func_131()];
	iVar0++;
	func_164(3246, iVar0, -1, 1);
}

void func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2497723[func_131()];
	iVar0 = (iVar0 + iParam0);
	func_164(3248, iVar0, -1, 1);
	if (func_245(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_244(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_243(7666, iVar2, -1, 1);
	}
}

var func_243(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_131();
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

int func_244(int iParam0)
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

int func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_131();
	}
	iVar0 = 0;
	iVar1 = func_247(iParam0, iParam1);
	uVar2 = func_246(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xC4D41F5AA8205814(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_246(int iParam0)
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

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_131();
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

void func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

int func_249(var uParam0)
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
			if (!func_199(iVar2, 0) && !func_5(iVar2, unk_0xE0BDAFA1A39552D6(), 1))
			{
				iVar1++;
			}
			else if (func_199(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

var func_250(int iParam0)
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

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_258(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_257(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_256(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_252(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_252(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_256(unk_0xA6055C735E3DD877(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_252(int iParam0)
{
	int iVar0;
	
	if (func_255(iParam0))
	{
		iVar0 = func_253(func_254(iParam0));
		return func_172(iVar0, -1, 0);
	}
	return 0;
}

int func_253(int iParam0)
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

int func_254(int iParam0)
{
	int iVar0;
	
	if (func_255(iParam0))
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

int func_255(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0)
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

int func_257(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_255(iParam0))
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

int func_258(int iParam0)
{
	int iVar0;
	
	if (func_255(iParam0))
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

int func_259(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_3())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_260()
{
	if (func_227())
	{
		Global_2435608.f_3065.f_70 = 0;
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
	}
}

void func_261()
{
	if (func_227())
	{
		if (Global_2435608.f_3065.f_70 < 10)
		{
			Global_2435608.f_3065.f_70++;
			Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
		}
	}
}

void func_262()
{
	if (func_227())
	{
		if (Global_2435608.f_3065.f_70 > 0)
		{
			Global_2435608.f_3065.f_70 = (Global_2435608.f_3065.f_70 - 1);
			Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
		}
	}
}

int func_263(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_23;
}

int func_264(int iParam0)
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

int func_265(int iParam0)
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

void func_266(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_267(iParam0))
	{
		if (!func_227())
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
	if (func_271(unk_0xE0BDAFA1A39552D6(), 1))
	{
		*uParam1 = Global_262145.f_10584;
		*uParam2 = Global_262145.f_10583;
	}
	iVar0 = func_228();
	if (iVar0 != func_3())
	{
		if (func_5(unk_0xE0BDAFA1A39552D6(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_267(int iParam0)
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

void func_268(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_3())
	{
		if (unk_0xA27C9E8196C79D22(iParam1))
		{
			if (iParam1 == unk_0xE0BDAFA1A39552D6())
			{
				iVar0 = 1;
			}
			else if (func_269(iParam1, unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_683(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
			unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
			Global_2464975.f_4685.f_170 = unk_0x40077EDF3FF70C39();
		}
	}
}

int func_269(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_3() && iParam1 != func_3())
	{
		iVar0 = func_215(iParam0);
		if (iVar0 != func_3())
		{
			return iVar0 == func_215(iParam1);
		}
	}
	return 0;
}

bool func_270(int iParam0)
{
	return func_102(iParam0, 20);
}

bool func_271(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_259(iParam0))
		{
			return 0;
		}
	}
	return Global_1610705[iParam0 /*178*/].f_10 != func_3();
}

int func_272()
{
	return Local_200.f_10;
}

int func_273()
{
	if (func_272() != func_3())
	{
		if (!func_275() && !func_274())
		{
			return 1;
		}
	}
	return 0;
}

int func_274()
{
	if (func_133(1))
	{
		if (func_272() != func_3())
		{
			if (func_5(func_272(), func_135(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_275()
{
	if (unk_0xE0BDAFA1A39552D6() == func_272())
	{
		return 1;
	}
	return 0;
}

void func_276()
{
	if (!func_581(15))
	{
		if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
		{
			unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
			unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
		}
		func_559(15);
	}
}

int func_277()
{
	if ((func_683(unk_0xE0BDAFA1A39552D6(), 1, 1) && !unk_0xCA914B57A3600215()) && func_278())
	{
		return 1;
	}
	return 0;
}

int func_278()
{
	if (unk_0xDF916BCF4D39E8C2() && Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_220 == 99)
	{
		return 1;
	}
	return 0;
}

void func_279()
{
	if (func_633())
	{
		if (func_632())
		{
			if (unk_0x40B3668D7226E0DF(func_32()) && unk_0x40B3668D7226E0DF(func_289()))
			{
				if (unk_0xE9BA6F557B787A3A(func_31(), func_627()) && unk_0x046CEB8397234DA8(func_31(), func_627()))
				{
					unk_0x5C39A1BB8CF5FF55(func_31(), func_627());
					unk_0xEF93E823AAB9B1F5(func_31(), func_627());
				}
			}
		}
		if (func_288())
		{
			if (func_60(&(Local_200.f_20)))
			{
				iLocal_158 = (func_14() - func_287(&(Local_200.f_20), 0, 0));
				if (iLocal_158 <= 0)
				{
					if (unk_0x40B3668D7226E0DF(func_32()))
					{
						unk_0x6FB44A9D2C537B29(func_31(), 1);
						unk_0x8053CB955C7F93DB(func_31(), 1);
						unk_0x399D6718F721A01E(func_31(), 1, 0, -1);
						func_330(5);
					}
				}
				if (func_436(1))
				{
					if (!func_455() && !func_454())
					{
						if (iLocal_158 >= 0)
						{
							if (func_18(unk_0x06736567F820A39E(), func_31(), 1) || (func_329() && func_18(func_219(), func_31(), 1)))
							{
								if ((!func_286() && func_628()) || func_329())
								{
									func_332(2);
									func_283(iLocal_158, "HTV_DESTR_R", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
									func_282();
								}
							}
						}
						else if (func_18(unk_0x06736567F820A39E(), func_31(), 1) || (func_329() && func_18(func_219(), func_31(), 1)))
						{
							if ((!func_286() && func_628()) || func_329())
							{
								func_283(0, "HTV_DESTR_R", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
								func_282();
							}
						}
						if (func_18(unk_0x06736567F820A39E(), func_31(), 1) || (func_329() && func_18(func_219(), func_31(), 1)))
						{
							if (iLocal_177 == 0)
							{
								if (func_280())
								{
									if (!func_60(&uLocal_187))
									{
										func_59(&uLocal_187, 0, 0);
									}
									else if (func_48(&uLocal_187, 1000, 0))
									{
										uLocal_157 = unk_0xD619EBCC6AD6E414();
										unk_0x65C518355A67952C(uLocal_157, "Explosion_Countdown", func_608(), "GTAO_FM_Events_Soundset", 0, 25);
										unk_0x9593DF47DE89B3C7(uLocal_157, "Time", unk_0xBBDA792448DB5A89((iLocal_158 / 1000) + 1));
										iLocal_177 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (iLocal_177)
		{
			if (!unk_0xC543EAF03B57467D(uLocal_157))
			{
				unk_0x8EBF150526027B8E(uLocal_157);
				unk_0x2B84DF57725231E1(uLocal_157);
			}
			iLocal_177 = 0;
		}
	}
}

int func_280()
{
	if (func_115())
	{
		if (func_281(Global_2428549.f_2191[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0)
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

void func_282()
{
	Global_1339962.f_941 = 1;
}

void func_283(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_285(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_284(7, iVar0);
		Global_1339962.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339962.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_4109.f_172[iVar0] = iParam2;
		Global_1339962.f_4109.f_216[iVar0] = iParam3;
		Global_1339962.f_4109.f_183[iVar0] = iParam4;
		Global_1339962.f_4109.f_194[iVar0] = iParam5;
		Global_1339962.f_4109.f_249[iVar0] = iParam6;
		Global_1339962.f_4109.f_260[iVar0] = iParam7;
		Global_1339962.f_4109.f_205[iVar0] = iParam8;
		Global_1339962.f_4109.f_314[iVar0] = iParam9;
		Global_1339962.f_4109.f_325[iVar0] = iParam10;
		Global_1339962.f_4109.f_357[iVar0] = iParam11;
		Global_1339962.f_4109.f_238[iVar0] = iParam12;
		Global_1339962.f_4109.f_271[iVar0] = iParam13;
		Global_1339962.f_4109.f_368[iVar0] = iParam14;
		Global_1339962.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_284(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_1339962.f_4759[iParam0]), iParam1);
}

bool func_285(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1339962.f_4759[iParam0], iParam1);
}

int func_286()
{
	if (func_453(170))
	{
		return 1;
	}
	if (func_455())
	{
		return 1;
	}
	if (!func_436(1))
	{
		return 1;
	}
	return 0;
}

int func_287(var uParam0, bool bParam1, bool bParam2)
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

int func_288()
{
	if (func_8(6))
	{
		return 0;
	}
	if (func_8(17))
	{
		return 0;
	}
	if (unk_0xBDA1F5E8A36BFA07(func_31(), 0))
	{
		return 0;
	}
	return 1;
}

var func_289()
{
	return Local_200.f_22;
}

void func_290()
{
	char* sVar0;
	
	if (func_286())
	{
		if (func_315())
		{
			func_317();
		}
		return;
	}
	sVar0 = 0;
	switch (func_63())
	{
		case 1:
			switch (func_382(unk_0x490BA5FDD7EE47A9()))
			{
				case 0:
					if (func_628() || func_329())
					{
						if (!func_313("GB_AIRF_OT_00"))
						{
							func_312("GB_AIRF_OT_00", 0);
						}
					}
					break;
				
				case 1:
					if (func_628() || func_329())
					{
						if (func_311())
						{
							if ((func_325() || func_310()) && func_331())
							{
								if (!func_313("GB_AIRF_OT_04"))
								{
									func_317();
									func_312("GB_AIRF_OT_04", 0);
								}
							}
							else if (func_325() || func_310())
							{
								if (!func_313("GB_AIRF_OT_01"))
								{
									func_317();
									func_312("GB_AIRF_OT_01", 0);
								}
							}
							else if (func_311())
							{
								if (!func_308("GB_AIRF_OT_02", func_309()))
								{
									func_317();
									func_307("GB_AIRF_OT_02", func_309(), 1, 0);
								}
							}
						}
						else if (!func_313("GB_AIRF_OT_00"))
						{
							func_312("GB_AIRF_OT_00", 0);
						}
					}
					else if (func_327() || func_328())
					{
						sVar0 = func_303(func_7());
						if (!unk_0x226FA58470A21AEF(sVar0))
						{
							if (!func_302("GB_AIRF_OT_07", sVar0))
							{
								func_317();
								func_292("GB_AIRF_OT_07", sVar0, 0, 1);
							}
						}
					}
					break;
				
				case 2:
					if (func_628() || func_329())
					{
						if (func_325() || func_310())
						{
							if (func_291())
							{
								if (!func_313("GB_AIRF_OT_05"))
								{
									func_317();
									func_312("GB_AIRF_OT_05", 0);
								}
							}
							else if (!func_313("GB_AIRF_OT_04"))
							{
								func_317();
								func_312("GB_AIRF_OT_04", 0);
							}
						}
						else if (func_311())
						{
							if (!func_308("GB_AIRF_OT_06", func_309()))
							{
								func_317();
								func_307("GB_AIRF_OT_06", func_309(), 1, 0);
							}
						}
						else if (!func_313("GB_AIRF_OT_00"))
						{
							func_312("GB_AIRF_OT_00", 0);
						}
					}
					else
					{
						sVar0 = func_303(func_7());
						if (!unk_0x226FA58470A21AEF(sVar0))
						{
							if (!func_302("GB_AIRF_OT_07", sVar0))
							{
								func_317();
								func_292("GB_AIRF_OT_07", sVar0, 0, 1);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if (func_633())
			{
				if (func_288())
				{
					if (func_628() || func_329())
					{
						if (func_18(unk_0x06736567F820A39E(), func_31(), 0) || (func_329() && func_18(func_219(), func_31(), 0)))
						{
							if (!func_313("GB_AIR_OT_08"))
							{
								func_312("GB_AIR_OT_08", 0);
							}
						}
						else
						{
							func_317();
						}
					}
					else
					{
						func_317();
					}
				}
				else
				{
					func_317();
				}
			}
			else
			{
				func_317();
			}
			break;
	}
}

bool func_291()
{
	return func_8(3);
}

int func_292(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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
	if (unk_0x2673375C0C31BF99(sParam1) > 63)
	{
		return 0;
	}
	if (func_302(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return 0;
	}
	func_296();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = iParam3;
	func_295();
	func_294(bParam2);
	func_293();
	return 1;
}

void func_293()
{
	unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 1);
}

void func_294(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 0);
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_1312577.f_57), 0);
}

void func_295()
{
	Global_1312577.f_8 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 86400000);
	Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
}

void func_296()
{
	func_298();
	func_297(0);
}

void func_297(bool bParam0)
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

void func_298()
{
	if (!func_301())
	{
	}
	if (func_300())
	{
		unk_0xDC3C901EF33A999B(&(Global_1312577.f_10));
		func_299();
		unk_0x50E6AB5DBF4F6633();
	}
}

void func_299()
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

int func_300()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_301()
{
	if (!func_300())
	{
		return 0;
	}
	unk_0xD6574ACDB39AA1DE(&(Global_1312577.f_10));
	func_299();
	return unk_0xAB0007E3E71F28E1();
}

bool func_302(char* sParam0, int iParam1)
{
	if (!func_300())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(iParam1))
	{
		return 0;
	}
	if (!unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(iParam1) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

char* func_303(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		uVar0 = func_306(&(Global_1610705[iParam0 /*178*/].f_10.f_77));
		return uVar0;
	}
	if (((func_102(iParam0, 28) || func_102(unk_0xE0BDAFA1A39552D6(), 28)) || func_305(iParam0)) && !func_304(iParam0))
	{
		return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
	}
	iVar1 = func_215(iParam0);
	if (iVar1 != func_3())
	{
		if (iVar1 != unk_0xE0BDAFA1A39552D6())
		{
			if (!unk_0xC9B6CD4E82C594D0(0, -1, 1))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
		}
	}
	if (iVar1 != func_3())
	{
		uVar0 = func_306(&(Global_1610705[iVar1 /*178*/].f_10.f_77));
		if (unk_0x226FA58470A21AEF(uVar0))
		{
			return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

int func_304(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_158(iParam0) };
	if (unk_0xB6FEE919E18FF45B() && unk_0x8BA2944C243C370E(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_158(iParam0) };
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

var func_306(var uParam0)
{
	return uParam0;
}

void func_307(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_292(sParam0, unk_0x3DB24415831CBC43(iParam1), bParam3, 1);
}

bool func_308(char* sParam0, int iParam1)
{
	return func_302(sParam0, unk_0x3DB24415831CBC43(iParam1));
}

int func_309()
{
	return Local_200.f_8;
}

int func_310()
{
	int iVar0;
	
	if (func_329())
	{
		iVar0 = unk_0x90CB634380C802C7(func_219());
		if (func_309() == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_311()
{
	return func_309() != func_3();
}

void func_312(char* sParam0, bool bParam1)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return;
	}
	if (func_313(sParam0))
	{
		return;
	}
	func_296();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_295();
	func_294(bParam1);
	func_293();
}

bool func_313(char* sParam0)
{
	if (!func_300())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_314(sParam0);
	}
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10));
}

bool func_314(int iParam0)
{
	if (!func_300())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(iParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

int func_315()
{
	if (!func_300())
	{
		return 0;
	}
	if (!unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == Global_1312577.f_7)
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_102(iParam0, 9);
	}
	return 0;
}

void func_317()
{
	if (!func_300())
	{
		return;
	}
	if (!unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == Global_1312577.f_7)
	{
		return;
	}
	func_296();
}

void func_318()
{
	func_323();
	func_321();
	func_319();
}

void func_319()
{
	if (func_320())
	{
		unk_0x2239ED27B231AE2E(&uLocal_137);
	}
}

bool func_320()
{
	return unk_0xCDB4C4200A9B478A(uLocal_137);
}

void func_321()
{
	if (func_632())
	{
		if (func_322())
		{
			unk_0x2239ED27B231AE2E(&uLocal_136);
		}
	}
}

bool func_322()
{
	return unk_0xCDB4C4200A9B478A(uLocal_136);
}

void func_323()
{
	if (func_633())
	{
		if (func_324())
		{
			unk_0x2239ED27B231AE2E(&uLocal_135);
		}
	}
}

bool func_324()
{
	return unk_0xCDB4C4200A9B478A(uLocal_135);
}

bool func_325()
{
	return func_309() == unk_0xE0BDAFA1A39552D6();
}

void func_326(int iParam0)
{
	Local_314[unk_0x490BA5FDD7EE47A9() /*3*/].f_2 = iParam0;
}

bool func_327()
{
	return func_8(4);
}

int func_328()
{
	if (func_632() && func_311())
	{
		if (func_41(unk_0x44A9253132E1DDE0(func_309()), func_627(), 1) < 150f)
		{
			return 1;
		}
	}
	return 0;
}

int func_329()
{
	int iVar0;
	
	if (func_222(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(func_219()))
		{
			if (unk_0x4E75E5867592AC01(func_219()))
			{
				iVar0 = unk_0x90CB634380C802C7(func_219());
				if (func_53(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_330(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Local_314[unk_0x490BA5FDD7EE47A9() /*3*/].f_1), iParam0);
}

int func_331()
{
	if (func_632())
	{
		if (func_41(unk_0x06736567F820A39E(), func_627(), 1) < 150f)
		{
			return 1;
		}
	}
	return 0;
}

void func_332(int iParam0)
{
	if (func_352())
	{
		switch (iParam0)
		{
			case 0:
				if (!func_581(7))
				{
					if (func_333(82, "GB_AIRF_TXT_01", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_559(7);
					}
				}
				break;
			
			case 1:
				if (!func_581(8))
				{
					if (func_333(82, "GB_AIRF_TXT_02", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_559(8);
					}
				}
				break;
			
			case 2:
				if (!func_581(9))
				{
					if (func_333(82, "GB_AIRF_TXT_03", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_559(9);
					}
				}
				break;
			}
	}
}

int func_333(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_334(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_334(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2F6869889D97DFED(sParam14, sParam15))
	{
	}
	func_346();
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
	if (func_345() == 0)
	{
		func_343();
		return 0;
	}
	func_342(Global_16779);
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
		func_341(0);
		func_341(2);
		func_341(1);
	}
	else
	{
		func_346();
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
					func_341(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_341(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_341(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_341(3);
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
		func_346();
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
			if (!func_340())
			{
				unk_0x962E604CCA53388F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_339(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_335(1);
			func_339(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_335(int iParam0)
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
		if (func_338(14))
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
								func_337(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar2);
								unk_0xE97F1B22C5E8989F();
							}
							if (Global_2444091)
							{
								if (iVar1 == 14)
								{
									func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69521)
								{
									iVar4 = 0;
									iVar4 = Global_2566789;
									func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_337(&(Global_2290[iVar1 /*15*/]));
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
								func_337(&(Global_2290[iVar1 /*15*/]));
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
								func_337(&(Global_2290[iVar1 /*15*/]));
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
								func_337(&(Global_2290[iVar1 /*15*/]));
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
								func_337(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609456.f_1;
								func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_336(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0x226FA58470A21AEF(iParam7))
	{
		func_337(iParam7);
	}
	if (!unk_0x226FA58470A21AEF(iParam8))
	{
		func_337(iParam8);
	}
	if (!unk_0x226FA58470A21AEF(iParam9))
	{
		func_337(iParam9);
	}
	if (!unk_0x226FA58470A21AEF(iParam10))
	{
		func_337(iParam10);
	}
	if (!unk_0x226FA58470A21AEF(iParam11))
	{
		func_337(iParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_337(int iParam0)
{
	unk_0x7291E2F821FCFC04(iParam0);
	unk_0xD6360E18957BCDD3();
}

bool func_338(int iParam0)
{
	return Global_35742 == iParam0;
}

void func_339(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_340()
{
	return Global_1315913;
}

void func_341(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101186.f_12817[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_342(int iParam0)
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

void func_343()
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
		if (!func_344(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_24 = 1;
}

int func_344(struct<6> Param0, struct<6> Param6)
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

int func_345()
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
			if (!func_344(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
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

void func_346()
{
	if (func_338(14))
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
		Global_14413 = func_347();
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

var func_347()
{
	func_348();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_348()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_351(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_350(unk_0x06736567F820A39E());
			if (func_349(iVar0) && (!func_338(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_349(Global_101186.f_1902.f_539.f_3549))
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

bool func_349(int iParam0)
{
	return iParam0 < 3;
}

int func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_351(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_351(int iParam0)
{
	if (func_349(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_352()
{
	if (func_683(unk_0xE0BDAFA1A39552D6(), 1, 1))
	{
		return 1;
	}
	return 1;
}

void func_353(int iParam0)
{
	int iVar0;
	
	if (func_359())
	{
		if (!func_358(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					if (func_357())
					{
						func_99("GB_AIRF_HT_00", -1);
					}
					else
					{
						func_99("GB_AIRF_HT_01", -1);
					}
					func_98(1);
					func_356(iParam0);
					break;
				
				case 7:
					func_99("GB_AIRF_HT_03", -1);
					func_98(1);
					func_356(iParam0);
					break;
				
				case 8:
					func_99("GB_AIRF_HT_04", -1);
					func_98(1);
					func_356(iParam0);
					break;
				
				case 9:
					if (func_311())
					{
						func_355("GB_AIRF_HT_05", unk_0x3DB24415831CBC43(func_309()), func_204(func_309(), -2, 0, 0), -1);
						func_98(1);
						func_356(iParam0);
					}
					break;
				
				case 11:
					func_356(iParam0);
					break;
				
				case 12:
					func_99("GB_AIRF_HT_06", -1);
					func_98(1);
					func_356(iParam0);
					break;
				
				case 10:
					iVar0 = func_303(func_7());
					if (!unk_0x226FA58470A21AEF(iVar0))
					{
						func_354("GB_AIRF_HT_02", iVar0, func_204(func_7(), -2, 0, 0), -1);
						func_98(1);
						func_356(iParam0);
					}
					break;
				}
			}
	}
}

void func_354(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x15835437CE85AEA4(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam2);
	}
	unk_0x9C174A0D56FFB64A(iParam1);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam3);
}

void func_355(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x15835437CE85AEA4(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam2);
	}
	unk_0x9C174A0D56FFB64A(sParam1);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam3);
}

void func_356(int iParam0)
{
	unk_0xE27C8E42A97895CF(&uLocal_132, iParam0);
}

bool func_357()
{
	return unk_0xE0BDAFA1A39552D6() == func_7();
}

bool func_358(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(uLocal_132, iParam0);
}

int func_359()
{
	if ((((!func_360() && !unk_0x3DC360442A11BB38()) && !unk_0xCA914B57A3600215()) && func_683(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !func_115())
	{
		return 1;
	}
	return 0;
}

bool func_360()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

void func_361(int iParam0)
{
	char* sVar0;
	
	if (func_375())
	{
		if (!func_374(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					unk_0x310F6B4E168A8F5D(1);
					func_373(85, "GB_AIRF_BMT_00", "GB_AIRF_BMS_00", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 1:
					unk_0x310F6B4E168A8F5D(1);
					func_373(86, "GB_WINNER", "GB_AIRF_BMS_01", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 2:
					unk_0x310F6B4E168A8F5D(1);
					func_373(88, "GB_WORK_OVER", "GB_AIRF_BMS_02", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 12:
					unk_0x310F6B4E168A8F5D(1);
					func_373(86, "GB_WORK_OVER", "GB_AIRF_BMS_13", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 3:
					sVar0 = func_303(func_7());
					if (!unk_0x226FA58470A21AEF(sVar0))
					{
						unk_0x310F6B4E168A8F5D(1);
						func_370(85, "GB_AIRF_BMT_00", "GB_AIRF_BMS_03", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 4:
					unk_0x310F6B4E168A8F5D(1);
					func_373(86, "GB_WINNER", "GB_AIRF_BMS_04", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 5:
					unk_0x310F6B4E168A8F5D(1);
					func_373(86, "GB_WINNER", "GB_AIRF_BMS_05", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 6:
					if (func_272() != func_3())
					{
						unk_0x310F6B4E168A8F5D(1);
						func_362(87, func_272(), -1, "GB_AIRF_BMS_06", "GB_WORK_OVER", 1, -1, 2);
						func_372(iParam0);
					}
					break;
				
				case 7:
					if (func_272() != func_3())
					{
						sVar0 = func_303(func_272());
						if (!unk_0x226FA58470A21AEF(sVar0))
						{
							unk_0x310F6B4E168A8F5D(1);
							func_370(85, "GB_WORK_OVER", "GB_AIRF_BMS_07", sVar0, func_204(func_272(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
							func_372(iParam0);
						}
					}
					break;
				
				case 8:
					sVar0 = func_303(func_7());
					if (!unk_0x226FA58470A21AEF(sVar0))
					{
						unk_0x310F6B4E168A8F5D(1);
						func_370(85, "GB_WORK_OVER", "GB_AIRF_BMS_08", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 9:
					sVar0 = func_303(func_7());
					if (!unk_0x226FA58470A21AEF(sVar0))
					{
						unk_0x310F6B4E168A8F5D(1);
						func_370(85, "GB_WINNER", "GB_AIRF_BMS_09", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 10:
					sVar0 = func_303(func_7());
					if (!unk_0x226FA58470A21AEF(sVar0))
					{
						unk_0x310F6B4E168A8F5D(1);
						func_370(85, "GB_WORK_OVER", "GB_AIRF_BMS_10", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 13:
					sVar0 = func_303(func_7());
					if (!unk_0x226FA58470A21AEF(sVar0))
					{
						unk_0x310F6B4E168A8F5D(1);
						func_370(85, "GB_WORK_OVER", "GB_AIRF_BMS_14", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 11:
					unk_0x310F6B4E168A8F5D(1);
					if (func_628())
					{
						func_373(86, "GB_WORK_OVER", "GB_AIRF_BMS_11", 1, -1, 2);
						func_372(iParam0);
					}
					else
					{
						func_373(86, "GB_WORK_OVER", "GB_AIRF_BMS_12", 1, -1, 2);
						func_372(iParam0);
					}
					break;
				}
			}
	}
}

int func_362(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_369(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_363(&Var0);
}

int func_363(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2428549.f_2481)
		{
			return 0;
		}
	}
	func_368(uParam0, uParam0->f_16);
	func_365(uParam0);
	if (func_364(uParam0->f_1))
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
				if (func_281(Global_2428549.f_2191[iVar0 /*72*/].f_1))
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

int func_364(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_365(var uParam0)
{
	if (func_367(uParam0->f_1))
	{
		uParam0->f_66 = func_366();
	}
}

int func_366()
{
	return 21;
}

int func_367(int iParam0)
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

void func_368(var uParam0, int iParam1)
{
	if (func_367(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_3())
	{
		return;
	}
	if (func_281(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_204(iParam1, -2, 0, 0);
		}
	}
}

void func_369(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_3();
	uParam1->f_17 = func_3();
	uParam1->f_18 = func_3();
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

int func_370(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_3();
	iVar1 = func_3();
	iVar2 = func_3();
	return func_371(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_371(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_369(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	return func_363(&Var0);
}

void func_372(int iParam0)
{
	unk_0xE27C8E42A97895CF(&uLocal_133, iParam0);
}

int func_373(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_369(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_363(&Var0);
}

bool func_374(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(uLocal_133, iParam0);
}

int func_375()
{
	if ((func_683(unk_0xE0BDAFA1A39552D6(), 1, 1) && !unk_0x3DC360442A11BB38()) && !func_360())
	{
		return 1;
	}
	return 0;
}

void func_376(int iParam0)
{
	Global_1318728 = iParam0;
}

void func_377(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_1641, 9))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_1641), 9);
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1641, 9))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_1641), 9);
	}
}

void func_378(bool bParam0)
{
	if (bParam0)
	{
		if (!func_102(unk_0xE0BDAFA1A39552D6(), 9))
		{
			if (func_108(unk_0xE0BDAFA1A39552D6()) != 0)
			{
				func_116(9);
			}
		}
	}
	else if (func_102(unk_0xE0BDAFA1A39552D6(), 9))
	{
		func_379(9);
	}
}

void func_379(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

void func_380()
{
	if (!func_381(unk_0xE0BDAFA1A39552D6()))
	{
		func_116(25);
	}
}

bool func_381(int iParam0)
{
	return func_102(iParam0, 25);
}

int func_382(int iParam0)
{
	return Local_314[iParam0 /*3*/].f_2;
}

void func_383()
{
	if (!unk_0x7DA173D4FD42F36B(uLocal_199, 3))
	{
		if (iLocal_156 > 35000)
		{
			if (func_628())
			{
				if (!func_56())
				{
					if (Local_200.f_6 == 0)
					{
						if (func_8(12))
						{
							func_388(1);
						}
						if (func_331())
						{
							func_388(2);
						}
					}
					else if (func_288())
					{
						if (func_387())
						{
							func_388(3);
						}
						else
						{
							func_384();
						}
					}
					else
					{
						func_384();
					}
				}
				else if (Local_200.f_6 != 0)
				{
					if (func_288())
					{
						if (func_387())
						{
							func_388(3);
						}
						else
						{
							func_384();
						}
					}
					else
					{
						func_384();
					}
				}
			}
		}
		else if ((func_628() || func_270(unk_0xE0BDAFA1A39552D6())) || func_581(11))
		{
			switch (iLocal_198)
			{
				case 0:
					if ((func_382(unk_0x490BA5FDD7EE47A9()) == 0 || func_382(unk_0x490BA5FDD7EE47A9()) == 1) || func_382(unk_0x490BA5FDD7EE47A9()) == 2)
					{
						if (iLocal_156 <= 35000 && iLocal_156 >= 29000)
						{
							if (unk_0xAA821ECDF67A2A25("APT_PRE_COUNTDOWN_STOP"))
							{
								unk_0x25B97FB8615971D6("APT_PRE_COUNTDOWN_STOP");
								iLocal_198 = 1;
							}
						}
					}
					break;
				
				case 1:
					if (!unk_0x7DA173D4FD42F36B(uLocal_199, 1))
					{
						if (iLocal_156 <= 30000)
						{
							if (unk_0xAA821ECDF67A2A25("APT_COUNTDOWN_30S"))
							{
								unk_0xC8601D5221312A4A("AllowScoreAndRadio", 1);
								unk_0x5BC661D1FF0D731E(0);
								unk_0x25B97FB8615971D6("APT_COUNTDOWN_30S");
								unk_0xAA821ECDF67A2A25("APT_COUNTDOWN_30S_KILL");
								unk_0xE27C8E42A97895CF(&uLocal_199, 1);
							}
						}
					}
					else if (!unk_0x7DA173D4FD42F36B(uLocal_199, 2))
					{
						if (iLocal_156 <= 27000)
						{
							unk_0x5BC661D1FF0D731E(1);
							unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
							unk_0xE27C8E42A97895CF(&uLocal_199, 2);
							iLocal_198 = 2;
						}
					}
					break;
				
				case 2:
					if (!unk_0x7DA173D4FD42F36B(uLocal_199, 3))
					{
						if (iLocal_156 <= 0)
						{
							unk_0x6555D0270D9BE11C("APT_COUNTDOWN_30S");
							if (unk_0xAA821ECDF67A2A25("APT_FADE_IN_RADIO"))
							{
								unk_0x25B97FB8615971D6("APT_FADE_IN_RADIO");
								unk_0x6555D0270D9BE11C("APT_COUNTDOWN_30S_KILL");
								unk_0xAA821ECDF67A2A25("APT_COUNTDOWN_30S_KILL");
								unk_0xE27C8E42A97895CF(&uLocal_199, 3);
							}
						}
						else if (Local_200.f_5 != 0)
						{
							if (unk_0xAA821ECDF67A2A25("APT_FADE_IN_RADIO"))
							{
								unk_0x6555D0270D9BE11C("APT_COUNTDOWN_30S");
								unk_0x25B97FB8615971D6("APT_COUNTDOWN_30S_KILL");
								unk_0x25B97FB8615971D6("APT_FADE_IN_RADIO");
								unk_0xAA821ECDF67A2A25("APT_COUNTDOWN_30S_KILL");
								unk_0xE27C8E42A97895CF(&uLocal_199, 3);
							}
						}
					}
					break;
				}
			}
	}
}

void func_384()
{
	if (!func_386(7))
	{
		if (func_386(0))
		{
			if (Local_200.f_6 == 1)
			{
				func_388(4);
			}
			else
			{
				func_388(5);
			}
			unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
			unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
		}
		func_385(7);
	}
}

void func_385(int iParam0)
{
	unk_0xE27C8E42A97895CF(&uLocal_134, iParam0);
}

bool func_386(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(uLocal_134, iParam0);
}

int func_387()
{
	if (func_633() && func_26(func_31()))
	{
		if (func_18(unk_0x06736567F820A39E(), func_31(), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_388(int iParam0)
{
	func_390();
	if (!func_386(iParam0))
	{
		unk_0x25B97FB8615971D6(func_389(iParam0));
		func_385(iParam0);
	}
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "EXEC1_AIRFREIGHT_START";
		
		case 2:
			return "EXEC1_AIRFREIGHT_DELIVERING_SMA";
		
		case 3:
			return "EXEC1_AIRFREIGHT_SELF_DESTRUCT_SMA";
		
		case 4:
			return "EXEC1_AIRFREIGHT_STOP";
		
		case 5:
			return "EXEC1_AIRFREIGHT_FAIL";
		
		case 6:
			return "EXEC1_AIRFREIGHT_ATTACKERS_START";
		
		default:
	}
	return "";
}

void func_390()
{
	if (!func_386(0))
	{
		unk_0xC8601D5221312A4A("DisableFlightMusic", 1);
		unk_0xC8601D5221312A4A("WantedMusicDisabled", 1);
		func_385(0);
	}
}

void func_391()
{
	if (func_633())
	{
		if (!func_631())
		{
			if (func_628())
			{
				if (func_683(unk_0xE0BDAFA1A39552D6(), 1, 1) && func_18(unk_0x06736567F820A39E(), func_31(), 0))
				{
					if (unk_0x4321FC7479614822(func_31(), -1) == unk_0x06736567F820A39E())
					{
						if (!func_9(unk_0x84CE7B1EF500E926(), 1))
						{
							func_330(1);
							unk_0x6553935614875699(unk_0x06736567F820A39E(), 417, 1);
							if (Global_2464975.f_5005 == 0)
							{
								Global_2464975.f_5005 = 1;
							}
						}
					}
					if (func_165(func_394(unk_0xE0BDAFA1A39552D6(), 1), 0) >= func_393(1))
					{
						unk_0x3C67CAB6DE390E7D(unk_0xE0BDAFA1A39552D6(), 1);
					}
				}
				else
				{
					if (func_9(unk_0x84CE7B1EF500E926(), 1))
					{
						func_392(1);
						unk_0x6553935614875699(unk_0x06736567F820A39E(), 417, 0);
					}
					if (Global_2464975.f_5005 == 1)
					{
						Global_2464975.f_5005 = 0;
					}
				}
			}
		}
	}
}

void func_392(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Local_314[unk_0x490BA5FDD7EE47A9() /*3*/].f_1), iParam0);
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_262145.f_2853 > -1)
			{
				return Global_262145.f_2853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_262145.f_2854 > -1)
			{
				return Global_262145.f_2854;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_262145.f_2855 > -1)
			{
				return Global_262145.f_2855;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_262145.f_2856 > -1)
			{
				return Global_262145.f_2856;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_262145.f_2857 > -1)
			{
				return Global_262145.f_2857;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_262145.f_2858 > -1)
			{
				return Global_262145.f_2858;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_262145.f_2859 > -1)
			{
				return Global_262145.f_2859;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_262145.f_2860 > -1)
			{
				return Global_262145.f_2860;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_262145.f_2861 > -1)
			{
				return Global_262145.f_2861;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_262145.f_2862 > -1)
			{
				return Global_262145.f_2862;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case joaat("mpsv_lp0_31"):
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	return 0;
}

int func_394(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_169(iParam0);
}

void func_395()
{
	if (func_632())
	{
		if (!func_581(10))
		{
			if (!func_8(11))
			{
				if (func_41(unk_0x06736567F820A39E(), func_627(), 1) <= 150f)
				{
					func_559(10);
				}
			}
		}
		else if (func_41(unk_0x06736567F820A39E(), func_627(), 1) > 150f || func_8(11))
		{
			func_396(10);
		}
	}
}

void func_396(int iParam0)
{
	unk_0x99BCB15F954AF579(&uLocal_131, iParam0);
}

void func_397()
{
	int iVar0;
	
	if (func_412())
	{
		if (func_632() && !func_411())
		{
			if (func_382(unk_0x490BA5FDD7EE47A9()) == 1)
			{
				if (func_581(10))
				{
					if (iLocal_164 == 0 || func_410())
					{
						iVar0 = unk_0xA6055C735E3DD877(0, 2);
						func_409(10, 0, 0);
						func_402(Local_166[iVar0 /*3*/], fLocal_173[iVar0], fLocal_176, 1, 15f, 0, 0, 15f, 1, 1);
						func_401(unk_0xF4745590D18D14B8(func_627(), 1), 1, 0);
						iLocal_164 = 1;
					}
				}
				else if (iLocal_164)
				{
					func_400();
					func_398();
					iLocal_164 = 0;
				}
			}
			else if (iLocal_164)
			{
				func_400();
				func_398();
				iLocal_164 = 0;
			}
		}
	}
}

void func_398()
{
	if (Global_2410759.f_6 == unk_0xAE832DCCE9CD3242())
	{
		func_399();
	}
}

void func_399()
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

void func_400()
{
	struct<4> Var0;
	
	if (Global_2404993.f_469.f_1 == unk_0xAE832DCCE9CD3242())
	{
		Global_2404993.f_469 = { Var0 };
	}
}

void func_401(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_39.f_49 = { Param0 };
	Global_2404993.f_39.f_52 = iParam3;
	Global_2404993.f_39.f_53 = iParam4;
}

void func_402(struct<3> Param0, var uParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
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
	Var0.f_5 = uParam3;
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
	if (func_403(unk_0xE0BDAFA1A39552D6()))
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

int func_403(int iParam0)
{
	if ((func_404(iParam0, 1) || func_114(iParam0)) || func_107(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_404(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_408(iParam0) != 0;
	}
	return func_405(iParam0, bParam1);
}

int func_405(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_406(iParam0))
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

bool func_406(int iParam0)
{
	return func_407(iParam0);
}

bool func_407(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

int func_408(int iParam0)
{
	if (func_683(iParam0, 0, 1))
	{
		return Global_2418529[iParam0 /*313*/].f_1;
	}
	return 0;
}

void func_409(int iParam0, int iParam1, int iParam2)
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

int func_410()
{
	if (!func_683(unk_0xE0BDAFA1A39552D6(), 1, 1))
	{
		if (iLocal_165 == 0)
		{
			iLocal_165 = 1;
		}
	}
	else if (func_278())
	{
		if (iLocal_165 == 1)
		{
			iLocal_165 = 0;
			return 1;
		}
	}
	return 0;
}

bool func_411()
{
	return unk_0xBDA1F5E8A36BFA07(func_627(), 0);
}

int func_412()
{
	if (Local_200.f_11 == 3)
	{
		return 1;
	}
	return 0;
}

void func_413()
{
	if (!func_628() && !func_329())
	{
		if (func_327())
		{
			if (!func_581(5))
			{
				if (func_581(13))
				{
					func_380();
					func_559(5);
				}
				if (func_581(12))
				{
					func_380();
					func_559(5);
				}
				if (func_581(14))
				{
					func_380();
					func_559(5);
				}
				if (func_41(unk_0x06736567F820A39E(), func_608(), 1) <= 100f)
				{
					func_380();
					func_559(5);
				}
			}
			if (!func_270(unk_0xE0BDAFA1A39552D6()))
			{
				if (!func_581(11))
				{
					if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()) && unk_0xC3A7CFC6468E0BAE(Local_200.f_14))
					{
						if (func_41(unk_0x06736567F820A39E(), func_608(), 0) < 500f)
						{
							func_559(11);
							func_116(19);
							func_376(1);
						}
					}
				}
				else if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()) && unk_0xC3A7CFC6468E0BAE(Local_200.f_14))
				{
					if (func_41(unk_0x06736567F820A39E(), func_608(), 0) > 700f)
					{
						func_396(11);
						func_379(19);
						func_376(0);
					}
				}
				if (func_581(13))
				{
					func_414(0);
				}
				if (func_581(12))
				{
					func_414(0);
				}
				if (func_581(14))
				{
					func_414(0);
				}
			}
		}
	}
}

void func_414(int iParam0)
{
	if (!func_270(unk_0xE0BDAFA1A39552D6()))
	{
		if (iParam0 || func_108(unk_0xE0BDAFA1A39552D6()) != 0)
		{
			func_116(20);
			if (func_114(unk_0xE0BDAFA1A39552D6()))
			{
				if (!unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 8))
				{
					unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 8);
				}
			}
		}
	}
}

void func_415()
{
	if (func_628() || func_329())
	{
		func_290();
		func_430();
		func_418();
		func_416();
	}
	else
	{
		switch (func_108(unk_0xE0BDAFA1A39552D6()))
		{
			case 0:
				func_317();
				break;
			
			case 1:
			case 2:
				func_418();
				break;
			
			case 3:
				func_418();
				func_416();
				func_290();
				func_430();
				break;
			}
	}
}

void func_416()
{
	if (func_628() || func_329())
	{
		if (func_633() && !func_311())
		{
			func_417(func_608(), uLocal_150, uLocal_151, uLocal_152);
		}
		if (func_632() && !func_291())
		{
			func_417(func_627(), uLocal_147, uLocal_148, uLocal_149);
		}
		if (func_8(11))
		{
			unk_0x1F60DF09D920D0B6(1, func_39(), 0f, 0f, 0f, 0f, 0f, 0f, 20f, 20f, 2f, uLocal_153, uLocal_154, uLocal_155, 100, 0, 0, 2, 0, 0, 0, 0);
		}
	}
	else if (func_633() && func_327())
	{
		func_417(func_608(), uLocal_144, uLocal_145, uLocal_146);
	}
}

void func_417(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0x1F60DF09D920D0B6(2, unk_0xF4745590D18D14B8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_418()
{
	if (func_286())
	{
		return;
	}
	switch (func_382(unk_0x490BA5FDD7EE47A9()))
	{
		case 0:
			if (func_628() || func_329())
			{
				func_424();
				if (!func_311())
				{
					func_423(1);
				}
			}
			else if (func_328() || func_327())
			{
				func_423(0);
			}
			break;
		
		case 1:
			if (func_628() || func_329())
			{
				func_424();
				func_422(1);
			}
			else if (func_328() || func_327())
			{
				func_423(0);
			}
			break;
		
		case 2:
			if (func_628() || func_329())
			{
				func_424();
				if (func_291())
				{
					func_321();
					func_419();
				}
				else if (func_325() || func_310())
				{
					func_319();
					func_422(1);
				}
			}
			else
			{
				func_423(0);
			}
			break;
	}
}

void func_419()
{
	if (!func_320())
	{
		uLocal_137 = unk_0x1232EB8CC16E4E5F(Local_200.f_108);
		func_420(&uLocal_137, 12);
	}
}

void func_420(var uParam0, int iParam1)
{
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0x8A6C20F61A3C4CFA(*uParam0, func_421(iParam1));
	}
}

int func_421(int iParam0)
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

void func_422(bool bParam0)
{
	if (func_632())
	{
		if (!func_322())
		{
			uLocal_136 = unk_0xDB8B533098769F4F(func_627());
			if (bParam0)
			{
				unk_0x3A46FF82408A2709(uLocal_136, 68);
				func_420(&uLocal_136, 18);
			}
			else
			{
				func_420(&uLocal_136, 6);
			}
			unk_0x4BFEA7590F203BDF(uLocal_136, "GB_AIRF_CONTAINER");
			unk_0xA4E8F868373B09C0(uLocal_136, 10);
			unk_0xF1C629E826767C2C(uLocal_136, 0);
		}
	}
}

void func_423(bool bParam0)
{
	if (func_633())
	{
		if (!func_324())
		{
			uLocal_135 = unk_0xDB8B533098769F4F(func_608());
			unk_0x3A46FF82408A2709(uLocal_135, 481);
			unk_0x4BFEA7590F203BDF(uLocal_135, "GB_AIRF_CARGOBOB");
			unk_0xA4E8F868373B09C0(uLocal_135, 10);
			unk_0xF1C629E826767C2C(uLocal_135, 0);
			if (bParam0)
			{
				func_420(&uLocal_135, 9);
			}
			else
			{
				func_420(&uLocal_135, 6);
			}
			if (!func_581(17))
			{
				unk_0xF86EC7784DA1CB68(uLocal_135, 7000);
				func_559(17);
			}
		}
		else if (unk_0xF1FEA9F5EFB09923(uLocal_135) != 481)
		{
			unk_0x3A46FF82408A2709(uLocal_135, 481);
		}
	}
}

void func_424()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xCDB4C4200A9B478A(uLocal_138[iVar0]))
		{
			if (func_21(iVar0))
			{
				if (!unk_0xCFC04A38F256EE06(func_20(iVar0)) && !unk_0xBDA1F5E8A36BFA07(func_20(iVar0), 0))
				{
					if (Local_200.f_31[iVar0 /*17*/].f_9 == 1 && func_41(unk_0x06736567F820A39E(), func_20(iVar0), 0) <= 100f)
					{
						uLocal_138[iVar0] = func_429(func_20(iVar0), 1, 145);
						unk_0x3A46FF82408A2709(uLocal_138[iVar0], 270);
						func_420(&(uLocal_138[iVar0]), 6);
					}
				}
			}
		}
		else if (func_21(iVar0))
		{
			if (((unk_0xCFC04A38F256EE06(func_20(iVar0)) || unk_0xBDA1F5E8A36BFA07(func_20(iVar0), 0)) || Local_200.f_31[iVar0 /*17*/].f_9 == 0) || func_41(unk_0x06736567F820A39E(), func_20(iVar0), 0) > 100f)
			{
				unk_0x2239ED27B231AE2E(&(uLocal_138[iVar0]));
			}
		}
		else
		{
			unk_0x2239ED27B231AE2E(&(uLocal_138[iVar0]));
		}
		iVar0++;
	}
	if (!unk_0xCDB4C4200A9B478A(uLocal_143))
	{
		if (func_22() && !func_428())
		{
			if (func_21(2))
			{
				if (func_18(func_20(2), func_19(), 1))
				{
					uLocal_143 = func_425(func_72(), 1, 0);
					unk_0x3A46FF82408A2709(uLocal_143, 353);
					func_420(&uLocal_143, 6);
				}
			}
		}
		else if (unk_0xCDB4C4200A9B478A(uLocal_143))
		{
			unk_0x2239ED27B231AE2E(&uLocal_143);
		}
	}
	else
	{
		if (!func_22())
		{
			unk_0x2239ED27B231AE2E(&uLocal_143);
		}
		if (func_22() && (!func_26(func_19()) || !unk_0x1B6292EA51632C25(func_19(), 0)))
		{
			unk_0x2239ED27B231AE2E(&uLocal_143);
		}
	}
}

int func_425(int iParam0, bool bParam1, bool bParam2)
{
	return func_426(iParam0, !bParam1, bParam2);
}

int func_426(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDB8B533098769F4F(iParam0);
	if (unk_0xFCBEC4C2079B0872(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_427(unk_0x17CC0D5008835470(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF2B74C6AE979DE74(uVar0, bParam1);
		}
		else
		{
			unk_0x8A6C20F61A3C4CFA(uVar0, 2);
		}
	}
	else if (unk_0x77CB3F400804EDD1(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_427(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
		unk_0xF2B74C6AE979DE74(uVar0, bParam1);
	}
	else if (unk_0x25EBA3BDCAE4CD26(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_427(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_427(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_428()
{
	return unk_0xBDA1F5E8A36BFA07(func_72(), 0);
}

var func_429(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_426(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCDB4C4200A9B478A(uVar0)) && unk_0xDC1F9F222D09400F(&(Global_101186.f_32651[iParam2 /*29*/].f_3)))
	{
		unk_0x4BFEA7590F203BDF(uVar0, &(Global_101186.f_32651[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_430()
{
	int iVar0;
	
	if (func_286())
	{
		return;
	}
	if (func_60(&(Local_200.f_2)))
	{
		iLocal_156 = (func_49() - func_287(&(Local_200.f_2), 0, 0));
		if (iLocal_156 < func_49())
		{
			if (iLocal_156 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			if (((func_628() || func_329()) || func_327()) || func_328())
			{
				func_282();
				if (iLocal_156 > 0)
				{
					func_283(iLocal_156, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_283(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0);
				}
				if ((func_628() || func_329()) && func_8(12))
				{
					func_431(Local_200.f_13, "GB_AIRF_CONT_VAL", -1, 1, 5, 0, "HUD_CASH", 1, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_431(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_184(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_285(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_284(3, iVar0);
		Global_1339962.f_2432[iVar0] = uParam0;
		StringCopy(&(Global_1339962.f_2432.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_2432.f_183[iVar0] = iParam3;
		Global_1339962.f_2432.f_172[iVar0] = iParam2;
		Global_1339962.f_2432.f_205[iVar0] = iParam4;
		Global_1339962.f_2432.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1339962.f_2432.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1339962.f_2432.f_420[iVar0] = iParam7;
		Global_1339962.f_2432.f_453[iVar0] = iParam8;
		Global_1339962.f_2432.f_431[iVar0] = iParam9;
		Global_1339962.f_2432.f_442[iVar0] = iParam10;
		Global_1339962.f_2432.f_464[iVar0] = iParam11;
	}
}

void func_432()
{
	if (func_135() != func_3())
	{
		Global_1734817 = func_435(func_135());
		Global_1734817.f_1 = func_434(func_135());
	}
	Global_1734817.f_5 = unk_0x40077EDF3FF70C39();
	Global_1734817.f_13 = func_433();
	Global_1734817.f_15 = 0;
	if (func_133(1))
	{
		if (func_228() == func_135())
		{
			Global_1734817.f_15 = 1;
		}
	}
}

int func_433()
{
	int iVar0;
	
	iVar0 = func_135();
	if (iVar0 != func_3())
	{
		return Global_1610705[iVar0 /*178*/].f_10.f_71;
	}
	return 0;
}

var func_434(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_7[1];
}

var func_435(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_7[0];
}

int func_436(bool bParam0)
{
	if (func_452(unk_0xE0BDAFA1A39552D6(), 21))
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
	if (func_451(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_450())
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (func_340())
	{
		return 0;
	}
	if (func_448())
	{
		return 0;
	}
	if (unk_0x21A36E2323FEA4B1())
	{
		return 0;
	}
	if (func_406(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!func_446())
	{
		return 0;
	}
	if (func_452(unk_0xE0BDAFA1A39552D6(), 0) || func_452(unk_0xE0BDAFA1A39552D6(), 3))
	{
		return 0;
	}
	if ((func_452(unk_0xE0BDAFA1A39552D6(), 12) || func_452(unk_0xE0BDAFA1A39552D6(), 14)) || func_452(unk_0xE0BDAFA1A39552D6(), 13))
	{
		return 0;
	}
	if (func_445(unk_0xE0BDAFA1A39552D6(), 0, 0))
	{
		if ((!func_444(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_9) && !func_442(unk_0xE0BDAFA1A39552D6())) || (func_106(unk_0xE0BDAFA1A39552D6()) != 167 && func_106(unk_0xE0BDAFA1A39552D6()) != 168))
		{
			return 0;
		}
	}
	if (func_441())
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (func_440(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_439())
	{
		return 0;
	}
	if (func_438(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_437(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	return 1;
}

int func_437(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418529[iParam0 /*313*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0)
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

int func_439()
{
	if (Global_2557205.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_440(int iParam0)
{
	if (!func_683(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587816[iParam0 /*444*/].f_35;
}

bool func_441()
{
	return Global_91362.f_297 > 0;
}

int func_442(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_683(iParam0, 1, 1))
		{
			if (Global_2418529[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_443(Global_2418529[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_443(int iParam0)
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

int func_444(int iParam0)
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

int func_445(int iParam0, bool bParam1, bool bParam2)
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
		if (func_442(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_446()
{
	if (func_447() == 0)
	{
		return 1;
	}
	return 0;
}

int func_447()
{
	return Global_1312466.f_18;
}

bool func_448()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_449()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 5;
}

bool func_450()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

int func_451(int iParam0)
{
	if (func_405(iParam0, 1))
	{
		if (Global_1587816[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_452(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

int func_453(int iParam0)
{
	if (!func_227() && !func_271(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (!func_316(unk_0xE0BDAFA1A39552D6()))
		{
			if (func_455())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_454()
{
	return 0;
}

int func_455()
{
	if ((func_102(unk_0xE0BDAFA1A39552D6(), 21) || func_102(unk_0xE0BDAFA1A39552D6(), 22)) || func_458())
	{
		return 1;
	}
	if (func_456())
	{
		func_116(22);
		return 1;
	}
	return 0;
}

int func_456()
{
	if (func_107(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if ((func_112() && !func_457()) || func_452(unk_0xE0BDAFA1A39552D6(), 21))
		{
			if (!func_102(unk_0xE0BDAFA1A39552D6(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_379(27);
		}
	}
	return 0;
}

bool func_457()
{
	return Global_1312416.f_1;
}

bool func_458()
{
	return func_459(284, -1);
}

int func_459(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_168(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_460()
{
	if (unk_0xC3A7CFC6468E0BAE(Local_200.f_14))
	{
		if (unk_0xA2C0F3D7469C0A0B(func_608()))
		{
			if ((unk_0xF17131A86C38C7A6(func_31()) && !func_8(21)) && !func_9(unk_0x84CE7B1EF500E926(), 7))
			{
				unk_0x583D71ECCB818FD1(func_31(), func_462(), func_461(), 0);
				func_330(7);
			}
		}
	}
}

float func_461()
{
	return 5f;
}

float func_462()
{
	return 5f;
}

void func_463()
{
	if (func_327() && func_8(11))
	{
		if (func_466())
		{
			if (!unk_0x912912C4363CC45B(Local_189.f_0))
			{
				unk_0xC6C51552515DCFC0(func_465());
				Local_189.f_0 = unk_0xEDC8E3314B3AA54A(func_464(), Local_200.f_108, 0f, 0f, 0f, 2f, 0, 0, 0, 1);
				unk_0x57010D528DF123FB(Local_189.f_0, 0.8f, 0.18f, 0.19f, 1);
			}
		}
	}
}

char* func_464()
{
	return "scr_lowrider_flare";
}

char* func_465()
{
	return "scr_lowrider";
}

int func_466()
{
	unk_0x048FF8BDFC883056(func_465());
	if (unk_0x550B3CF36F154A21(func_465()))
	{
		return 1;
	}
	return 0;
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (!func_581(16))
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_200.f_14))
			{
				unk_0xD6844FCDD2BAFECD(Local_200.f_14, 1);
				func_559(16);
			}
		}
	}
	else if (func_581(16))
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_200.f_14))
		{
			unk_0xD6844FCDD2BAFECD(Local_200.f_14, 0);
			func_396(16);
		}
	}
}

void func_468()
{
	if (unk_0xC3A7CFC6468E0BAE(Local_200.f_22))
	{
		if (unk_0x40B3668D7226E0DF(Local_200.f_22))
		{
			if (unk_0xBC572626B3578AD2(unk_0x4C4151C3DEC199DC(Local_200.f_22)))
			{
				unk_0xE2098C4F0BF55A98(unk_0x4C4151C3DEC199DC(Local_200.f_22), 1);
			}
			else
			{
				unk_0xE2098C4F0BF55A98(unk_0x4C4151C3DEC199DC(Local_200.f_22), 0);
			}
		}
	}
}

void func_469()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		iVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
		iVar1 = unk_0x79469DA5833EACA8(iVar0);
		if (func_470(iVar1))
		{
			if (iVar0 != func_31())
			{
				if (unk_0xA2C0F3D7469C0A0B(iVar0))
				{
					unk_0xEF93E823AAB9B1F5(iVar0, func_627());
				}
			}
		}
	}
}

int func_470(int iParam0)
{
	if (((iParam0 == joaat("cargobob") || iParam0 == joaat("cargobob2")) || iParam0 == joaat("cargobob3")) || iParam0 == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

void func_471()
{
	int iVar0;
	
	if (func_8(9))
	{
		return;
	}
	if (func_9(unk_0x84CE7B1EF500E926(), 2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_21(iVar0))
		{
			if (func_628())
			{
				if (func_41(unk_0x06736567F820A39E(), func_20(iVar0), 1) < 50f && unk_0x59AD7FDEE8F9BAED(unk_0x06736567F820A39E()))
				{
					func_330(2);
					return;
				}
				if ((func_41(unk_0x06736567F820A39E(), func_20(iVar0), 1) < 100f && func_387()) && unk_0x1C3F1A4FF0A66BD0(func_31()))
				{
					func_330(2);
					return;
				}
			}
			if (func_41(unk_0x06736567F820A39E(), func_20(iVar0), 1) < 50f && unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
			{
				func_330(2);
				return;
			}
			if (func_472(func_20(iVar0)))
			{
				func_330(2);
				return;
			}
			if (unk_0xBDA1F5E8A36BFA07(func_20(iVar0), 0) || unk_0xCFC04A38F256EE06(func_20(iVar0)))
			{
				func_330(2);
				return;
			}
		}
		iVar0++;
	}
}

int func_472(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	if (func_473())
	{
		if (unk_0xFD400CC34D5746B3(unk_0xE0BDAFA1A39552D6(), &uVar0))
		{
			if (unk_0x77CB3F400804EDD1(uVar0))
			{
				iVar1 = unk_0x406B8F450D0105AB(iVar0);
				if (unk_0xC1EDB61CE0A4B94E(iVar1))
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

bool func_473()
{
	return Global_1573831;
}

void func_474()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_21(iVar0))
		{
			switch (Local_200.f_31[iVar0 /*17*/].f_10)
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 2:
					if (unk_0x40B3668D7226E0DF(Local_200.f_31[iVar0 /*17*/]))
					{
						if (!unk_0xCFC04A38F256EE06(func_20(iVar0)))
						{
							if (unk_0xFB900D9EE2ACC400(func_20(iVar0), -1794415470) == 1 || unk_0xFB900D9EE2ACC400(func_20(iVar0), -1794415470) == 0)
							{
								unk_0x1F6717C33A02B7AC(func_20(iVar0));
							}
							if (unk_0xFB900D9EE2ACC400(func_20(iVar0), 1120685857) != 1 && unk_0xFB900D9EE2ACC400(func_20(iVar0), 1120685857) != 0)
							{
								unk_0xBA63517ADBC1E5E3(func_20(iVar0), 1);
								unk_0x49BD4C1B5817C978(func_20(iVar0), func_476());
								unk_0xCC3E84A5721DBA15(func_20(iVar0), Local_200.f_23, 299f, 0);
							}
						}
					}
					break;
				
				case 3:
					if ((func_22() && unk_0x1B6292EA51632C25(func_19(), 0)) && !unk_0xBDA1F5E8A36BFA07(func_19(), 0))
					{
						if (unk_0x40B3668D7226E0DF(Local_200.f_31[iVar0 /*17*/]))
						{
							if (!func_18(func_20(iVar0), func_19(), 0))
							{
								if (!unk_0xCFC04A38F256EE06(func_20(iVar0)))
								{
									if (unk_0xFB900D9EE2ACC400(func_20(iVar0), -1794415470) != 1 && unk_0xFB900D9EE2ACC400(func_20(iVar0), -1794415470) != 0)
									{
										unk_0xBA63517ADBC1E5E3(func_20(iVar0), 1);
										unk_0xEA61E9C6B1D4A33E(func_20(iVar0), func_19(), 20000, -1, 1073741824, 1, 0);
									}
								}
							}
							else if ((((!unk_0xCFC04A38F256EE06(func_20(iVar0)) && func_26(func_20(iVar0))) && func_26(func_19())) && func_633()) && func_26(func_31()))
							{
								if (unk_0xFB900D9EE2ACC400(func_20(iVar0), -1273030092) != 1 && unk_0xFB900D9EE2ACC400(func_20(iVar0), -1273030092) != 0)
								{
									unk_0xBA63517ADBC1E5E3(func_20(iVar0), 1);
									unk_0x49BD4C1B5817C978(func_20(iVar0), func_475());
									unk_0xA3AA6235DB0C6E18(func_20(iVar0), joaat("FIRING_PATTERN_FULL_AUTO"));
									if (func_328())
									{
										iVar1 = func_31();
									}
									else
									{
										iVar1 = 0;
									}
									unk_0xF3BA65D58D2A71D0(func_20(iVar0), func_19(), iVar1, 0, Local_200.f_23, 6, 60f, 100f, -1f, 200, 25, -1f, 4096);
								}
							}
						}
						if (!func_581(18))
						{
							if (unk_0x40B3668D7226E0DF(Local_200.f_100) && unk_0x40B3668D7226E0DF(Local_200.f_31[iVar0 /*17*/]))
							{
								if (func_18(func_20(iVar0), func_19(), 0))
								{
									unk_0x60A0634A78E88070(1, joaat("vehicle_weapon_space_rocket"), func_19(), func_20(iVar0));
									unk_0x60A0634A78E88070(1, joaat("weapon_vehicle_rocket"), func_19(), func_20(iVar0));
									unk_0xD905B5CB889F85EA(func_20(iVar0), joaat("vehicle_weapon_player_buzzard"));
									func_559(18);
								}
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_475()
{
	return 5;
}

int func_476()
{
	return 75;
}

void func_477()
{
	if (func_632())
	{
		if (unk_0x40B3668D7226E0DF(func_289()))
		{
			if (unk_0x6267527E254067CA(func_627()) < (func_75() / 2))
			{
				unk_0xEC337F42DFBAD859(func_627(), func_75());
			}
		}
		if (!func_9(unk_0x84CE7B1EF500E926(), 3))
		{
			if (!unk_0xBC572626B3578AD2(func_627()))
			{
				if (func_479(func_627()))
				{
					func_330(3);
				}
				if (func_478(func_627(), 1))
				{
					func_330(3);
				}
			}
		}
	}
}

int func_478(int iParam0, int iParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0) || iParam1)
		{
			if (unk_0xC774E76B3D78AD45(iParam0))
			{
				if (unk_0xDA0002497824FB01(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_479(int iParam0)
{
	if (!unk_0xC774E76B3D78AD45(uParam0))
	{
		return 0;
	}
	return unk_0xDA0002497824FB01(iParam0) >= 1f;
}

void func_480()
{
	if (func_633())
	{
		if (!func_9(unk_0x84CE7B1EF500E926(), 4))
		{
			if (func_631())
			{
				func_330(4);
			}
			if (!func_26(func_608()))
			{
				func_330(4);
			}
		}
	}
}

void func_481()
{
	if (func_633())
	{
		if (func_26(func_31()) && !func_631())
		{
			if (func_628())
			{
				if (unk_0x4FD796341C251D39(func_31(), unk_0xE0BDAFA1A39552D6()))
				{
					unk_0xD81261A54FF973C2(func_31(), unk_0xE0BDAFA1A39552D6(), 0);
				}
			}
			else if (!unk_0x4FD796341C251D39(func_31(), unk_0xE0BDAFA1A39552D6()))
			{
				unk_0xD81261A54FF973C2(func_31(), unk_0xE0BDAFA1A39552D6(), 1);
			}
		}
	}
}

void func_482()
{
	if (func_633())
	{
		if (unk_0x40B3668D7226E0DF(func_32()))
		{
			if (!func_8(12))
			{
				if (unk_0xBAA16C35CA8701E7(func_31()))
				{
					unk_0xB2C123C54D84E6A7(func_31(), 1);
					unk_0x8053CB955C7F93DB(func_31(), 0);
					unk_0x6FB44A9D2C537B29(func_31(), 0);
				}
			}
			else if (!unk_0xBAA16C35CA8701E7(func_31()))
			{
				unk_0xB2C123C54D84E6A7(func_31(), 0);
				unk_0x8053CB955C7F93DB(func_31(), 1);
				unk_0x6FB44A9D2C537B29(func_31(), 1);
			}
		}
	}
}

void func_483()
{
	struct<3> Var0;
	var uVar3;
	struct<24> Var4;
	
	if (func_633())
	{
		if (unk_0x40B3668D7226E0DF(func_32()) && !func_631())
		{
			if (((unk_0x5B69019B28C95DD8(func_31(), 0, func_558()) || unk_0x5B69019B28C95DD8(func_31(), 1, func_558())) || unk_0x5B69019B28C95DD8(func_31(), 3, func_558())) || unk_0x5B69019B28C95DD8(func_31(), 2, func_558()))
			{
				Var4.f_3 = 1125515264;
				Var4.f_4 = 1;
				Var4.f_5 = 1;
				Var4.f_7 = 1082130432;
				Var4.f_8 = 1;
				Var4.f_11 = 1;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_23 = 1;
				Var4.f_0 = 20f;
				Var4.f_3 = 150f;
				Var4.f_1 = 1;
				Var4.f_10 = 1;
				Var4.f_11 = 0;
				Var4.f_4 = 0;
				if (func_484(unk_0xF4745590D18D14B8(func_31(), 1), 0f, 0f, 0f, Local_200.f_19, 1, &Var0, &uVar3, &Var4))
				{
					unk_0x4CEDDB3E1734081F(func_31(), 1, 1);
					unk_0x7C15BF0B58B608BA(func_31(), Var0, 0, 0, 1);
					unk_0xEF32567B3A5047F5(func_31(), uVar3);
					unk_0xCE889B96E78E6DC5(func_31());
				}
			}
		}
	}
}

int func_484(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	struct<57> Var2;
	struct<57> Var59;
	
	bVar0 = false;
	if (uParam10->f_12)
	{
		if (uParam10->f_23)
		{
			uParam10->f_23 = 0;
		}
	}
	if (unk_0xAD79840A082ADD7F())
	{
		if (!unk_0xA4D01763320ADBAE() > 7 && !unk_0xA4D01763320ADBAE() == 5)
		{
			return 0;
		}
	}
	if (Global_2404993.f_485)
	{
		Global_2404993.f_485 = 0;
		return 0;
	}
	if (!func_167(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!Global_2404993.f_559 == 0 && unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_564) < func_557(0))
	{
		if (!Global_2404993.f_611 == 0)
		{
			Global_2404993.f_611 = 0;
			func_556();
			func_555();
		}
		return 0;
	}
	if (!unk_0xAE832DCCE9CD3242() == Global_2404993.f_610)
	{
		if (!Global_2404993.f_611 == 0)
		{
			if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_614) < func_557(0))
			{
				return 0;
			}
			else
			{
				Global_2404993.f_611 = 0;
			}
		}
	}
	else
	{
		if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_612) > 30000)
		{
			Global_2404993.f_611 = 0;
		}
		if (!Global_2404993.f_611 == 0)
		{
			if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_614) > func_557(1))
			{
				Global_2404993.f_611 = 0;
			}
		}
	}
	if (uParam10->f_5)
	{
		if (func_551(Param0))
		{
			if (func_550(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2404993.f_611 == 0)
	{
		if (unk_0x2A488C176D52CCA5(Global_2404993.f_623, Param0) > 50f)
		{
			return 0;
		}
	}
	unk_0x4F9B9416E775992C((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2404993.f_611 == 0)
	{
		Global_2404993.f_617 = 0;
		Global_2404993.f_612 = unk_0xED6DF4F701311AF8();
		Global_2404993.f_610 = unk_0xAE832DCCE9CD3242();
		Global_2404993.f_614 = unk_0xED6DF4F701311AF8();
		Global_2404993.f_623 = { Param0 };
		Global_2404993.f_616 = unk_0xED6DF4F701311AF8();
		Global_2404993.f_611 = 2;
		func_549();
		func_556();
		func_545(Param0);
	}
	switch (Global_2404993.f_611)
	{
		case 2:
			if (unk_0x8A517457C85EB9F1((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2404993.f_618 = { Param0 };
				Global_2404993.f_621 = 0f;
				if (((uParam10->f_2 && func_542(Param0, 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_6) && !func_539(Param0, *uParam9, iParam6, unk_0xE0BDAFA1A39552D6(), 0))
				{
					Global_2404993.f_618 = { Param0 };
					Global_2404993.f_621 = *uParam9;
				}
				else
				{
					Var2.f_6 = 1082130432;
					Var2.f_7 = 1176255488;
					Var2.f_8 = 1;
					Var2.f_10 = 1;
					Var2.f_13 = 1;
					Var2.f_15 = 1;
					Var2.f_16 = 1;
					Var2.f_31 = 1;
					Var2.f_34 = joaat("tailgater");
					Var2.f_38 = 2;
					Var2.f_45 = 2;
					Var2.f_49 = 1123024896;
					Var2.f_53 = 999;
					Var2.f_54 = 1176256410;
					Var2.f_55 = 1;
					Var2.f_56 = 1;
					Var2.f_9 = iParam7;
					Var2.f_3 = 7f;
					Var2.f_10 = uParam10->f_4;
					Var2.f_4 = *uParam10;
					Var2.f_13 = uParam10->f_1;
					Var2.f_5 = uParam10->f_3;
					Var2.f_15 = uParam10->f_5;
					Var2.f_11 = uParam10->f_6;
					Var2.f_6 = uParam10->f_7;
					Var2.f_16 = uParam10->f_8;
					Var2.f_17 = uParam10->f_9;
					Var2 = { Param3 };
					Var2.f_12 = 1;
					Var2.f_34 = iParam6;
					Var2.f_31 = uParam10->f_11;
					Var2.f_30 = 1;
					Var2.f_48 = uParam10->f_12;
					Var2.f_56 = uParam10->f_23;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var2.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
						Var2.f_45[iVar1] = uParam10->f_20[iVar1];
						iVar1++;
					}
					func_499(&(Global_2404993.f_618), &(Global_2404993.f_621), &Var2);
				}
				func_497(Global_2404993.f_618, Global_2404993.f_621, iParam6);
				Global_2404993.f_608 = 0;
				Global_2404993.f_609 = 0;
				Global_2404993.f_617++;
				Global_2404993.f_613 = unk_0xED6DF4F701311AF8();
				Global_2404993.f_612 = unk_0xED6DF4F701311AF8();
				Global_2404993.f_611 = 3;
			}
			break;
		
		case 3:
			if (Global_2404993.f_608)
			{
				if (Global_2404993.f_609)
				{
					if (uParam10->f_10 && !uParam10->f_9)
					{
						func_496(Global_2404993.f_618, 2f);
						Global_2404993.f_611 = 4;
						Global_2404993.f_615 = unk_0xED6DF4F701311AF8();
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					func_495(Global_2404993.f_618, 0);
					func_494();
				}
			}
			else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_613) > 3000)
			{
				func_494();
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_613) < 10000)
				{
					if (unk_0x9F9AC3C5CA1ED211(Global_2404993.f_622))
					{
						if (unk_0x239BB224A66BA497(Global_2404993.f_622))
						{
							if (!unk_0xB57CE34D27FD10D0(Global_2404993.f_622))
							{
								if (func_493(Global_2404993.f_618, Global_2404993.f_621, iParam6, unk_0xE0BDAFA1A39552D6(), 0) || func_485(Global_2404993.f_618, Global_2404993.f_621, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_494();
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_494();
							}
						}
					}
					else
					{
						func_494();
					}
				}
				else
				{
					func_494();
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2404993.f_618 = { Param0 };
			Global_2404993.f_621 = 0f;
			Var59.f_6 = 1082130432;
			Var59.f_7 = 1176255488;
			Var59.f_8 = 1;
			Var59.f_10 = 1;
			Var59.f_13 = 1;
			Var59.f_15 = 1;
			Var59.f_16 = 1;
			Var59.f_31 = 1;
			Var59.f_34 = joaat("tailgater");
			Var59.f_38 = 2;
			Var59.f_45 = 2;
			Var59.f_49 = 1123024896;
			Var59.f_53 = 999;
			Var59.f_54 = 1176256410;
			Var59.f_55 = 1;
			Var59.f_56 = 1;
			Var59.f_9 = iParam7;
			Var59.f_3 = 3.5f;
			Var59.f_10 = uParam10->f_4;
			Var59.f_4 = *uParam10;
			Var59.f_12 = 1;
			Var59.f_13 = 0;
			Var59.f_15 = uParam10->f_5;
			Var59.f_11 = uParam10->f_6;
			Var59.f_6 = uParam10->f_7;
			Var59 = { Param3 };
			Var59.f_34 = iParam6;
			Var59.f_31 = uParam10->f_11;
			Var59.f_30 = 1;
			Var59.f_48 = uParam10->f_12;
			Var59.f_56 = uParam10->f_23;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var59.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
				Var59.f_45[iVar1] = uParam10->f_20[iVar1];
				iVar1++;
			}
			func_499(&(Global_2404993.f_618), &(Global_2404993.f_621), &Var59);
			Global_2404993.f_611 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2404993.f_623 = { Param0 };
	Global_2404993.f_614 = unk_0xED6DF4F701311AF8();
	if (bVar0)
	{
		*uParam8 = { Global_2404993.f_618 };
		*uParam9 = Global_2404993.f_621;
		Global_2404993.f_611 = 0;
		func_549();
		func_556();
		func_555();
		return 1;
	}
	return 0;
}

int func_485(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam9 == 0)
		{
			if (func_683(iVar1, bParam5, bParam6))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam8 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_492(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && iParam10) && bParam7) && func_490(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (func_486(func_179(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_486(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_489(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_488(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_487(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xF87C669B882D93C0((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xF87C669B882D93C0((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xF87C669B882D93C0((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x795DFAC3136F0C6E(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_487(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x1D8189836184FF10(iParam0))
	{
		unk_0x9CFA23DC65790425(iParam0, fParam1, fParam2);
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

void func_488(var uParam0, struct<3> Param1)
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

float func_489(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_487(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_490(int iParam0)
{
	if (func_175(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	Global_2460474 = { func_158(iParam0) };
	if (unk_0xC1CBB5CA861EE944(&Global_2460474))
	{
		return 1;
	}
	if (func_491(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_491(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_215(iParam0);
	if (!iVar0 == func_3())
	{
		if (iVar0 == func_215(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_492(int iParam0)
{
	if (unk_0xD1BDCACEB9BCE7A2(unk_0x44A9253132E1DDE0(iParam0)) || Global_2418529[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

int func_493(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_683(iVar1, 0, 1) && func_683(iParam5, 0, 1))
			{
				if (Global_2413817.f_260[iVar0])
				{
					if (func_486(Global_2413817.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_486(func_179(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2413817.f_260[iVar0])
			{
				if (func_486(Global_2413817.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_683(iVar1, 0, 0))
			{
				if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
				{
					if (func_486(func_179(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_494()
{
	if (Global_2404993.f_617 < 20 && unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_616) < 30000)
	{
		Global_2404993.f_611 = 2;
	}
	else
	{
		Global_2404993.f_611 = 5;
	}
}

void func_495(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 < 10 && unk_0x652D2EEEF1D3E62C(Param0) > 0f)
	{
		Var0 = { Global_2404993.f_1721[iParam3 /*3*/] };
		Global_2404993.f_1721[iParam3 /*3*/] = { Param0 };
		func_495(Var0, iParam3 + 1);
	}
}

void func_496(struct<3> Param0, float fParam3)
{
	func_556();
	Global_2404993.f_622 = unk_0xAB960C7D827A8545(Param0 - Vector(fParam3, fParam3, fParam3), Param0 + Vector(fParam3, fParam3, fParam3));
}

void func_497(struct<3> Param0, var uParam3, int iParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = 345;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	unk_0xCCAB9843EFA5C08A(1, &Var0, 7, func_498(1, 1));
}

var func_498(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar1);
		if (func_683(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
				else if (!func_199(iVar2, 0))
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_499(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404993.f_1155 > 0 && func_538(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_500(uParam0, uParam1, uParam2);
	}
}

void func_500(var uParam0, var uParam1, var uParam2)
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
		if (func_533(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_528(uParam0, 1))
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
	Global_2409418.f_162 = 0;
	Global_2409418.f_163 = 0;
	Global_2409418.f_164 = -99;
	Global_2409418.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409418[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409418.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xBC3E11E0840ACD52(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x8E17092FCA923035(iVar8))
		{
			unk_0x56C3FF2C1012AC52(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409418.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409418.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x69B487ADC61FFEB7(iVar8)) || unk_0x78C3A1255CC06E1B(iVar8))
			{
				unk_0x226281136F155C6F(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_522(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_519(Var1))
									{
										Var1 = { func_516(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (!func_515(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_511(Var1, uParam2) || uParam2->f_33 >= 2)
													{
														if ((uParam2->f_48 && !func_528(&Var1, 0)) || uParam2->f_48 == 0)
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
																	if ((uParam2->f_12 && !func_510(Var1, fVar4, uParam2->f_34, unk_0xE0BDAFA1A39552D6(), 0, uParam2->f_56)) || !uParam2->f_12)
																	{
																		if (!uParam2->f_15 || !func_533(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (func_542(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_542(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_485(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																							iVar22 = func_508(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409418.f_162)
																									{
																										Global_2409418[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2409418.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409418.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2409418.f_162 == 0)
																								{
																									Global_2409418[0 /*3*/] = { Var1 };
																									Global_2409418.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409418.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409418[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_507(Var1, fVar4, iVar16);
																												iVar16 = Global_2409418.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409418.f_162++;
																								if (Global_2409418.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409418.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409418[Global_2409418.f_162 /*3*/] = { Var1 };
																								Global_2409418.f_121[Global_2409418.f_162] = fVar4;
																								Global_2409418.f_162++;
																								if (func_511(Var1, uParam2))
																								{
																									Global_2409418.f_163++;
																								}
																								if (Global_2409418.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409418.f_162 == 40)
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
				if (Global_2409418.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409418[0 /*3*/] };
						*uParam1 = Global_2409418.f_121[0];
						return;
					}
					else
					{
						if (Global_2409418.f_163 > 0 && !Global_2409418.f_163 == Global_2409418.f_162)
						{
							func_505(0, uParam2);
						}
						iVar24 = unk_0xA6055C735E3DD877(0, Global_2409418.f_162);
						Var25 = { Global_2409418[0 /*3*/] };
						uVar28 = Global_2409418.f_121[0];
						Global_2409418[0 /*3*/] = { Global_2409418[iVar24 /*3*/] };
						Global_2409418.f_121[0] = Global_2409418.f_121[iVar24];
						Global_2409418[iVar24 /*3*/] = { Var25 };
						Global_2409418.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409418[0 /*3*/] };
						*uParam1 = Global_2409418.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_500(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0xA6055C735E3DD877((1 + iVar15), (40 + iVar15));
						unk_0x92162FD91928AD78(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_516(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
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
						if (func_533(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_528(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_500(uParam0, uParam1, uParam2);
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
				func_500(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_501(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2409418.f_164 = iVar8;
	}
}

void func_501(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_502(*(uParam0[iVar2 /*4*/]), 5f, unk_0xE0BDAFA1A39552D6(), 0, 0))
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

int func_502(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_504(Param0, fParam3, iParam4, iParam5, 0) || func_503(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_503(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2413817.f_556[iVar0] == 0)
			{
				if (func_486(Param0, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_523[iVar0], Global_2413817.f_556[iVar0], 1036831949))
				{
					if (func_683(iVar1, 0, 1) && func_683(iParam3, 0, 1))
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

int func_504(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (bParam6)
			{
				if (func_683(iVar1, 0, 1) && func_683(iParam4, 0, 1))
				{
					if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(iParam4))
					{
						return 0;
					}
				}
			}
			if (func_683(iVar1, 0, 1) && func_683(iParam4, 0, 1))
			{
				if (Global_2413817.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_179(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2413817.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_683(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_179(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_505(int iParam0, var uParam1)
{
	if (!func_511(Global_2409418[iParam0 /*3*/], uParam1))
	{
		Global_2409418.f_162 = (Global_2409418.f_162 - 1);
		func_506(iParam0);
		if (Global_2409418.f_162 > Global_2409418.f_163)
		{
			func_505(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_505(iParam0 + 1, uParam1);
	}
}

void func_506(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409418[iParam0 /*3*/] = { Global_2409418[iParam0 + 1 /*3*/] };
			Global_2409418.f_121[iParam0] = Global_2409418.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_507(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409418[iParam4 /*3*/] };
	uVar3 = Global_2409418.f_121[iParam4];
	Global_2409418[iParam4 /*3*/] = { Param0 };
	Global_2409418.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2409418.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_507(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_508(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_509(iVar5))
		{
			Var1 = { func_179(iVar5) };
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

int func_509(int iParam0)
{
	if (func_683(iParam0, 0, 1))
	{
		if (!func_222(iParam0))
		{
			if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam0))
			{
				if (!unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
				{
					if (func_405(unk_0xE0BDAFA1A39552D6(), 1))
					{
						if (!func_176(unk_0xF749B19A9F9B3DBF(iParam0), unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
				{
					if (!func_405(unk_0xE0BDAFA1A39552D6(), 1))
					{
						if (!func_490(iParam0))
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

int func_510(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_493(Param0, fParam3, iParam4, iParam5, iParam6) || func_539(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_511(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_514(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_512(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x795DFAC3136F0C6E(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_512(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_513(&Param3, &Param6);
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

void func_513(var uParam0, var uParam1)
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

bool func_514(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_515(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_405(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (Global_1617902.f_38505 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_38505)
			{
				if (Global_1617902.f_38506[iVar0 /*58*/].f_7 != 0)
				{
					if (func_486(Param0, Global_1617902.f_38506[iVar0 /*58*/], Global_1617902.f_38506[iVar0 /*58*/].f_6, Global_1617902.f_38506[iVar0 /*58*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617902.f_36286 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_36286)
			{
				if (Global_1617902.f_36289[iVar0 /*90*/].f_16 != 0)
				{
					if (func_486(Param0, Global_1617902.f_36289[iVar0 /*90*/], Global_1617902.f_36289[iVar0 /*90*/].f_3, Global_1617902.f_36289[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617902.f_49581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_49581)
			{
				if (Global_1617902.f_49585[iVar0 /*128*/].f_12 != 0)
				{
					if (func_486(Param0, Global_1617902.f_49585[iVar0 /*128*/], Global_1617902.f_49585[iVar0 /*128*/].f_3, Global_1617902.f_49585[iVar0 /*128*/].f_12, 0.5f))
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

Vector3 func_516(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_517(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x226281136F155C6F(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FD4A30EB9EA8649(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
				func_487(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_517(Param0, *fParam3, Param6))
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
	Var0 = { unk_0x90B89006901451E8(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x003ADF07D87EC4B8(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_487(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

int func_517(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_488(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_518(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_518(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_519(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_521(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2409153[iVar1])
	{
		if (func_520(Param0, &(Global_2408450[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409153[8])
	{
		if (func_520(Param0, &(Global_2408450[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_520(struct<3> Param0, var uParam3)
{
	return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_521(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408441[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408441[1])
	{
		if (Param0.f_0 < Global_2408445[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408441[2])
	{
		if (Param0.f_0 < Global_2408445[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408445[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408445[3])
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

int func_522(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_527(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x83D8CBE6E641FA2A(0.01f, 360f);
			func_526(&Var1, Global_2404993.f_546, Global_2404993.f_549, 1036831949, 0, fVar4);
			if (func_523(Var1, &uVar0) || func_527(Var1))
			{
				Var1 = { *uParam0 };
				func_526(&Var1, Global_2404993.f_546, Global_2404993.f_549, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_523(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_525();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404993.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_524(Param0, &(Global_2404993.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_524(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_514(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_1719) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_512(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_525()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404993.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_526(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_488(&Var0, 0f, 0f, unk_0x83D8CBE6E641FA2A(0f, 360f));
		}
		else
		{
			func_488(&Var0, 0f, 0f, fParam7);
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

int func_527(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404993.f_549 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_546);
		if (fVar0 < Global_2404993.f_549)
		{
			return 1;
		}
	}
	return 0;
}

bool func_528(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404993.f_22.f_16)
	{
		switch (Global_2404993.f_22.f_15)
		{
			case 0:
				if (func_514(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_512(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x795DFAC3136F0C6E(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, Global_2404993.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_529(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, Global_2404993.f_22.f_14, Global_2404993.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_529(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_526(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_532(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_530(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xEBBD48CB0344518F(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_514(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_512(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x795DFAC3136F0C6E(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_530(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_531(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x9242631F40D1BDA7(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_518(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_518(Var6, Var3) >= 0f)
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
		Var6 = { func_531(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_531(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x9242631F40D1BDA7(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_518(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_518(Var6, Var29) >= 0f)
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

Vector3 func_531(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_532(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_533(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_551(Param0))
	{
		if (func_537(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_535(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_534(*uParam3, 1056964608))
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
				func_526(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_534(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_1721[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_535(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_523(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_536(&Var2, &(Global_2404993.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_523(Var2, &uVar1) || func_527(Var2))
			{
				Var2 = { *uParam0 };
				func_536(&Var2, &(Global_2404993.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_536(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_529(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_1719) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_529(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_529(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_526(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_1719) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_532(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_530(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_537(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407465[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407465[iVar0 /*17*/].f_16))
			{
				if (func_524(*uParam0, &(Global_2407465[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407465[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407465[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_536(&Var1, &(Global_2407465[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_537(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_536(&Var1, &(Global_2407465[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_538(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404993.f_1155 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_533(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_528(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2409418.f_162 = 0;
		Global_2409418.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409418[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409418.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1155)
		{
			Var1 = { Global_2404993.f_1156[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1156[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_510(Var1, fVar4, uParam2->f_34, unk_0xE0BDAFA1A39552D6(), 0, uParam2->f_56)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_533(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
									if (func_542(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_542(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_485(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_508(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409418.f_162)
													{
														Global_2409418[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409418.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409418.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409418.f_162 == 0)
												{
													Global_2409418[0 /*3*/] = { Var1 };
													Global_2409418.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409418.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409418[iVar5 /*3*/], uParam2->f_35))
															{
																func_507(Var1, fVar4, iVar5);
																iVar5 = Global_2409418.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409418.f_162++;
												if (Global_2409418.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1155;
													}
													else if (Global_2409418.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1155;
													}
												}
											}
											else
											{
												Global_2409418[Global_2409418.f_162 /*3*/] = { Var1 };
												Global_2409418.f_121[Global_2409418.f_162] = fVar4;
												Global_2409418.f_162++;
												if (Global_2409418.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1155;
													}
													else if (Global_2409418.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1155;
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
		if (Global_2409418.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409418[0 /*3*/] };
				*uParam1 = Global_2409418.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409418.f_163 > 0 && !Global_2409418.f_163 == Global_2409418.f_162)
				{
					func_505(0, uParam2);
				}
				iVar13 = unk_0xA6055C735E3DD877(0, Global_2409418.f_162);
				Var14 = { Global_2409418[0 /*3*/] };
				uVar17 = Global_2409418.f_121[0];
				Global_2409418[0 /*3*/] = { Global_2409418[iVar13 /*3*/] };
				Global_2409418.f_121[0] = Global_2409418.f_121[iVar13];
				Global_2409418[iVar13 /*3*/] = { Var14 };
				Global_2409418.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409418[0 /*3*/] };
				*uParam1 = Global_2409418.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_538(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_500(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_539(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_541(Param0, iParam4, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_556[iVar0]))
			{
				if (func_540(Param0, fParam3, iParam4, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_523[iVar0], Global_2413817.f_556[iVar0], 0))
				{
					if (func_683(iVar1, 0, 1) && func_683(iParam5, 0, 1))
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

int func_540(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
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
	
	if (func_486(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_487(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xF87C669B882D93C0((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xF87C669B882D93C0((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xF87C669B882D93C0((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_488(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_488(&Var26, 0f, 0f, fParam3);
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
		if (func_486(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_540(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_541(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_489(iParam3, 1008981770);
	fVar1 = func_489(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_542(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_544(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_543(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993++;
	return 1;
}

int func_543(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_683(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA1F52EC3ECE1D42E(func_179(unk_0xE0BDAFA1A39552D6()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_683(iVar1, 1, 1))
		{
			if (!func_199(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if ((func_492(iVar1) || !bParam10) && !Global_2418529[iVar1 /*313*/].f_255)
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
								if (unk_0xA1F52EC3ECE1D42E(func_179(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0xA1F52EC3ECE1D42E(func_179(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_544(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam8 == 0)
		{
			if (func_683(iVar1, bParam4, bParam5))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam7 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_492(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && uParam9) && bParam6) && func_490(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (unk_0xA1F52EC3ECE1D42E(func_179(iVar1), Param0, 1) < fParam3)
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

void func_545(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_548(Param0);
	if (iVar0 > -1 && !func_547())
	{
		func_555();
		switch (iVar0)
		{
			case 0:
				func_546(-1139.678f, -2694.165f, 12.949f, 283.4298f);
				func_546(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
				func_546(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
				func_546(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
				func_546(-1110.51f, -2693.236f, 12.9595f, 298.84f);
				func_546(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
				func_546(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
				func_546(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
				func_546(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
				break;
			
			case 1:
				func_546(-1411.731f, -533.6462f, 30.2703f, 215.116f);
				func_546(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
				func_546(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
				func_546(-1438.8f, -584.4678f, 29.595f, 118.1207f);
				break;
			
			case 2:
				func_546(-780.5905f, 292.8159f, 84.673f, 97.2697f);
				func_546(-788.6147f, 291.8073f, 84.72f, 97.7348f);
				func_546(-765.572f, 294.4459f, 84.5182f, 93.9327f);
				func_546(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
				break;
			
			case 3:
				func_546(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
				func_546(-647.239f, 49.2068f, 40.7135f, 355.9723f);
				func_546(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
				func_546(-610.5603f, 5.1258f, 41.2404f, 98.696f);
				break;
			
			case 4:
				func_546(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
				func_546(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
				func_546(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
				func_546(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
				break;
			
			case 5:
				func_546(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
				func_546(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
				func_546(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
				func_546(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
				break;
			
			case 6:
				func_546(-58.1347f, -573.486f, 36.5789f, 341.8442f);
				func_546(-64.227f, -590.2214f, 35.1654f, 338.972f);
				func_546(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
				func_546(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
				break;
			
			case 7:
				func_546(-232.1917f, -978.1431f, 28.166f, 160.2115f);
				func_546(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
				func_546(-251.993f, -998.3963f, 28.3747f, 249.3297f);
				func_546(-262.222f, -994.5226f, 29.23f, 249.4673f);
				break;
			
			case 8:
				func_546(151.624f, -1309.343f, 28.2023f, 243.201f);
				func_546(152.7886f, -1305.608f, 28.2023f, 243.9973f);
				func_546(145.8017f, -1287.19f, 28.312f, 120.6275f);
				func_546(142.8935f, -1282.286f, 28.3156f, 120.3024f);
				break;
			
			case 9:
				func_546(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
				func_546(-2322.187f, 277.638f, 168.4671f, 23.4249f);
				func_546(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
				func_546(-2314.396f, 290.9f, 168.4671f, 114.3983f);
				func_546(-2316.81f, 296.424f, 168.4671f, 113.6228f);
				func_546(-2318.572f, 299.2423f, 168.4671f, 293.83f);
				func_546(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
				func_546(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
				func_546(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
				func_546(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
				func_546(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
				func_546(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
				break;
			
			case 10:
				func_546(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
				func_546(-612.8933f, 692.116f, 148.7577f, 79.1005f);
				func_546(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
				func_546(-639.3558f, 696.9992f, 150.5134f, 77.481f);
				break;
			
			case 11:
				func_546(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				func_546(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_546(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_546(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				break;
			
			case 12:
				func_546(382.9244f, 443.8122f, 142.9934f, 78.3408f);
				func_546(391.2023f, 442.4812f, 142.5089f, 82.2125f);
				func_546(400.1477f, 441.0816f, 142.0776f, 83.4259f);
				func_546(414.2964f, 439.2628f, 141.5056f, 80.8689f);
				break;
			
			case 13:
				func_546(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
				func_546(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
				func_546(-1283.894f, 467.2136f, 95.4036f, 95.058f);
				func_546(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
				break;
			
			case 14:
				func_546(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
				func_546(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
				func_546(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
				func_546(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
				break;
			
			case 15:
				func_546(382.9244f, 443.8122f, 142.9934f, 78.3408f);
				func_546(391.2023f, 442.4812f, 142.5089f, 82.2125f);
				func_546(400.1477f, 441.0816f, 142.0776f, 83.4259f);
				func_546(414.2964f, 439.2628f, 141.5056f, 80.8689f);
				break;
			
			case 16:
				func_546(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				func_546(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_546(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_546(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				break;
			
			case 17:
				func_546(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				func_546(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_546(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_546(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				break;
			
			case 18:
				func_546(128.4334f, 578.7522f, 182.2934f, 106.5458f);
				func_546(97.7791f, 576.8907f, 181.5599f, 91.3539f);
				func_546(83.5896f, 576.4791f, 181.0832f, 89.7262f);
				func_546(69.9599f, 575.9902f, 180.5019f, 91.4926f);
				break;
			
			case 19:
				func_546(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
				func_546(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
				func_546(-931.6637f, 703.693f, 151.369f, 87.7447f);
				func_546(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
				break;
			
			case 20:
				func_546(-872.1293f, 698.7591f, 148.5084f, 339.673f);
				func_546(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
				func_546(-907.3458f, 695.8158f, 150.396f, 270.6491f);
				func_546(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
				break;
			
			case 21:
			case 25:
				func_546(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_546(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_546(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_546(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_546(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_546(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_546(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_546(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
				break;
			
			case 22:
			case 26:
				func_546(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_546(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_546(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_546(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_546(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_546(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_546(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_546(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
				break;
			
			case 23:
			case 27:
				func_546(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_546(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_546(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_546(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_546(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_546(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_546(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_546(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
				break;
			
			case 24:
			case 28:
				func_546(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_546(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_546(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_546(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_546(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_546(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_546(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_546(-9.239f, -773.0505f, 43.0788f, 318.0367f);
				break;
			}
	}
}

void func_546(struct<3> Param0, float fParam3)
{
	if (Global_2404993.f_1155 < 32)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_1156[Global_2404993.f_1155 /*4*/] = { Param0 };
		Global_2404993.f_1156[Global_2404993.f_1155 /*4*/].f_3 = fParam3;
		Global_2404993.f_1155++;
	}
}

int func_547()
{
	if (unk_0x7DA173D4FD42F36B(Global_1617902.f_13, 0) && !Global_2435608.f_5852)
	{
		return 0;
	}
	return 0;
}

int func_548(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2409200[iVar0 /*7*/].f_2 + Global_2409200[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_520(Param0, &(Global_2409200[iVar0 /*7*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_549()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_2404993.f_1721[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_550(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2409163[iVar0 /*7*/].f_2 + Global_2409163[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_520(Var1, &(Global_2409163[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_530(&Var1, Global_2409163[iVar0 /*7*/], Global_2409163[iVar0 /*7*/].f_3, Global_2409163[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_551(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404993.f_484)
	{
		if (!func_404(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 1;
		}
		if (!func_554(Param0, 1008981770))
		{
			if (!func_537(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_537(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_553(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_552(&(Global_2404993.f_39[iVar0 /*12*/])) };
				if (!func_537(&Var1, 0, 0, 0))
				{
					if (!func_537(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_552(var uParam0)
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

int func_553(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_39[iVar0 /*12*/].f_9)
		{
			if (func_524(Param0, &(Global_2404993.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_554(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_39[iVar0 /*12*/].f_9)
		{
			if (func_524(Param0, &(Global_2404993.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_555()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_2404993.f_1156[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404993.f_1155 = 0;
}

void func_556()
{
	if (unk_0x9F9AC3C5CA1ED211(Global_2404993.f_622))
	{
		unk_0x154A3BB33869C26D(Global_2404993.f_622);
	}
	Global_2404993.f_622 = -1;
}

int func_557(bool bParam0)
{
	if (unk_0x4FF34B5B023875E1())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_558()
{
	return 10000;
}

void func_559(int iParam0)
{
	unk_0xE27C8E42A97895CF(&uLocal_131, iParam0);
}

void func_560(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 != iParam0)
	{
		func_580(-1);
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 = iParam0;
		if (func_85() != -1)
		{
			func_579(-1);
		}
		if (func_578() != -1)
		{
			func_577(-1);
		}
		func_575(iParam2);
		func_573(iParam0);
		if (!func_572(iParam0))
		{
			fVar0 = func_571(iParam0);
			if (fVar0 != 1f)
			{
				func_568(fVar0);
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 1);
			}
		}
		if (!func_567(iParam0))
		{
			if (func_566(iParam0, iParam2))
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
		if (func_112())
		{
			func_116(27);
		}
		if (bParam1)
		{
			if (!func_455())
			{
				func_564(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 1) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 4)) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 0))
			{
				func_248(6);
			}
			func_563();
		}
		if (iParam0 == 164)
		{
			unk_0x6849F03027FD1813(3, 0);
			unk_0x6849F03027FD1813(5, 0);
		}
		if (func_114(unk_0xE0BDAFA1A39552D6()) && func_316(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 8);
		}
		func_561();
	}
}

void func_561()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_562();
	iVar2 = func_215(unk_0xE0BDAFA1A39552D6());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x801C03D92F1C6755(iVar0);
		if (unk_0xA27C9E8196C79D22(iVar1))
		{
			if (func_5(iVar1, iVar2, 1))
			{
				unk_0xFDB2AD78EE5E2EE4(unk_0xE0BDAFA1A39552D6(), iVar1, uVar3);
				unk_0xFDB2AD78EE5E2EE4(iVar1, unk_0xE0BDAFA1A39552D6(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_562()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_135();
	if (iVar0 != func_3())
	{
		if (func_683(iVar0, 0, 1))
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

void func_563()
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

void func_564(int iParam0)
{
	if (func_565() && iParam0)
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

int func_565()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_566(int iParam0, int iParam1)
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

int func_567(int iParam0)
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

void func_568(float fParam0)
{
	float fVar0;
	
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_569())
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

int func_569()
{
	switch (func_570())
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

int func_570()
{
	return Global_25152;
}

float func_571(int iParam0)
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

int func_572(int iParam0)
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

void func_573(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_172(3357, -1, 0);
	iVar1 = func_574(iParam0);
	if (iVar1 != -1)
	{
		unk_0xE27C8E42A97895CF(&uVar0, iVar1);
		func_163(3357, uVar0, -1, 1);
	}
}

int func_574(int iParam0)
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

void func_575(int iParam0)
{
	func_576(unk_0xE0BDAFA1A39552D6(), iParam0);
}

void func_576(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_121 != iParam1)
	{
		Global_1610705[iParam0 /*178*/].f_10.f_121 = iParam1;
	}
}

void func_577(int iParam0)
{
	if (Global_2464975.f_4685.f_138 != iParam0)
	{
		Global_2464975.f_4685.f_138 = iParam0;
	}
}

int func_578()
{
	return Global_2464975.f_4685.f_138;
}

void func_579(int iParam0)
{
	if (Global_2464975.f_4685.f_137 != iParam0)
	{
		Global_2464975.f_4685.f_137 = iParam0;
	}
}

void func_580(int iParam0)
{
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_27 = iParam0;
}

bool func_581(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(uLocal_131, iParam0);
}

void func_582(int iParam0, int iParam1)
{
	Local_314[iParam0 /*3*/] = iParam1;
}

int func_583()
{
	var uVar0;
	
	unk_0xD06A5371300291A8(6, &uLocal_144, &uLocal_145, &uLocal_146, &uVar0);
	unk_0xD06A5371300291A8(18, &uLocal_147, &uLocal_148, &uLocal_149, &uVar0);
	unk_0xD06A5371300291A8(9, &uLocal_150, &uLocal_151, &uLocal_152, &uVar0);
	unk_0xD06A5371300291A8(12, &uLocal_153, &uLocal_154, &uLocal_155, &uVar0);
	if (Local_200.f_11 == 3)
	{
		func_584();
		Local_166[0 /*3*/] = { -1493.738f, -3245.335f, 12.9449f };
		fLocal_173[0] = 8.0591f;
		Local_166[1 /*3*/] = { -1613.85f, -3173.267f, 12.9449f };
		fLocal_173[1] = 298.6925f;
		fLocal_176 = 30f;
	}
	Global_2464975.f_4995 = Local_200.f_11;
	Local_189.f_1 = joaat("prop_flare_01");
	return 1;
}

void func_584()
{
	Global_1732289 = 1;
	if (!unk_0x7DA173D4FD42F36B(Global_2471749, 0))
	{
		unk_0xE27C8E42A97895CF(&Global_2471749, 0);
		unk_0xE27C8E42A97895CF(&Global_1732290, 0);
	}
	if (!unk_0x7DA173D4FD42F36B(Global_2471749, 1))
	{
		unk_0xE27C8E42A97895CF(&Global_2471749, 1);
		unk_0xE27C8E42A97895CF(&Global_1732290, 1);
	}
	if (!unk_0x7DA173D4FD42F36B(Global_2471749, 5))
	{
		unk_0xE27C8E42A97895CF(&Global_2471749, 5);
		unk_0xE27C8E42A97895CF(&Global_1732290, 5);
	}
	if (unk_0x1A7559C163191E43(-355737150))
	{
		unk_0xA78E2D8D6ED49B05(-355737150, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-580979506))
	{
		unk_0xA78E2D8D6ED49B05(-580979506, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-1426452475))
	{
		unk_0xA78E2D8D6ED49B05(-1426452475, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(745417724))
	{
		unk_0xA78E2D8D6ED49B05(745417724, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-1305304906))
	{
		unk_0xA78E2D8D6ED49B05(-1305304906, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-1543175077))
	{
		unk_0xA78E2D8D6ED49B05(-1543175077, 0, 0, 0);
	}
	if (unk_0x1A7559C163191E43(-811770997))
	{
		unk_0xA78E2D8D6ED49B05(-811770997, 0, 0, 0);
	}
}

int func_585()
{
	return Local_200.f_0;
}

int func_586(int iParam0)
{
	return Local_314[iParam0 /*3*/];
}

void func_587()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		switch (iVar1)
		{
			case 168:
				unk_0x6E7EC37CC38579DB(1, iVar0, &uVar2, 2);
				if (unk_0x587E5997B76F47FE())
				{
				}
				break;
			
			case 179:
				func_588(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_588(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	int iVar16;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var6, 10))
	{
		if (unk_0xC1EDB61CE0A4B94E(Var6.f_0))
		{
			if (unk_0x25EBA3BDCAE4CD26(Var6.f_0))
			{
				iVar0 = unk_0x9197467AFDAFBDB6(Var6.f_0);
				if (iVar0 == func_607())
				{
					if (!func_628())
					{
						if (!func_581(12))
						{
							if (unk_0xC1EDB61CE0A4B94E(Var6.f_1))
							{
								if (unk_0x77CB3F400804EDD1(Var6.f_1))
								{
									if (unk_0x4E75E5867592AC01(unk_0x406B8F450D0105AB(Var6.f_1)))
									{
										if (unk_0x90CB634380C802C7(unk_0x406B8F450D0105AB(Var6.f_1)) == unk_0xE0BDAFA1A39552D6())
										{
											func_559(12);
										}
									}
								}
							}
						}
					}
					if (unk_0x587E5997B76F47FE())
					{
						if (unk_0x0D289D28750CD4DA(Var6.f_4) == 3)
						{
							func_606();
							return;
						}
						if (unk_0x0D289D28750CD4DA(Var6.f_4) == 2)
						{
							func_606();
							return;
						}
						if (unk_0x0D289D28750CD4DA(Var6.f_4) == 5)
						{
							func_605();
							return;
						}
						if (unk_0x0D289D28750CD4DA(Var6.f_4) == 7 || Var6.f_7)
						{
							func_594();
							return;
						}
						if (Var6.f_4 == joaat("weapon_rammed_by_car"))
						{
							func_594();
							return;
						}
						if (unk_0x0D289D28750CD4DA(Var6.f_4) == 0)
						{
							func_594();
							return;
						}
					}
				}
			}
			if (unk_0xFCBEC4C2079B0872(Var6.f_0))
			{
				iVar2 = unk_0x43AB2E726FCE3BF7(Var6.f_0);
				if (iVar2 == func_31())
				{
					if (unk_0x587E5997B76F47FE())
					{
						if (Local_200.f_10 == func_3())
						{
							if (unk_0xC1EDB61CE0A4B94E(Var6.f_1))
							{
								if (unk_0x77CB3F400804EDD1(Var6.f_1))
								{
									if (unk_0x4E75E5867592AC01(unk_0x406B8F450D0105AB(Var6.f_1)))
									{
										if (Var6.f_3 || func_8(6))
										{
											iVar4 = unk_0x90CB634380C802C7(unk_0x406B8F450D0105AB(Var6.f_1));
											if (!func_5(iVar4, func_7(), 1))
											{
												Local_200.f_10 = iVar4;
											}
											else
											{
												iVar5 = func_52();
												if (iVar5 != func_3())
												{
													Local_200.f_10 = iVar5;
												}
											}
										}
									}
								}
							}
						}
					}
					if (!func_628())
					{
						if (!func_581(13))
						{
							if (unk_0xC1EDB61CE0A4B94E(Var6.f_1))
							{
								if (unk_0x77CB3F400804EDD1(Var6.f_1))
								{
									if (unk_0x4E75E5867592AC01(unk_0x406B8F450D0105AB(Var6.f_1)))
									{
										if (unk_0x90CB634380C802C7(unk_0x406B8F450D0105AB(Var6.f_1)) == unk_0xE0BDAFA1A39552D6())
										{
											func_559(13);
										}
									}
								}
							}
						}
					}
					if (unk_0x0D289D28750CD4DA(Var6.f_4) == 3)
					{
						if (unk_0xC1EDB61CE0A4B94E(Var6.f_1))
						{
							if (unk_0x77CB3F400804EDD1(Var6.f_1))
							{
								if (!unk_0x4E75E5867592AC01(unk_0x406B8F450D0105AB(Var6.f_1)))
								{
									func_589(0);
								}
							}
						}
					}
					if (unk_0x0D289D28750CD4DA(Var6.f_4) == 5 || Var6.f_4 == joaat("weapon_vehicle_rocket"))
					{
						if (unk_0xC1EDB61CE0A4B94E(Var6.f_1))
						{
							if (unk_0x77CB3F400804EDD1(Var6.f_1))
							{
								if (unk_0x4E75E5867592AC01(unk_0x406B8F450D0105AB(Var6.f_1)))
								{
									func_589(1);
								}
							}
						}
					}
				}
			}
			if (unk_0x77CB3F400804EDD1(Var6.f_0))
			{
				if (!func_628())
				{
					if (!func_581(14))
					{
						if (iVar3 == unk_0x406B8F450D0105AB(Var6.f_0))
						{
							if (unk_0x4E75E5867592AC01(iVar3))
							{
								iVar16 = unk_0x90CB634380C802C7(iVar3);
								if (func_55(iVar16) || func_54(iVar16))
								{
									func_559(14);
								}
							}
						}
					}
				}
			}
		}
		if (unk_0x587E5997B76F47FE())
		{
			if (unk_0xC1EDB61CE0A4B94E(Var6.f_1))
			{
				if (unk_0x25EBA3BDCAE4CD26(Var6.f_1))
				{
					iVar1 = unk_0x9197467AFDAFBDB6(Var6.f_1);
					if (iVar1 == func_607())
					{
						if (unk_0x0D289D28750CD4DA(Var6.f_4) == 7 || Var6.f_7)
						{
							func_594();
							return;
						}
						if (Var6.f_4 == joaat("weapon_rammed_by_car"))
						{
							func_594();
							return;
						}
						if (unk_0x0D289D28750CD4DA(Var6.f_4) == 0)
						{
							func_594();
							return;
						}
					}
				}
			}
		}
	}
}

void func_589(bool bParam0)
{
	float fVar0;
	int iVar1;
	
	if (func_592())
	{
		iVar1 = unk_0xA6055C735E3DD877(0, 100);
		if (bParam0)
		{
			fVar0 = func_591();
		}
		else
		{
			fVar0 = func_590();
		}
		if (IntToFloat(iVar1) < fVar0)
		{
			if (func_632())
			{
				if (unk_0x40B3668D7226E0DF(func_32()) && unk_0x40B3668D7226E0DF(func_289()))
				{
					if (unk_0x046CEB8397234DA8(func_31(), func_627()))
					{
						unk_0x5C39A1BB8CF5FF55(func_31(), func_627());
					}
				}
			}
		}
	}
}

var func_590()
{
	return Global_262145.f_12604;
}

var func_591()
{
	return Global_262145.f_12603;
}

int func_592()
{
	if (func_593())
	{
		return 0;
	}
	if (func_60(&(Local_200.f_28)))
	{
		if (!func_48(&(Local_200.f_28), func_44(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_593()
{
	return Global_262145.f_12616;
}

void func_594()
{
	if (func_603())
	{
		Local_200.f_13 = (Local_200.f_13 - func_596(3));
		func_595();
		if (func_34() < func_33())
		{
			Local_200.f_13 = func_33();
		}
	}
}

void func_595()
{
	if (!func_60(&uLocal_185))
	{
		func_59(&uLocal_185, 0, 0);
	}
	else
	{
		func_118(&uLocal_185, 0, 0);
		func_59(&uLocal_185, 0, 0);
	}
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_602();
		
		case 1:
			return func_601();
		
		case 2:
			return func_600();
		
		case 3:
			return unk_0xA6055C735E3DD877(func_599(), func_598() + 1);
		
		default:
	}
	return func_597();
}

int func_597()
{
	return 250;
}

int func_598()
{
	return Global_262145.f_12609;
}

var func_599()
{
	return Global_262145.f_12610;
}

var func_600()
{
	return Global_262145.f_12612;
}

var func_601()
{
	return Global_262145.f_12611;
}

var func_602()
{
	return Global_262145.f_12608;
}

int func_603()
{
	if (func_34() <= func_33())
	{
		return 0;
	}
	if (func_60(&uLocal_185))
	{
		if (!func_48(&uLocal_185, func_604(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_604()
{
	return Global_262145.f_12613;
}

void func_605()
{
	if (func_603())
	{
		Local_200.f_13 = (Local_200.f_13 - func_596(1));
		func_595();
		if (func_34() < func_33())
		{
			Local_200.f_13 = func_33();
		}
	}
}

void func_606()
{
	if (func_603())
	{
		Local_200.f_13 = (Local_200.f_13 - func_596(0));
		func_595();
		if (func_34() < func_33())
		{
			Local_200.f_13 = func_33();
		}
	}
}

int func_607()
{
	if (func_632())
	{
		return unk_0xE65C345C8E8CDA4A(func_289());
	}
	return 0;
}

int func_608()
{
	if (func_633())
	{
		return unk_0x4C4151C3DEC199DC(func_32());
	}
	return 0;
}

void func_609(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_114(unk_0xE0BDAFA1A39552D6()) && !func_113(unk_0xE0BDAFA1A39552D6())) && !unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 8)) && (func_111(unk_0xE0BDAFA1A39552D6()) || func_110(unk_0xE0BDAFA1A39552D6())))
	{
		return;
	}
	Global_1734808 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Param1);
	func_625(iParam0, fVar0);
	if (unk_0x3DC360442A11BB38() && unk_0x0FDDFFBD775C7598() == 15)
	{
		if (func_316(unk_0xE0BDAFA1A39552D6()) || func_624(unk_0xE0BDAFA1A39552D6()))
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
		if (!func_452(unk_0xE0BDAFA1A39552D6(), 21))
		{
			func_401(Param1, 1, 0);
		}
		if (!*uParam4 && func_683(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			*uParam4 = 1;
			if (func_567(iParam0))
			{
				unk_0x71543B3C24188223(func_623(iParam0));
				if (func_566(iParam0, -1))
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
			if (func_572(iParam0))
			{
				fVar1 = func_571(iParam0);
				if (fVar1 != 1f)
				{
					func_568(fVar1);
					unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_622(iParam0) && func_316(unk_0xE0BDAFA1A39552D6()))
				{
					func_564(1);
					func_621(2);
				}
			}
			func_116(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_102(unk_0xE0BDAFA1A39552D6(), 19))
			{
				func_379(19);
			}
		}
		if (*uParam4 && func_683(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			*uParam4 = 0;
			if (func_567(iParam0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0))
				{
					unk_0x71543B3C24188223(1f);
					unk_0x23C09ED6B6466E40(5);
					unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 0);
				}
			}
			if (func_572(iParam0))
			{
				func_620();
				unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 1);
			}
			if (uParam7 && !func_114(unk_0xE0BDAFA1A39552D6()))
			{
				if (func_106(unk_0xE0BDAFA1A39552D6()) != 152)
				{
					func_611();
				}
			}
			if (func_191(2))
			{
				func_564(0);
				func_610(2);
			}
		}
	}
}

void func_610(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_18), iParam0);
}

void func_611()
{
	Global_2404993.f_20 = { Global_2406822 };
	Global_2404993.f_22 = { Global_2406824 };
	func_618();
	func_612(1, 1);
}

void func_612(bool bParam0, bool bParam1)
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
		func_617();
	}
	func_614(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_613(0);
	func_400();
}

void func_613(bool bParam0)
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

void func_614(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		Global_2404993.f_1144 = iParam1;
		Global_2404993.f_1145 = iParam2;
		Global_2404993.f_1146 = iParam10;
		func_615();
		func_409(8, 0, 0);
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
		func_615();
		func_409(0, 0, 0);
		Global_2404993.f_639 = 0;
	}
}

void func_615()
{
	func_616();
	Global_2404993.f_640 = 0;
}

void func_616()
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

void func_617()
{
	Global_2404993.f_347 = { Global_2407149 };
}

void func_618()
{
	func_619();
	Global_2404993.f_1285 = 0;
}

void func_619()
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

void func_620()
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

void func_621(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_18), iParam0);
}

int func_622(int iParam0)
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

float func_623(int iParam0)
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

int func_624(int iParam0)
{
	if (func_259(iParam0))
	{
		if (func_316(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_625(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_626(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_380();
	}
}

int func_626(int iParam0)
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

int func_627()
{
	if (func_632())
	{
		return unk_0x4C4151C3DEC199DC(func_289());
	}
	return 0;
}

int func_628()
{
	if (func_357() || func_629())
	{
		return 1;
	}
	return 0;
}

int func_629()
{
	return func_630(func_7(), 0);
}

int func_630(int iParam0, bool bParam1)
{
	return func_5(unk_0xE0BDAFA1A39552D6(), iParam0, bParam1);
}

bool func_631()
{
	return unk_0xBDA1F5E8A36BFA07(func_608(), 0);
}

bool func_632()
{
	return unk_0xC3A7CFC6468E0BAE(func_289());
}

bool func_633()
{
	return unk_0xC3A7CFC6468E0BAE(func_32());
}

int func_634()
{
	bool bVar0;
	
	func_639(&bVar0);
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
	if (func_638())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	if (func_636(157))
	{
		if (!func_635())
		{
			return 1;
		}
	}
	if (func_636(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_569() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_569()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_635()
{
	return Global_2434839.f_575;
}

int func_636(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_637()
{
	return Global_2444095;
}

bool func_638()
{
	return Global_2434839.f_570;
}

void func_639(var uParam0)
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
					func_640(iVar0);
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

void func_640(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_683(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(iVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(iVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_641(uVar4, &bVar5))
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

int func_641(int iParam0, var uParam1)
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

int func_642()
{
	if (func_643(1))
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

int func_643(bool bParam0)
{
	bool bVar0;
	
	if (!func_133(1))
	{
		bVar0 = false;
		if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 != func_3())
		{
			if (func_683(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51, 0, 1) && Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_19 == 4)
			{
				bVar0 = true;
			}
		}
		else if (func_644(func_106(unk_0xE0BDAFA1A39552D6())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_248(31);
				if (unk_0xA27C9E8196C79D22(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51))
				{
					Global_1609371 = func_204(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51, -2, 0, 0);
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

int func_644(int iParam0)
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

void func_645()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_646()
{
	var uVar0;
	
	func_467(0);
	uVar0 = func_31();
	if (unk_0xC1EDB61CE0A4B94E(uVar0))
	{
		if (unk_0xA2C0F3D7469C0A0B(iVar0))
		{
			unk_0x768B37F1452D4834(&iVar0);
		}
	}
	iVar0 = func_19();
	if (unk_0xC1EDB61CE0A4B94E(iVar0))
	{
		if (unk_0xA2C0F3D7469C0A0B(iVar0))
		{
			unk_0x768B37F1452D4834(&iVar0);
		}
	}
	if (Local_200.f_11 == 3)
	{
		func_663();
	}
	if (Global_2464975.f_5005 == 1)
	{
		Global_2464975.f_5005 = 0;
	}
	if (func_628())
	{
		func_376(0);
	}
	if (func_316(unk_0xE0BDAFA1A39552D6()))
	{
		func_378(0);
	}
	Global_1734817.f_2 = Local_200.f_112;
	Global_1734817.f_3 = Local_200.f_113;
	func_661(Local_200.f_30, Local_200.f_11, Local_200.f_12, -1082130432);
	func_647(1);
	func_317();
	func_384();
	unk_0xF5DF8F3392CDD07B();
}

void func_647(bool bParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 167 || Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 168)
	{
		func_659();
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
		if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 14) && !func_114(unk_0xE0BDAFA1A39552D6()))
		{
			func_564(0);
		}
	}
	else if (func_657(unk_0xE0BDAFA1A39552D6()) != -1)
	{
		func_580(-1);
	}
	func_575(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_654(iVar0);
		iVar0++;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0))
	{
		unk_0x71543B3C24188223(1f);
		unk_0x23C09ED6B6466E40(5);
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 0);
	}
	if (func_95(func_101()))
	{
		func_653(-1);
	}
	else if (func_100(func_101()))
	{
	}
	else
	{
		func_649(-1, 1);
	}
	func_379(19);
	func_379(20);
	func_379(21);
	func_379(22);
	func_379(27);
	func_610(3);
	func_610(4);
	func_610(7);
	func_648();
	if (func_316(unk_0xE0BDAFA1A39552D6()))
	{
		func_378(0);
	}
	func_379(29);
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 = func_3();
	if (Global_2464975.f_4685.f_14 != 0)
	{
		Global_2464975.f_4685.f_14 = 0;
	}
	if (bParam0)
	{
		func_611();
	}
	if (!func_114(unk_0xE0BDAFA1A39552D6()))
	{
		func_620();
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 1);
	}
}

void func_648()
{
	if (func_381(unk_0xE0BDAFA1A39552D6()))
	{
		func_379(25);
	}
}

void func_649(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_101();
	}
	if (iParam0 > 0)
	{
		if (func_135() != func_3())
		{
			if (func_652(unk_0xE0BDAFA1A39552D6()) == unk_0xE0BDAFA1A39552D6())
			{
				Global_2460522.f_35[func_651(iParam0)] = 1;
			}
		}
		iVar0 = func_651(159);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(157);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(148);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(164);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(142);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(152);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(166);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(170);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(173);
		if (func_650(iVar0, Global_262145.f_10793, bParam1))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_650(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_102(unk_0xE0BDAFA1A39552D6(), 19) && !func_102(unk_0xE0BDAFA1A39552D6(), 20)) && !func_102(unk_0xE0BDAFA1A39552D6(), 9))
		{
			return 0;
		}
	}
	if (Global_2460522.f_35[iParam0] == 1 && func_60(&(Global_2460522[iParam0 /*2*/])))
	{
		if (func_287(&(Global_2460522[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2460522.f_35[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_651(int iParam0)
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

int func_652(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_30;
}

void func_653(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_101();
	}
	if (iParam0 > 0)
	{
		if (func_135() != func_3())
		{
			Global_2460522.f_35[func_651(iParam0)] = 1;
		}
		iVar0 = func_651(155);
		if (func_650(iVar0, Global_262145.f_10794, 0))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(163);
		if (func_650(iVar0, Global_262145.f_10794, 0))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(160);
		if (func_650(iVar0, Global_262145.f_10794, 0))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(153);
		if (func_650(iVar0, Global_262145.f_10794, 0))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(162);
		if (func_650(iVar0, Global_262145.f_10794, 0))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(154);
		if (func_650(iVar0, Global_262145.f_10794, 0))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(171);
		if (func_650(iVar0, Global_262145.f_10794, 0))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_651(172);
		if (func_650(iVar0, Global_262145.f_10794, 0))
		{
			func_43(&(Global_2460522[iVar0 /*2*/]));
			func_59(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_654(int iParam0)
{
	if (!func_655(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_107[iParam0 /*3*/], func_656(), 0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_107[iParam0 /*3*/] = { func_656() };
	}
	if (!func_655(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_97[iParam0 /*3*/], func_656(), 0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_97[iParam0 /*3*/] = { func_656() };
	}
}

bool func_655(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_656()
{
	struct<3> Var0;
	
	return Var0;
}

int func_657(int iParam0)
{
	if (func_658(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_27;
	}
	return -1;
}

int func_658(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_27 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_28 != -1))
	{
		return 1;
	}
	return 0;
}

void func_659()
{
	unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 28);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 29);
	func_660(24);
}

void func_660(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

void func_661(var uParam0, var uParam1, var uParam2, int iParam3)
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
			Var98.f_17 = uParam2;
			unk_0xB70B47ADDC7F3C16(&Var98);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = uParam2;
			Var116.f_17 = Global_1734817.f_15;
			unk_0xDC089FE31BE29574(&Var116);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = uParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1734817.f_15;
			unk_0x4FACF158515EBCF1(&Var134);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = uParam2;
			Var153.f_17 = Global_1734817.f_15;
			unk_0x11EA7937D006E418(&Var153);
		}
	}
	func_662();
}

void func_662()
{
	struct<18> Var0;
	
	Global_1734817 = { Var0 };
}

void func_663()
{
	if (Global_1732289)
	{
		if (unk_0x7DA173D4FD42F36B(Global_1732290, 0))
		{
			unk_0x99BCB15F954AF579(&Global_2471749, 0);
		}
		if (unk_0x7DA173D4FD42F36B(Global_1732290, 1))
		{
			unk_0x99BCB15F954AF579(&Global_2471749, 1);
		}
		if (unk_0x7DA173D4FD42F36B(Global_1732290, 5))
		{
			unk_0x99BCB15F954AF579(&Global_2471749, 5);
		}
		if (unk_0x1A7559C163191E43(-355737150))
		{
			unk_0xA78E2D8D6ED49B05(-355737150, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-580979506))
		{
			unk_0xA78E2D8D6ED49B05(-580979506, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-1426452475))
		{
			unk_0xA78E2D8D6ED49B05(-1426452475, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(745417724))
		{
			unk_0xA78E2D8D6ED49B05(745417724, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-1305304906))
		{
			unk_0xA78E2D8D6ED49B05(-1305304906, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-1543175077))
		{
			unk_0xA78E2D8D6ED49B05(-1543175077, 1, 0, 0);
		}
		if (unk_0x1A7559C163191E43(-811770997))
		{
			unk_0xA78E2D8D6ED49B05(-811770997, 1, 0, 0);
		}
		Global_1732290 = 0;
	}
	Global_1732289 = 0;
}

void func_664(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_581(0))
	{
		uVar1 = func_666(func_61(), bParam0, bVar0, bParam1);
		func_665(bParam0, uVar1);
		func_559(0);
	}
}

void func_665(bool bParam0, var uParam1)
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
	Global_1734817.f_8 = uParam1;
	if (Global_1734817.f_4 == 0)
	{
		if ((func_316(unk_0xE0BDAFA1A39552D6()) || func_109(unk_0xE0BDAFA1A39552D6())) || func_270(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1734817.f_4 = 1;
		}
	}
}

int func_666(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_667(struct<20> Param0)
{
	int iVar0;
	
	func_681(func_682(Param0.f_0), Param0);
	unk_0x1E2BF4457AC05E16(func_679(170, -1));
	unk_0xD9E25CCAEFD3B39A(func_677(170, -1));
	unk_0xFABD8F29655099FA(func_675(170, -1));
	func_672(0, -1, 0);
	unk_0x8C2CCD685DA243F6(&Local_200, 114);
	unk_0xE51AD091F27ECBFF(&Local_314, 97);
	unk_0x8AAE4CDF72BA829A(0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_159[iVar0] = -1;
		iVar0++;
	}
	func_668(0, 0);
	return 1;
}

void func_668(int iParam0, int iParam1)
{
	func_671();
	func_670();
	if ((iParam0 != 0 && unk_0xA27C9E8196C79D22(iParam1)) && func_630(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xE27C8E42A97895CF(&Global_1734803, 0);
				break;
			}
	}
	if (!func_227() && !func_271(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (func_458())
		{
			func_621(3);
		}
		func_621(4);
	}
	if (func_133(0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 = func_135();
	}
	func_669();
}

void func_669()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_3();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

void func_670()
{
	func_660(33);
	func_660(34);
	func_660(35);
	func_660(36);
	func_660(37);
	func_660(38);
	func_660(39);
	func_660(40);
	func_660(43);
	func_660(41);
	func_660(42);
	func_660(47);
}

void func_671()
{
	struct<14> Var0;
	
	Global_1734817 = { Var0 };
	Global_1734817.f_14 = 0;
	Global_1734817.f_15 = 0;
}

int func_672(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_674();
			}
			else
			{
				return 0;
			}
		}
		if (!func_673())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_674();
					}
					else
					{
						return 0;
					}
				}
				if (func_638())
				{
					if (!bParam2)
					{
						func_674();
					}
					else
					{
						return 0;
					}
				}
				if (func_636(155))
				{
					if (!bParam2)
					{
						func_674();
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
					func_674();
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
				func_674();
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
			func_674();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_673()
{
	return Global_1315888;
}

void func_674()
{
	unk_0xF5DF8F3392CDD07B();
}

int func_675(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_676(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 6;
		
		default:
	}
	return 0;
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_677(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_678(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		default:
	}
	return 0;
}

int func_678(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_679(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_680(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		default:
	}
	return 0;
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

void func_681(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_674();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
}

int func_682(int iParam0)
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

int func_683(int iParam0, bool bParam1, bool bParam2)
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

