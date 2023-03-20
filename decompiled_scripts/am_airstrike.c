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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	struct<57> Local_241 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_298[2];
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
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_98(ScriptParam_0);
	}
	while (true)
	{
		func_97();
		if (func_87())
		{
			func_82();
		}
		if (unk_0x1C6DF6AD69BE853E())
		{
			func_81();
			switch (func_80(unk_0x519AAFF77CC141DF()))
			{
				case 0:
					if (func_79() > 0)
					{
						Local_298[unk_0x519AAFF77CC141DF() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_79() == 3)
					{
						Local_298[unk_0x519AAFF77CC141DF() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_82();
					break;
			}
			if (unk_0x1C7D9BFDF15A02B4())
			{
				switch (func_79())
				{
					case 0:
						Local_241.f_0 = 2;
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
	switch (Local_241.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_241.f_2.f_2 == 3 && iLocal_56 == 0)
	{
		Local_241.f_0 = 3;
	}
	func_17();
	if (Local_241.f_53 && Local_241.f_50 < 10)
	{
		func_12();
	}
	if (Local_241.f_50 >= 10)
	{
		if (!func_11(&uLocal_68))
		{
			func_10(&uLocal_68, 0, 0);
		}
		else if (func_9(&uLocal_68, 10000, 0))
		{
			Local_241.f_0 = 3;
		}
	}
	if (func_8())
	{
		Local_241.f_0 = 3;
	}
	if (Local_241.f_55 == 1)
	{
		if (!Local_241.f_56)
		{
			if (((!unk_0xA83A609D74168B30() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_241.f_56 = 1;
			}
		}
	}
	if (bLocal_51)
	{
		if (!func_3(unk_0x1329891157A54C63(), 1))
		{
			Local_241.f_0 = 3;
		}
	}
	else if (func_3(unk_0x1329891157A54C63(), 1) || func_2())
	{
		Local_241.f_0 = 3;
	}
	if (unk_0x521385D8214D27C4())
	{
		Local_241.f_0 = 3;
	}
}

bool func_2()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

int func_3(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_4(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_4(int iParam0)
{
	return func_5(iParam0);
}

bool func_5(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

bool func_8()
{
	return Global_1312416;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

void func_12()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	iVar6 = 200;
	if (func_16(Local_62))
	{
		if (func_14(Local_241.f_2))
		{
			Local_62 = { unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 1) };
			Local_62.f_2 = (Local_62.f_2 - 5f);
		}
	}
	switch (Local_241.f_50)
	{
		case 0:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x81873881071CD9FE(), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 1, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					iLocal_56 = 1;
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x84426D0C9AE7A434(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x42A21006BF7254F5(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1, 0, -1f, unk_0x81873881071CD9FE(), 1, 0, 0, 0);
					Local_241.f_50++;
					iLocal_56 = 0;
					unk_0xF3148AAF69AF9CBC(&uLocal_240, Local_241.f_50);
				}
			}
			break;
	}
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_14(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return !func_15(unk_0x1D1DAF7F94D5FE77(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
		else if (!unk_0x7404950238A154C2(iParam0, 0))
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

int func_16(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (func_14(Local_241.f_2))
	{
		uVar0 = unk_0x1D1DAF7F94D5FE77(Local_241.f_2);
		Var4 = { unk_0xB6AE0DAE06D56288(uVar0, 1) };
	}
	if (!iLocal_58)
	{
		if (!func_16(Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2))
		{
			Var1 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 };
		}
		else if (func_23(unk_0x1329891157A54C63(), 1, 1))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		}
	}
	if (bLocal_57)
	{
		if (!iLocal_58)
		{
			if (func_14(Local_241.f_2))
			{
				if (!unk_0x515B65C19A5CA9B1(iVar0, Local_59, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_65 = unk_0x0D6E79537424BACE(Var4, Var1, 0);
				}
				else
				{
					iLocal_58 = 1;
				}
			}
			else
			{
				iLocal_58 = 1;
			}
		}
		else
		{
			fLocal_65 = (fLocal_65 - 3.75f);
		}
		iVar7 = unk_0xF34EE736CF047844(fLocal_65);
		if (fLocal_65 <= 200f)
		{
			iVar8 = 6;
		}
		else
		{
			iVar8 = 1;
		}
		if (fLocal_65 >= 0f)
		{
			func_18(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
			if (func_22(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_21(6, iVar0);
		Global_1336084.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3370.f_183[iVar0] = iParam3;
		Global_1336084.f_3370.f_172[iVar0] = iParam2;
		Global_1336084.f_3370.f_260[iVar0] = iParam4;
		Global_1336084.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1336084.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1336084.f_3370.f_443[iVar0] = iParam7;
		Global_1336084.f_3370.f_454[iVar0] = fParam8;
		Global_1336084.f_3370.f_497[iVar0] = iParam9;
		Global_1336084.f_3370.f_508[iVar0] = iParam10;
		Global_1336084.f_3370.f_205[iVar0] = iParam11;
		Global_1336084.f_3370.f_216[iVar0] = iParam12;
		Global_1336084.f_3370.f_227[iVar0] = iParam13;
		Global_1336084.f_3370.f_238[iVar0] = iParam14;
		Global_1336084.f_3370.f_249[iVar0] = iParam15;
		Global_1336084.f_3370.f_519[iVar0] = iParam16;
		Global_1336084.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_20())
		{
			Global_1336084.f_941 = 1;
		}
		if (unk_0x913B1C01C1BA6C6F())
		{
			iVar2 = 0;
			unk_0x510185F6AA2AE89F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1336084.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1336084.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1336084.f_941 = 1;
			}
			if (func_19())
			{
				Global_1336084.f_945 = 1;
			}
		}
	}
}

int func_19()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x913B1C01C1BA6C6F())
	{
		unk_0x510185F6AA2AE89F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if ((unk_0x45EDE682E0EE8FDF() == 8 || unk_0x45EDE682E0EE8FDF() == 9) || unk_0x45EDE682E0EE8FDF() == 10)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_24()
{
}

void func_25()
{
	struct<3> Var0;
	bool bVar3;
	
	func_77();
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (!iLocal_55)
			{
				if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_76();
					unk_0x8E4A427F5C43E416(unk_0x81873881071CD9FE(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_flare"), bVar3);
					iLocal_55 = 1;
				}
			}
			else if (unk_0x7A6587A15B2DAFF1(unk_0x81873881071CD9FE(), joaat("weapon_flare"), 100f, &(Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2), 1))
			{
				if (func_75(Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 = { Var0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0xB8BB626315D394F5(1);
				}
				if (!iLocal_54)
				{
					if (!func_74(Local_241.f_2.f_3))
					{
						if (func_14(Local_241.f_2))
						{
							func_73();
							unk_0x27CC98B7C879C320(unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3));
							unk_0xC65002CAA1212AF9(unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), uLocal_48);
							unk_0x83A19B90C46C835A(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_54 = 1;
						}
					}
				}
			}
			else if (!iLocal_53)
			{
				if (!unk_0xA83A609D74168B30())
				{
					if (func_72(unk_0x81873881071CD9FE()))
					{
						func_6("AIRSTRIKE_4", -1);
					}
					else
					{
						func_6("AIRSTRIKE_1", -1);
					}
					iLocal_53 = 1;
				}
			}
		}
	}
	func_49();
	func_26();
}

void func_26()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	switch (Local_241.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_241.f_2))
			{
				bLocal_57 = true;
				uVar0 = unk_0x1D1DAF7F94D5FE77(Local_241.f_2);
				if (!unk_0xFBACB273AA628CC5(uLocal_46))
				{
					uLocal_46 = unk_0xE122DDAE9E94767B(uVar0);
					unk_0x8F827BB0F6ED7AA8(uLocal_46, 16);
					unk_0x2AB7C42FF2AF476D(uLocal_46, "AIRSTRIKE_5");
					unk_0x3C8D013C840ADA0A(uLocal_46, 0);
				}
				else
				{
					unk_0x0DDE461489ED7CFE(uLocal_46, unk_0x11E019C8F43ACC8A(unk_0x3306AAAFE3B25098(uVar0)));
				}
				if (!iLocal_52)
				{
					if (!func_16(Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2))
					{
						Var7 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_59 };
					}
					if (unk_0x0D6E79537424BACE(Var7, unk_0xB6AE0DAE06D56288(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0x3AA6A0132A744E2F(unk_0x1D1DAF7F94D5FE77(Local_241.f_2));
						iLocal_52 = 1;
					}
				}
				if (!iLocal_238)
				{
					if (!Local_241.f_54)
					{
						if (!func_74(Local_241.f_2.f_3))
						{
							if (!func_16(Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2))
							{
								if (unk_0x0D6E79537424BACE(func_47(unk_0x1329891157A54C63()), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_241.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x0D6E79537424BACE(Var7, unk_0xB6AE0DAE06D56288(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_30(&uLocal_72, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_238 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_241.f_50 < 10)
				{
					if (!Local_241.f_53)
					{
						if (!func_16(Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_66))
								{
									func_10(&uLocal_66, 0, 0);
								}
								else if (func_9(&uLocal_66, 7500, 0))
								{
									Local_241.f_53 = 1;
								}
								Var1 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0x515B65C19A5CA9B1(iVar0, Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0xF2D6F3C6E10665F2(Var1, Var4, joaat("weapon_flare"), 0))
								{
									Local_241.f_53 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_241.f_53 = 1;
								Local_241.f_50 = 100;
							}
						}
						else if (unk_0x515B65C19A5CA9B1(iVar0, Local_59, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_241.f_53 = 1;
							Local_241.f_50 = 100;
							Local_241.f_54 = 1;
							if (!iLocal_239)
							{
								func_30(&uLocal_72, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_239 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_241.f_2) || func_74(Local_241.f_2.f_3))
			{
				func_27();
			}
			break;
		
		case 3:
			func_48();
			break;
	}
}

void func_27()
{
	var uVar0;
	
	if (!func_74(Local_241.f_2.f_3))
	{
		if (func_28(Local_241.f_2.f_3))
		{
			if (unk_0x402F3F19221FF696(Local_241.f_2.f_3))
			{
				uVar0 = unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3);
				unk_0x9765BF567DB87B5F(uVar0, 0);
			}
		}
	}
}

int func_28(var uParam0)
{
	if (unk_0xB7CA313E589A2589(uParam0))
	{
		return 1;
	}
	if (unk_0x1C7D9BFDF15A02B4())
	{
		unk_0x3A6FE26AD5BF8C2E(uParam0);
	}
	return 0;
}

int func_29()
{
	if (Local_241.f_55 == 1)
	{
		return Local_241.f_55;
	}
	else if (Local_241.f_55 == 2)
	{
		return Local_241.f_55;
	}
	if (!unk_0xD58E02A689955E29(Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_241.f_55 = 1;
		return Local_241.f_55;
	}
	Local_241.f_55 = 2;
	return Local_241.f_55;
}

int func_30(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_45();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_43();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_36();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_35())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_34())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_33();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_32();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_45();
	}
	return 0;
}

void func_32()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_33()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_34()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_36()
{
	if (func_42(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_37();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_37()
{
	func_38();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_38()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_41(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_40(unk_0x81873881071CD9FE());
			if (func_39(iVar0) && (!func_42(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_39(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_45()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

Vector3 func_47(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

void func_48()
{
	if (unk_0xFBACB273AA628CC5(uLocal_46))
	{
		unk_0x0A8175F24237A3D4(&uLocal_46);
	}
}

void func_49()
{
	switch (Local_241.f_2.f_2)
	{
		case 0:
			func_71(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_71(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_241.f_2))
			{
				if (func_74(Local_241.f_2.f_3))
				{
					func_71(3);
				}
			}
			else if (func_74(Local_241.f_2.f_3))
			{
				func_71(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()
{
	if (!func_11(&uLocal_70))
	{
		func_10(&uLocal_70, 0, 0);
	}
	else if (func_70(Local_241.f_2.f_1) && func_70(Local_241.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_70, 3000, 0))
		{
			if (func_54() && func_51())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51()
{
	if ((!unk_0x250A8F68F67CA19A(Local_241.f_2.f_3) && func_70(Local_241.f_2.f_3.f_1)) && unk_0x250A8F68F67CA19A(Local_241.f_2))
	{
		if (func_14(Local_241.f_2))
		{
			if (func_53(&(Local_241.f_2.f_3), Local_241.f_2, 22, Local_241.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x1D15D99A10A15334(unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1);
				unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), Global_1574215);
				unk_0x6BC3C6046951661E(unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 0);
				unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), 1);
				func_52();
				unk_0xC65002CAA1212AF9(unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), uLocal_47);
				unk_0x83A19B90C46C835A(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(Local_241.f_2.f_3))
	{
		return 0;
	}
	unk_0x887F4488DA99FD21(Local_241.f_2.f_3.f_1);
	return 1;
}

void func_52()
{
	if (!iLocal_49)
	{
		if (func_14(Local_241.f_2))
		{
			unk_0xEAD984C2869B8B7C(&uLocal_47);
			unk_0x0EF9ADF085D23B65(0, unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 0, 0, Local_59 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x0EF9ADF085D23B65(0, unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 0, 0, Local_241.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x56D9ED1541046AF6(uLocal_47);
			iLocal_49 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x9C32248B2352E183(1))
	{
		return 0;
	}
	if (!unk_0x250A8F68F67CA19A(uParam1))
	{
		return 0;
	}
	if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x39E5853480A5C856(unk_0x4D135F3066A9BF9C(unk_0x1D1DAF7F94D5FE77(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(unk_0xCFD52BB67CC0A98F(*uParam0), iParam7);
		if (unk_0xE682D8146CB90267(unk_0xCFD52BB67CC0A98F(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_54()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x250A8F68F67CA19A(Local_241.f_2))
	{
		if (func_70(Local_241.f_2.f_1))
		{
			if (unk_0x5FD837A4690FD8A0("AIRSTRIKE_FLYOVER", 0))
			{
				func_66(&Var0, &uVar3);
				if (func_56(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (func_55(&(Local_241.f_2), Local_241.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1))
					{
						Local_241.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 2);
						unk_0xA8F22633ACC22189(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 0);
						unk_0x070978221B2E0085(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 1);
						unk_0x3729EADD1945A108(unk_0x1D1DAF7F94D5FE77(Local_241.f_2));
						unk_0x3D24414865131CB8(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 60f);
						unk_0x686D6CDC14C4BA6C(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 1, 1);
						unk_0xFE247A6A10122367(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 1000);
						unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 0);
						unk_0xDE113FA802D77FA6(unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 3);
						unk_0xD581EFACB162A705(unk_0x1D1DAF7F94D5FE77(Local_241.f_2));
						unk_0x887F4488DA99FD21(Local_241.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x63A7F7D75B0E5FA9(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xA450601E968044DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE00F8DEA9778FC87(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x59FB930CD0E1CDFD(uVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(uVar0, iParam10);
		if (unk_0xE682D8146CB90267(uVar0))
		{
			if (bParam8)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
			else
			{
				unk_0xE2F4428601519A00(*uParam0, 0);
			}
		}
		unk_0xF239D177F4EB07F9(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404607 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8201B8E256A0E8AB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBAE0934DE3A0C108(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBAE0934DE3A0C108(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2EBFC992EF940536(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam13)
	{
		if (unk_0x7781EEE3B32C0EBF(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404607++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_57(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404607++;
	return 1;
}

int func_57(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_23(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_47(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
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
		if (func_23(iVar1, 1, 1))
		{
			if (!func_59(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_58(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
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
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_60(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_60(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_61()
{
	return Global_1312729;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_23(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_47(iVar1), Param0, 1) < fParam3)
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

int func_63(int iParam0)
{
	if (func_65(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_64(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_64(var uParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(uParam0, &Var0, 13);
	return Var0;
}

int func_65(int iParam0, var uParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_64(iParam0) };
		Global_2450514 = { func_64(uParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_66(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_68(Local_59 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0xF8DF3877EB597BBD((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_67(*uParam0, Local_59);
}

var func_67(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x097CA9356FED843D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_68(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x3ECD26BA4F631EE2(-1f, 1f), unk_0x3ECD26BA4F631EE2(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_69(Var0, unk_0x3ECD26BA4F631EE2(fParam3, fParam4)) };
	Var0.f_2 = unk_0x3ECD26BA4F631EE2(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_69(struct<3> Param0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

void func_71(int iParam0)
{
	Local_241.f_2.f_2 = iParam0;
}

int func_72(int iParam0)
{
	var uVar0;
	
	if (unk_0xF8F0C55E476A5A81(iParam0))
	{
		uVar0 = unk_0xE68E6B44DABA9C05(iParam0, 0);
		if (unk_0x7404950238A154C2(uVar0, 0))
		{
			if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()
{
	if (!iLocal_50)
	{
		if (func_14(Local_241.f_2))
		{
			unk_0xEAD984C2869B8B7C(&uLocal_48);
			unk_0x0EF9ADF085D23B65(0, unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 0, 0, Local_298[unk_0x519AAFF77CC141DF() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x0EF9ADF085D23B65(0, unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 0, 0, Local_241.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x56D9ED1541046AF6(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_74(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return unk_0x5FEB513A4402FD59(unk_0xCFD52BB67CC0A98F(uParam0));
	}
	return 1;
}

bool func_75(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_76()
{
	return Global_90861.f_296 > 0;
}

void func_77()
{
	if (!iLocal_237)
	{
		if (!func_74(Local_241.f_2.f_3))
		{
			func_78(&uLocal_72, 3, unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_237 = 1;
		}
	}
}

void func_78(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(uParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(uParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(uParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(uParam2, 1);
			}
		}
	}
}

int func_79()
{
	return Local_241.f_0;
}

int func_80(int iParam0)
{
	return Local_298[iParam0 /*5*/];
}

void func_81()
{
}

void func_82()
{
	if (unk_0x250A8F68F67CA19A(Local_241.f_2.f_3) && unk_0x250A8F68F67CA19A(Local_241.f_2))
	{
		if (func_14(Local_241.f_2) && !func_74(Local_241.f_2.f_3))
		{
			unk_0x0EF9ADF085D23B65(unk_0xCFD52BB67CC0A98F(Local_241.f_2.f_3), unk_0x1D1DAF7F94D5FE77(Local_241.f_2), 0, unk_0x81873881071CD9FE(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	func_84(func_86(1, 1), 11, func_85());
	func_83();
}

void func_83()
{
	unk_0xC23A229F78DAD92A();
}

void func_84(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 297;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 6, iParam0);
	}
}

int func_85()
{
	return -1;
}

int func_86(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1329891157A54C63() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_87()
{
	bool bVar0;
	
	func_94(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_92())
	{
		return 1;
	}
	if (func_91(157))
	{
		if (!func_90())
		{
			return 1;
		}
	}
	if (func_91(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	switch (func_89())
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

int func_89()
{
	return Global_24946;
}

bool func_90()
{
	return Global_2428865.f_573;
}

int func_91(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_2436988;
}

bool func_93()
{
	return Global_2428865.f_568;
}

void func_94(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_95(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_95(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_23(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_96(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_96(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_98(struct<20> Param0)
{
	func_104(func_105(Param0.f_0), Param0);
	unk_0xAADD6AD1A7B6D4E2(1);
	unk_0xCD9A6588DBAF710A(1);
	func_102(0, -1, 0);
	unk_0x19F630B59442E836(&Local_241, 57);
	unk_0xCBCBE0D8DD0EF168(&Local_298, 11);
	unk_0xE6E19E3BBABCBC24(0);
	if (!func_101())
	{
		func_82();
	}
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		Local_59 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
	}
	if (func_3(unk_0x1329891157A54C63(), 1))
	{
		bLocal_51 = true;
	}
	func_99(64, 1);
	Local_298[unk_0x519AAFF77CC141DF() /*5*/] = 0;
}

void func_99(int iParam0, bool bParam1)
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
			Global_2097152[func_100() /*9662*/].f_7252.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_100() /*9662*/].f_7252.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_100() /*9662*/].f_7252.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_100() /*9662*/].f_7252.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_100() /*9662*/].f_7252.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_100() /*9662*/].f_7252.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_100() /*9662*/].f_7252.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_100() /*9662*/].f_7252.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_100() /*9662*/].f_7252.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_100() /*9662*/].f_7252.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_100() /*9662*/].f_7252.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_100() /*9662*/].f_7252.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_100() /*9662*/].f_7252.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_100() /*9662*/].f_7252.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_100() /*9662*/].f_7252.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_100() /*9662*/].f_7252.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_100() /*9662*/].f_7252.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_100() /*9662*/].f_7252.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_100() /*9662*/].f_7252.f_29 = iVar0;
			break;
	}
}

int func_100()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_101()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_93())
		{
			return 0;
		}
		if (func_91(155))
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

int func_102(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_83();
			}
			else
			{
				return 0;
			}
		}
		if (!func_103())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
				if (func_93())
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
				if (func_91(155))
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_83();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_83();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_83();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_103()
{
	return Global_1315867;
}

void func_104(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_83();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_105(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
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
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

