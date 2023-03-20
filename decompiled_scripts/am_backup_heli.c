#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60[3] = { 0f, 0f, 0f };
	var uLocal_64 = 16;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
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
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
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
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
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
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	struct<2> Local_229 = { 0, 0 } ;
	var uLocal_231 = 745926877;
	var uLocal_232 = 0;
	var uLocal_233 = 3;
	var uLocal_234 = 0;
	var uLocal_235 = -839953400;
	var uLocal_236 = 0;
	var uLocal_237 = -839953400;
	var uLocal_238 = 0;
	var uLocal_239 = -839953400;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251[2] = { 0, 0 };
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_57 = -1f;
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_112(ScriptParam_0);
	}
	while (true)
	{
		func_111();
		if (func_101())
		{
			func_96();
		}
		if (unk_0x4B69FB3A5B09A1BA())
		{
			func_95();
			func_93();
			switch (func_92(unk_0x9725084D4DFE8258()))
			{
				case 0:
					if (func_91() > 0)
					{
						iLocal_251[unk_0x9725084D4DFE8258()] = 2;
					}
					break;
				
				case 2:
					func_50();
					if (func_91() == 3)
					{
						iLocal_251[unk_0x9725084D4DFE8258()] = 3;
					}
					break;
				
				case 3:
					func_96();
					break;
			}
			if (unk_0x7EF90A4891193127())
			{
				switch (func_91())
				{
					case 0:
						Local_229.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_229.f_1.f_2 == 5)
	{
		Local_229.f_0 = 3;
	}
	if (func_6(&(Local_229.f_1.f_19)))
	{
		if (func_4(&(Local_229.f_1.f_19), 20000, 0))
		{
			Local_229.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_229.f_0 = 3;
	}
	if (bLocal_47)
	{
		if (!unk_0x4F0283431254A343())
		{
			Local_229.f_0 = 3;
		}
	}
	else if (unk_0x4F0283431254A343())
	{
		Local_229.f_0 = 3;
	}
	if (func_2())
	{
		Local_229.f_0 = 3;
	}
}

bool func_2()
{
	return Global_1676946.f_3;
}

bool func_3()
{
	return Global_1312418;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
	if (unk_0x4B69FB3A5B09A1BA() && !bParam2)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_229.f_1.f_2)
	{
		case 0:
			func_49(1);
			break;
		
		case 1:
			if (func_34())
			{
				if (func_23())
				{
					func_5(&(Local_229.f_1.f_17), 0, 0);
					func_49(2);
				}
			}
			break;
		
		case 2:
			func_14();
			func_12();
			if (!func_10(Local_229.f_1))
			{
				if ((func_9(Local_229.f_1.f_3[0 /*2*/]) && func_9(Local_229.f_1.f_3[1 /*2*/])) && func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_229.f_1.f_3[0 /*2*/]))
			{
				if (func_9(Local_229.f_1.f_3[1 /*2*/]) && func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_229.f_1.f_3[1 /*2*/]) && func_9(Local_229.f_1.f_3[2 /*2*/]))
			{
				func_49(3);
			}
			else
			{
				if (func_6(&(Local_229.f_1.f_17)))
				{
					if (func_4(&(Local_229.f_1.f_17), 120000, 0))
					{
						func_49(3);
					}
				}
				if (func_8(unk_0xCFC72E446B0B3AD7(), 0))
				{
					func_49(3);
				}
				if (bLocal_51)
				{
					func_49(3);
				}
			}
			break;
		
		case 3:
			func_14();
			if (!func_10(Local_229.f_1))
			{
				if ((func_9(Local_229.f_1.f_3[0 /*2*/]) && func_9(Local_229.f_1.f_3[1 /*2*/])) && func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_229.f_1.f_3[0 /*2*/]))
			{
				if (func_9(Local_229.f_1.f_3[1 /*2*/]) && func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

bool func_8(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_205, iParam1);
}

int func_9(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		return unk_0x3E0478C40AB5B38D(unk_0x3CD0885BEAA1EC4B(uParam0));
	}
	return 1;
}

int func_10(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		return !func_11(unk_0x1349078BE884A8E7(uParam0));
	}
	return 0;
}

int func_11(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (unk_0x0BA451447C3B1A8D(uParam0))
		{
			return 1;
		}
		else if (!unk_0xFC38B241541883D3(uParam0, 0))
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

void func_12()
{
	if (Global_2422166.f_3296)
	{
		func_13(1, 600000);
		bLocal_51 = true;
	}
	if (Global_2422166.f_3295 >= 250f)
	{
		func_13(1, 600000);
		bLocal_51 = true;
	}
}

void func_13(int iParam0, int iParam1)
{
	if (Global_2422166.f_3181[iParam0] < iParam1)
	{
		Global_2422166.f_3181[iParam0] = iParam1;
	}
	unk_0xEDB9A377CD8B7F03(&(Global_2422166.f_3180), iParam0);
}

void func_14()
{
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (func_10(Local_229.f_1))
	{
		iLocal_55++;
	}
	else if (unk_0x746960881FB19A89(unk_0x1349078BE884A8E7(Local_229.f_1)))
	{
		func_22(&(Local_229.f_1));
		iLocal_55++;
	}
	if (func_9(Local_229.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x62FC9AA71A0BB8DB(Local_229.f_1.f_3[0 /*2*/]))
		{
			func_22(&(Local_229.f_1.f_3[0 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (func_9(Local_229.f_1.f_3[1 /*2*/]))
	{
		if (unk_0x62FC9AA71A0BB8DB(Local_229.f_1.f_3[1 /*2*/]))
		{
			func_22(&(Local_229.f_1.f_3[1 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (func_9(Local_229.f_1.f_3[2 /*2*/]))
	{
		if (unk_0x62FC9AA71A0BB8DB(Local_229.f_1.f_3[2 /*2*/]))
		{
			func_22(&(Local_229.f_1.f_3[2 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (unk_0x56DAB67AA00A12D9(false) != iLocal_55)
	{
		if (func_21(iLocal_55, 0, 1))
		{
			unk_0x2D0DCDC2641217B9(iLocal_55);
		}
	}
	if (unk_0x30F2E008CA509014(false) != iLocal_56)
	{
		if (func_15(iLocal_56, 0, 1))
		{
			unk_0xD5DF0B4E41426D41(iLocal_56);
		}
	}
}

bool func_15(int iParam0, bool bParam1, bool bParam2)
{
	return func_16(0, iParam0, 1, bParam1, bParam2);
}

int func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x94E72F17611BCD3C(Global_1336615, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_20(iParam0) - func_19(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_19(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_20(iParam0) - func_18(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_19(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_20(iParam0) - func_19(iParam0, 1));
		}
		if (!bParam4 && Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] != 3)
		{
			iVar1 = (iVar1 - func_17(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)
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

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1336615.f_1;
			break;
		
		case 1:
			return Global_1336615.f_2;
			break;
		
		case 2:
			return Global_1336615.f_3;
			break;
	}
	return 0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_206;
			}
			else
			{
				return unk_0x30F2E008CA509014(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_207;
			}
			else
			{
				return unk_0x56DAB67AA00A12D9(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_208;
			}
			else
			{
				return unk_0x501C0D3244542A75(!bParam1);
			}
			break;
	}
	return 0;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1336623;
			break;
		
		case 1:
			return Global_1336624;
			break;
		
		case 2:
			return Global_1336625;
			break;
	}
	return 0;
}

bool func_21(int iParam0, bool bParam1, bool bParam2)
{
	return func_16(1, iParam0, 1, bParam1, bParam2);
}

void func_22(var uParam0)
{
	var uVar0;
	
	if (unk_0x62FC9AA71A0BB8DB(*uParam0))
	{
		uVar0 = unk_0x6394B7AC14B39864(*uParam0);
		unk_0x13446D908F119EB2(&uVar0);
	}
}

int func_23()
{
	if (func_33(Local_229.f_1.f_1))
	{
		if (func_33(Local_229.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_10(Local_229.f_1))
			{
				if (func_32(&(Local_229.f_1), Local_229.f_1.f_1, Local_229.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1))
				{
					unk_0xB52E7B84B0470D05(unk_0x1349078BE884A8E7(Local_229.f_1));
					unk_0x6FD45FA39DD18625(unk_0x1349078BE884A8E7(Local_229.f_1), 1, 1);
					unk_0x3BD670EFDCBA8935(unk_0x1349078BE884A8E7(Local_229.f_1));
					unk_0x4EFB72476F8D3302(unk_0x1349078BE884A8E7(Local_229.f_1), 1);
					func_31(unk_0x1349078BE884A8E7(Local_229.f_1), 4);
					Global_2422166.f_3290 = unk_0x1349078BE884A8E7(Local_229.f_1);
					if (func_30(&(Local_229.f_1.f_3[0 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_25(Local_229.f_1.f_3[0 /*2*/]);
						func_24(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0x0F786FD276C0918A(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[0 /*2*/]), unk_0xCFC72E446B0B3AD7());
						func_31(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[0 /*2*/]), 4);
						Global_2422166.f_3291[0] = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[0 /*2*/]);
						if (func_30(&(Local_229.f_1.f_3[1 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_25(Local_229.f_1.f_3[1 /*2*/]);
							func_24(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x0F786FD276C0918A(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[1 /*2*/]), unk_0xCFC72E446B0B3AD7());
							func_31(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[1 /*2*/]), 4);
							Global_2422166.f_3291[1] = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[1 /*2*/]);
							if (func_30(&(Local_229.f_1.f_3[2 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_25(Local_229.f_1.f_3[2 /*2*/]);
								func_24(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0x0F786FD276C0918A(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[2 /*2*/]), unk_0xCFC72E446B0B3AD7());
								func_31(unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[2 /*2*/]), 4);
								Global_2422166.f_3291[2] = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_24(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0x3CD9EE39C1A990B1(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0x64277E0EB39C1162(uParam0, 5, 1);
	unk_0x64277E0EB39C1162(uParam0, 3, 0);
	unk_0x9A43E575C1997EF8(uParam0, 2);
	unk_0x55CB9E8ED151C9E9(uParam0, 1);
	unk_0xBA21D3FA3B9A9F32(uParam0, 2);
	unk_0x79C17B0FEABE87FB(uParam0, 1);
	unk_0x3DB2056294531304(uParam0, 1);
	unk_0x0CFE85F88BE373C8(uParam0, 1);
	unk_0xA2972B846BDC7E33(uParam0, (fLocal_60[iParam1] + 100f));
	unk_0x8A6284AE5FE59AD9(uParam0, 400f);
	unk_0xCBC50793E2A77EA8(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0xE72F82E030DA5988(uParam0, 250);
			unk_0x5C66176FC9E6724C(uParam0, 250);
			unk_0x6071B76736765033(uParam0, 250);
		}
	}
	else
	{
		unk_0xC204B4E5503A54EA(uParam0, 1);
	}
}

void func_25(var uParam0)
{
	var uVar0;
	
	if (!func_27(unk_0xCFC72E446B0B3AD7(), 0) && !func_26())
	{
		uVar0 = Global_1574060[5];
	}
	else
	{
		uVar0 = unk_0x859AF9B2709EF054(unk_0x9F92518438215DD0());
	}
	unk_0xA50AD6983D49A772(unk_0x3CD0885BEAA1EC4B(uParam0), uVar0);
}

bool func_26()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18, 0);
}

int func_27(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_28(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582869[iParam0 /*332*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0);
}

bool func_29(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

int func_30(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x42A900287C0ACC6F(1))
	{
		return 0;
	}
	if (!unk_0x53C457DC61CBEBCA(uParam1))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFC2961E139989126(unk_0xAD7526C9AA33EE39(unk_0x1349078BE884A8E7(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(unk_0x3CD0885BEAA1EC4B(*uParam0), iParam7);
		if (unk_0xCD22EDB73BA42551(unk_0x3CD0885BEAA1EC4B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_31(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB4289912C78431FE(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x70BD1F58B07BE0C1(uParam0, "AttributeDamage");
	}
	unk_0xEDB9A377CD8B7F03(&iVar0, iParam1);
	unk_0x865ACDDED75C1CC2(uParam0, "AttributeDamage", iVar0);
}

int func_32(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x9AD64775663C0BCF(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x8F9D4AA83F37F6E2(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xB0694AD0A3BB8936(uParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0xDBDB9A424A3C41D3(uVar0);
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(uVar0, iParam10);
		if (unk_0xCD22EDB73BA42551(uVar0))
		{
			if (bParam8)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
			else
			{
				unk_0x45A6B51275211E6D(*uParam0, 0);
			}
		}
		unk_0x042E8EAB80B3768F(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x3BC6D217451D6BB7(iParam0);
	return unk_0x149162179DBAEDB0(iParam0);
}

int func_34()
{
	struct<3> Var0;
	
	if (func_48(Local_229.f_1.f_10))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				Var0 = { func_46(func_47(unk_0xCFC72E446B0B3AD7()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_229.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_229.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0xA28E5593877083CB(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_35(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0))
				{
					Local_229.f_1.f_10 = { Var0 };
					return 1;
				}
				else
				{
					Local_229.f_1.f_15++;
					if (Local_229.f_1.f_15 >= 12)
					{
						Local_229.f_1.f_15 = 0;
					}
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

int func_35(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404554 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x65473DAE13685EEB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x04F609D23DD56222(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x04F609D23DD56222(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDFE956DB96641937(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404554++;
	if (bParam13)
	{
		if (unk_0xFC096FF22FF07A48(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404554++;
	if (fParam14 > 0f)
	{
		if (func_42(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404554++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_36(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404554++;
	return 1;
}

int func_36(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_41(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (!unk_0x2E9CF5C574019636())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x91EAD4F2F9B5B38A(func_47(unk_0xCFC72E446B0B3AD7()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE298336AB6E66F7E(Param0, fParam3))
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
		if (func_41(iVar1, 1, 1))
		{
			if (!func_38(iVar1, 0) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xCFC72E446B0B3AD7()))
				{
					if ((func_37(iVar1) || !bParam10) && !Global_2414035[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x59A4BF97B76AD953(iVar1) == unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x59A4BF97B76AD953(iVar1) != unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))) || unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x91EAD4F2F9B5B38A(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x59A4BF97B76AD953(iVar1) != iParam8 || unk_0x59A4BF97B76AD953(iVar1) == -1)
						{
							if (unk_0x91EAD4F2F9B5B38A(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
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

int func_37(int iParam0)
{
	if (unk_0x706AF1DFAF966E35(unk_0x4E6043D225B9C75F(iParam0)) || Global_2414035[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_38(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_39(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_40();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_40()
{
	return Global_1312737;
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_42(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xCFC72E446B0B3AD7() != iVar1) || iParam8 == 0)
		{
			if (func_41(iVar1, bParam4, bParam5))
			{
				if (unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
				{
					if (!bParam7 || (!unk_0x3E0478C40AB5B38D(unk_0x4E6043D225B9C75F(iVar1)) && func_37(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) != unk_0x59A4BF97B76AD953(iVar1))) || unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1)
						{
							if (((unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1 && uParam9) && bParam6) && func_43(iVar1))
							{
							}
							else if (unk_0x746960881FB19A89(unk_0x4E6043D225B9C75F(iVar1)))
							{
								if (unk_0x91EAD4F2F9B5B38A(func_47(iVar1), Param0, 1) < fParam3)
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

int func_43(int iParam0)
{
	if (func_45(unk_0xCFC72E446B0B3AD7(), iParam0))
	{
		return 1;
	}
	Global_2445561 = { func_44(iParam0) };
	if (unk_0x9E1C8024B80AA59C(&Global_2445561))
	{
		return 1;
	}
	return 0;
}

struct<13> func_44(var uParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(uParam0, &Var0, 13);
	return Var0;
}

int func_45(int iParam0, var uParam1)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		Global_2445561 = { func_44(iParam0) };
		Global_2445574 = { func_44(uParam1) };
		if (unk_0x1F0B5C273160FECE(&Global_2445561))
		{
			if (unk_0x1F0B5C273160FECE(&Global_2445574))
			{
				unk_0xFFB76AAE8F413B73(&Global_2445491, 35, &Global_2445561);
				unk_0xFFB76AAE8F413B73(&Global_2445526, 35, &Global_2445574);
				if (Global_2445491 == Global_2445526)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_46(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

Vector3 func_47(int iParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iParam0), 0);
}

int func_48(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_49(int iParam0)
{
	Local_229.f_1.f_2 = iParam0;
}

void func_50()
{
	func_89();
	func_51();
}

void func_51()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_229.f_1.f_2)
	{
		case 0:
			func_88();
			break;
		
		case 1:
			func_88();
			break;
		
		case 2:
			if (func_10(Local_229.f_1))
			{
				uVar1 = unk_0x1349078BE884A8E7(Local_229.f_1);
				if (!unk_0x2E6E8D325977B3EC(uLocal_46))
				{
					uLocal_46 = unk_0x5304FE8A2CED6AE8(uVar1);
					unk_0xAFF0147EA2454485(uLocal_46, 353);
					unk_0x49101D6A0E39441B(uLocal_46, 0);
					unk_0x2A8C2BEEA4F7041F(uLocal_46, "MPCT_MERRY3");
					if (func_41(unk_0xCFC72E446B0B3AD7(), 0, 1))
					{
						func_72(&uLocal_46, func_74(unk_0xCFC72E446B0B3AD7(), -2, 0, 0));
					}
				}
				if (func_71(Local_229.f_1))
				{
					if (unk_0x34CE5EC4D87561E4(Local_229.f_1))
					{
						if (func_70())
						{
							if (!unk_0x08185032EA501ACC(uVar1))
							{
								unk_0x990100A77F333694(uVar1, 1, 0);
							}
						}
						else if (unk_0x08185032EA501ACC(uVar1))
						{
							unk_0x990100A77F333694(uVar1, 0, 0);
						}
					}
				}
				if (unk_0x53C457DC61CBEBCA(Local_229.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[0 /*2*/]);
					if (!unk_0x3E0478C40AB5B38D(uVar0))
					{
						iVar2 = unk_0x1A948771377D072A(uVar1);
						if (iVar2 != 23 || fLocal_60[0] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[0 /*2*/]))
								{
									fLocal_60[0] = fLocal_57;
									unk_0x4A1AC49BA4A747F7(uVar0, 1);
									func_24(uVar0, 0, 0, 0);
									unk_0xB52E7B84B0470D05(uVar1);
									unk_0x6FD45FA39DD18625(uVar1, 1, 1);
									if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
									{
										if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
										{
											unk_0x506BA578F626AA49(uVar0, uVar1, 0, unk_0x9F92518438215DD0(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_60[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_49)
						{
							if (unk_0x2A488C176D52CCA5(func_47(unk_0xCFC72E446B0B3AD7()), unk_0x77009B1C011405A9(unk_0x1349078BE884A8E7(Local_229.f_1), 1)) <= 50f)
							{
								func_53(&uLocal_64, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_49 = 1;
							}
						}
					}
				}
				if (unk_0x53C457DC61CBEBCA(Local_229.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[1 /*2*/]);
					if (!unk_0x3E0478C40AB5B38D(uVar0))
					{
						if (!unk_0x5D1AEC61B1517F38(uVar0, 0) || fLocal_60[1] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[1 /*2*/]))
								{
									fLocal_60[1] = fLocal_57;
									unk_0x4A1AC49BA4A747F7(uVar0, 0);
									func_24(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x53C457DC61CBEBCA(Local_229.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[2 /*2*/]);
					if (!unk_0x3E0478C40AB5B38D(uVar0))
					{
						if (!unk_0x5D1AEC61B1517F38(uVar0, 0) || fLocal_60[2] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[2 /*2*/]))
								{
									fLocal_60[2] = fLocal_57;
									unk_0x4A1AC49BA4A747F7(uVar0, 0);
									func_24(uVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_10(Local_229.f_1) || func_9(Local_229.f_1.f_3[0 /*2*/]))
			{
				func_52();
			}
			break;
		
		case 3:
			func_88();
			if (!func_6(&(Local_229.f_1.f_19)))
			{
				func_5(&(Local_229.f_1.f_19), 0, 0);
			}
			if (func_10(Local_229.f_1))
			{
				uVar1 = unk_0x1349078BE884A8E7(Local_229.f_1);
				if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[0 /*2*/]);
					if (iLocal_52 == 0)
					{
						if (func_71(Local_229.f_1))
						{
							if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[0 /*2*/]))
							{
								unk_0x4A1AC49BA4A747F7(uVar0, 0);
								unk_0x32D18ECD9E6F9BE2(uVar0);
								unk_0xA50AD6983D49A772(uVar0, Global_1574053);
								if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
								{
									if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
									{
										unk_0x506BA578F626AA49(uVar0, uVar1, 0, unk_0x9F92518438215DD0(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0xE8105B7E3908547D(uVar0, 1);
										iLocal_52 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_9(Local_229.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_53 == 0)
					{
						uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[1 /*2*/]);
						if (func_71(Local_229.f_1))
						{
							if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[1 /*2*/]))
							{
								unk_0x32D18ECD9E6F9BE2(uVar0);
								unk_0x4A1AC49BA4A747F7(uVar0, 1);
								unk_0xE8105B7E3908547D(uVar0, 1);
								iLocal_53 = 1;
							}
						}
					}
					if (!iLocal_50)
					{
						if (unk_0x2A488C176D52CCA5(func_47(unk_0xCFC72E446B0B3AD7()), unk_0x77009B1C011405A9(unk_0x1349078BE884A8E7(Local_229.f_1), 1)) <= 50f)
						{
							func_53(&uLocal_64, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_50 = 1;
						}
					}
				}
				if (!func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[2 /*2*/]);
						if (func_71(Local_229.f_1))
						{
							if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[2 /*2*/]))
							{
								unk_0x32D18ECD9E6F9BE2(uVar0);
								unk_0x4A1AC49BA4A747F7(uVar0, 1);
								unk_0xE8105B7E3908547D(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
				}
			}
			if (!func_10(Local_229.f_1) || func_9(Local_229.f_1.f_3[0 /*2*/]))
			{
				func_52();
			}
			break;
		
		case 5:
			func_88();
			break;
	}
}

void func_52()
{
	var uVar0;
	
	if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[0 /*2*/]);
				unk_0x5C66176FC9E6724C(uVar0, 0);
			}
		}
	}
	if (!func_9(Local_229.f_1.f_3[1 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[1 /*2*/]);
				unk_0x5C66176FC9E6724C(uVar0, 0);
			}
		}
	}
	if (!func_9(Local_229.f_1.f_3[2 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[2 /*2*/]))
		{
			if (unk_0x34CE5EC4D87561E4(Local_229.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[2 /*2*/]);
				unk_0x5C66176FC9E6724C(uVar0, 0);
			}
		}
	}
}

int func_53(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 1;
	return func_54(sParam2, iParam3, 0);
}

int func_54(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xC318E8D9E0AA1394(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_68();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_67(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_66();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_59();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_58())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
				}
			}
			if (func_57())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_56();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_55();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_68();
	}
	return 0;
}

void func_55()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_56()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_57()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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

void func_59()
{
	if (func_65(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_60();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_60()
{
	func_61();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_61()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_64(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_63(unk_0x9F92518438215DD0());
			if (func_62(iVar0) && (!func_65(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_62(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_62(int iParam0)
{
	return iParam0 < 3;
}

int func_63(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_64(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_64(int iParam0)
{
	if (func_62(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_65(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_67(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_68()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_70()
{
	if (unk_0x3E15607264E063C3() >= 22)
	{
		return 1;
	}
	if (unk_0x3E15607264E063C3() <= 6 && unk_0x3E15607264E063C3() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_71(var uParam0)
{
	if (unk_0x4792C62764008602(uParam0))
	{
		return 1;
	}
	if (unk_0x7EF90A4891193127())
	{
		unk_0xD8D9F2D24F8E952E(uParam0);
	}
	return 0;
}

void func_72(var uParam0, int iParam1)
{
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0x016722B6E0559A9A(*uParam0, func_73(iParam1));
	}
}

int func_73(int iParam0)
{
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
	return 0;
}

int func_74(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_86(iParam0))
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
	if (func_86(unk_0xCFC72E446B0B3AD7()) || (func_85() && func_84()))
	{
		uVar0 = func_83();
		if (unk_0x746960881FB19A89(uVar0))
		{
			if (unk_0x2FCB242469087013(uVar0))
			{
				if (unk_0xF44355ABE87F03BB(uVar0) != -1)
				{
					if (func_41(unk_0xF44355ABE87F03BB(uVar0), 0, 1))
					{
						return func_81(iParam0, unk_0xF44355ABE87F03BB(uVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_75(0, -1, 0);
			}
		}
	}
	return func_81(iParam0, unk_0xCFC72E446B0B3AD7(), iParam1, bParam2, bParam3);
}

int func_75(bool bParam0, int iParam1, bool bParam2)
{
	return func_76(unk_0xCFC72E446B0B3AD7(), bParam0, iParam1, bParam2);
}

int func_76(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x59A4BF97B76AD953(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_80(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_79(1);
				}
				else
				{
					return func_79(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_77(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_79(1);
	}
	return func_79(0);
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_78(iParam0, iParam1);
	switch (iVar0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		default:
	}
	return 28;
}

int func_78(int iParam0, int iParam1)
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
			if (!func_80(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_79(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_80(int iParam0, int iParam1)
{
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
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 0);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 1);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 2);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 4);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 5);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 6);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 8);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 9);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 10);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 12);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 13);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 14);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x59A4BF97B76AD953(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_82(iParam1, iParam0, iVar0, 0))
		{
			return func_79(1);
		}
		else
		{
			return func_76(iParam1, 1, iVar0, bParam4);
		}
	}
	else if (Global_1573687 || Global_1573678)
	{
		if (iParam0 == iParam1 || (Global_1573687 == 1 && Global_1573697 == 0))
		{
			return func_79(1);
		}
		else
		{
			return func_76(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573682 && Global_1573268.f_11 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x59A4BF97B76AD953(iParam0) == -1 && unk_0x59A4BF97B76AD953(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x59A4BF97B76AD953(iParam0) == unk_0x59A4BF97B76AD953(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x59A4BF97B76AD953(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x59A4BF97B76AD953(iParam0) == iParam2;
	}
	return unk_0x59A4BF97B76AD953(iParam0) == iParam2;
}

var func_83()
{
	return Global_2359301.f_2;
}

bool func_84()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 4);
}

bool func_85()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18, 14);
}

int func_86(int iParam0)
{
	if (func_38(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_87()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

void func_88()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_46))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_46);
	}
}

void func_89()
{
	if (!iLocal_48)
	{
		if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
		{
			func_90(&uLocal_64, 3, unk_0x3CD0885BEAA1EC4B(Local_229.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_48 = 1;
		}
	}
}

void func_90(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(uParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(uParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(uParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(uParam2, 1);
			}
		}
	}
}

int func_91()
{
	return Local_229.f_0;
}

int func_92(int iParam0)
{
	return iLocal_251[iParam0];
}

void func_93()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_57 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_58))
	{
		func_5(&uLocal_58, 0, 0);
	}
	else if (func_4(&uLocal_58, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_47(unk_0xCFC72E446B0B3AD7()) };
		fLocal_57 = unk_0xA28E5593877083CB(Var1.f_0, Var1.f_1);
		if (fLocal_57 < 85f)
		{
			fLocal_57 = 85f;
		}
		func_94(&uLocal_58);
	}
}

void func_94(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_95()
{
}

void func_96()
{
	var uVar0;
	var uVar1;
	
	Global_2422166.f_3290 = uVar0;
	Global_2422166.f_3291[0] = uVar1;
	Global_2422166.f_3291[1] = uVar1;
	Global_2422166.f_3291[2] = uVar1;
	Global_2422166.f_3295 = 0f;
	Global_2422166.f_3296 = 0;
	func_98(func_100(1, 1), 10, func_99());
	func_97();
}

void func_97()
{
	unk_0xE60DEFFB2A853900();
}

void func_98(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 293;
	Var0.f_1 = unk_0xCFC72E446B0B3AD7();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Var0, 6, iParam0);
	}
}

int func_99()
{
	return -1;
}

int func_100(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7225A5A7A532BC7C(iVar1);
		if (func_41(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xCFC72E446B0B3AD7() || iParam0)
			{
				if (bParam1)
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar1);
				}
				else if (!func_38(iVar2, 0))
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_101()
{
	bool bVar0;
	
	func_108(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_107())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_106())
	{
		return 1;
	}
	if (func_105(157))
	{
		if (!func_104())
		{
			return 1;
		}
	}
	if (func_105(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_102() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_102()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_102()
{
	switch (func_103())
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

int func_103()
{
	return Global_24444;
}

bool func_104()
{
	return Global_2428162.f_572;
}

int func_105(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return Global_2435128;
}

bool func_107()
{
	return Global_2428162.f_567;
}

void func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_109(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_109(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_41(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(uVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(uVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_110(uVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_110(var uParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(uParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(uParam0))
			{
				unk_0x336AE92FD68DEF98(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(uParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_112(struct<20> Param0)
{
	func_118(func_119(Param0.f_0), Param0);
	unk_0xD5DF0B4E41426D41(3);
	unk_0x2D0DCDC2641217B9(1);
	func_116(0, -1, 0);
	unk_0xA32DB9C55050112C(&Local_229, 22);
	unk_0x85862F9356411B89(&iLocal_251, 3);
	unk_0xE5556978B2858C53(0);
	if (!func_115())
	{
		func_96();
	}
	if (unk_0x4F0283431254A343())
	{
		bLocal_47 = true;
	}
	func_113(62, 1);
	iLocal_251[unk_0x9725084D4DFE8258()] = 0;
}

void func_113(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_114() /*8064*/].f_5756.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_114() /*8064*/].f_5756.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_114() /*8064*/].f_5756.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_114() /*8064*/].f_5756.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_114() /*8064*/].f_5756.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_114() /*8064*/].f_5756.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_114() /*8064*/].f_5756.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_114() /*8064*/].f_5756.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_114() /*8064*/].f_5756.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_114() /*8064*/].f_5756.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_114() /*8064*/].f_5756.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_114() /*8064*/].f_5756.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_114() /*8064*/].f_5756.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_114() /*8064*/].f_5756.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_114() /*8064*/].f_5756.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_114() /*8064*/].f_5756.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_114() /*8064*/].f_5756.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_114() /*8064*/].f_5756.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_114() /*8064*/].f_5756.f_29 = iVar0;
			break;
	}
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 0;
		}
		if (unk_0xA3E98C97E459BD8E())
		{
			return 1;
		}
		if (func_107())
		{
			return 0;
		}
		if (func_105(155))
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

int func_116(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_97();
			}
			else
			{
				return 0;
			}
		}
		if (!func_117())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
				if (func_107())
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
				if (func_105(155))
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_97();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_97();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_97();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_117()
{
	return Global_1315874;
}

void func_118(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_97();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
}

int func_119(int iParam0)
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
		
		case 36:
			return 32;
		
		case 37:
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
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

