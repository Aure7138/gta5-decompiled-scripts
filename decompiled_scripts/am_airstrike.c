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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
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
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_295[2];
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
	if (unk_0x10FAB35428CCC9D7())
	{
		func_92(ScriptParam_0);
	}
	while (true)
	{
		func_91();
		if (func_81())
		{
			func_76();
		}
		if (unk_0x10FAB35428CCC9D7())
		{
			func_75();
			switch (func_74(unk_0x57A3BDDAD8E5AA0A()))
			{
				case 0:
					if (func_73() > 0)
					{
						Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_73() == 3)
					{
						Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_76();
					break;
			}
			if (unk_0x83CD99A1E6061AB5())
			{
				switch (func_73())
				{
					case 0:
						Local_238.f_0 = 2;
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
	switch (Local_238.f_1)
	{
		case 0:
			func_18();
			break;
		
		case 1:
			func_17();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_56 == 0)
	{
		Local_238.f_0 = 3;
	}
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_12();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!func_11(&uLocal_65))
		{
			func_10(&uLocal_65, 0, 0);
		}
		else if (func_9(&uLocal_65, 10000, 0))
		{
			Local_238.f_0 = 3;
		}
	}
	if (func_8())
	{
		Local_238.f_0 = 3;
	}
	if (Local_238.f_55 == 1)
	{
		if (!Local_238.f_56)
		{
			if (((!unk_0x4D79439A6B55AC67() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_238.f_56 = 1;
			}
		}
	}
	if (bLocal_51)
	{
		if (!func_3(unk_0x4F8644AF03D0E0D6(), 1))
		{
			Local_238.f_0 = 3;
		}
	}
	else if (func_3(unk_0x4F8644AF03D0E0D6(), 1) || func_2())
	{
		Local_238.f_0 = 3;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		Local_238.f_0 = 3;
	}
}

bool func_2()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 0);
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
	if (Global_1582048[iParam0 /*324*/] == -1)
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
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

bool func_7(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_8()
{
	return Global_1312418;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
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
	if (func_16(Local_60))
	{
		if (func_14(Local_238.f_2))
		{
			Local_60 = { unk_0x3FEF770D40960D5A(unk_0x367B936610BA360C(Local_238.f_2), true) };
			Local_60.f_2 = (Local_60.f_2 - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xD80958FC74E988A6(), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 1, 0);
					func_10(&(Local_238.f_51), 0, 0);
					iLocal_56 = 1;
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0xA921AA820C25702F(iLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xC906A7DAB05C8D2B(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0xBFE5756E7407064A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 1, 0, -1f, unk_0xD80958FC74E988A6(), 1, 0, 0);
					Local_238.f_50++;
					iLocal_56 = 0;
					unk_0x933D6A9EEC1BACD0(&iLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_14(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return !func_15(unk_0x367B936610BA360C(iParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
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
}

void func_18()
{
	struct<3> Var0;
	bool bVar3;
	
	func_71();
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (!iLocal_55)
			{
				if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_70();
					unk_0xBF0FD6E56C964FCB(unk_0xD80958FC74E988A6(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_flare"), bVar3);
					iLocal_55 = 1;
				}
			}
			else if (unk_0xDFB4138EEFED7B81(unk_0xD80958FC74E988A6(), joaat("weapon_flare"), 100f, &(Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2), true))
			{
				if (func_69(Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2, 0f, 0f, 0f))
				{
					Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = { Var0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0x8DFCED7A656F8802(true);
				}
				if (!iLocal_54)
				{
					if (!func_68(Local_238.f_2.f_3))
					{
						if (func_14(Local_238.f_2))
						{
							func_67();
							unk_0xE1EF3C1216AFF2CD(unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3));
							unk_0x5ABA3986D90D8A3B(unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), iLocal_48);
							unk_0xB893215D8D4C015B(unk_0x367B936610BA360C(Local_238.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_54 = 1;
						}
					}
				}
			}
			else if (!iLocal_53)
			{
				if (!unk_0x4D79439A6B55AC67())
				{
					if (func_66(unk_0xD80958FC74E988A6()))
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
	func_42();
	func_19();
}

void func_19()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_41();
			break;
		
		case 1:
			func_41();
			break;
		
		case 2:
			if (func_14(Local_238.f_2))
			{
				iVar0 = unk_0x367B936610BA360C(Local_238.f_2);
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_46))
				{
					iLocal_46 = unk_0x5CDE92C702A8FCE7(iVar0);
					unk_0xDF735600A4696DAF(iLocal_46, 16);
					unk_0xEAA0FFE120D92784(iLocal_46, "AIRSTRIKE_5");
					unk_0x75A16C3DA34F1245(iLocal_46, false);
				}
				else
				{
					unk_0xF87683CDF73C3F6E(iLocal_46, unk_0x11E019C8F43ACC8A(unk_0xE83D4F9BA2A38914(iVar0)));
				}
				if (!iLocal_52)
				{
					if (!func_16(Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2))
					{
						Var7 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_57 };
					}
					if (unk_0xF1B760881820C952(Var7, unk_0x3FEF770D40960D5A(iVar0, true), true) <= (60f * 5f))
					{
						unk_0xB70374A758007DFA(unk_0x367B936610BA360C(Local_238.f_2));
						iLocal_52 = 1;
					}
				}
				if (!iLocal_235)
				{
					if (!Local_238.f_54)
					{
						if (!func_68(Local_238.f_2.f_3))
						{
							if (!func_16(Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2))
							{
								if (unk_0xF1B760881820C952(func_40(unk_0x4F8644AF03D0E0D6()), unk_0x3FEF770D40960D5A(unk_0x367B936610BA360C(Local_238.f_2.f_3), true), false) <= 250f)
								{
									if (unk_0xF1B760881820C952(Var7, unk_0x3FEF770D40960D5A(iVar0, true), true) >= (60f * 2.5f))
									{
										func_23(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!func_16(Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2))
						{
							if (func_22() == 2)
							{
								if (!func_11(&uLocal_63))
								{
									func_10(&uLocal_63, 0, 0);
								}
								else if (func_9(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								Var1 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0x20B60995556D004F(iVar0, Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2, 75f, 75f, 1000f, false, true, 0) && unk_0x2E0DC353342C4A6D(Var1, Var4, joaat("weapon_flare"), false))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_22() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (unk_0x20B60995556D004F(iVar0, Local_57, 75f, 75f, 1000f, false, true, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236)
							{
								func_23(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_238.f_2) || func_68(Local_238.f_2.f_3))
			{
				func_20();
			}
			break;
		
		case 3:
			func_41();
			break;
	}
}

void func_20()
{
	int iVar0;
	
	if (!func_68(Local_238.f_2.f_3))
	{
		if (func_21(Local_238.f_2.f_3))
		{
			if (unk_0x4D36070FE0215186(Local_238.f_2.f_3))
			{
				iVar0 = unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3);
				unk_0x6B76DC1F3AE6E6A3(iVar0, 0);
			}
		}
	}
}

int func_21(int iParam0)
{
	if (unk_0xA1607996431332DF(iParam0))
	{
		return 1;
	}
	if (unk_0x83CD99A1E6061AB5())
	{
		unk_0xA670B3662FAFFBD0(iParam0);
	}
	return 0;
}

int func_22()
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!unk_0xEEA5AC2EDA7C33E8(Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

int func_23(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_24(sParam2, iParam3, 0);
}

int func_24(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD79DEEFB53455EBA(false);
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
					func_38();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_36();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_29();
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_27())
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_26();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_25();
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
		func_38();
	}
	return 0;
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_26()
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_27()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_29()
{
	if (func_35(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_30();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_30()
{
	func_31();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_31()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_34(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_33(unk_0xD80958FC74E988A6());
			if (func_32(iVar0) && (!func_35(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_32(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_35(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_36()
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

bool func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_38()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

Vector3 func_40(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

void func_41()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_46))
	{
		unk_0x86A652570E5F25DD(&iLocal_46);
	}
}

void func_42()
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_65(1);
			break;
		
		case 1:
			if (func_43())
			{
				func_65(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_238.f_2))
			{
				if (func_68(Local_238.f_2.f_3))
				{
					func_65(3);
				}
			}
			else if (func_68(Local_238.f_2.f_3))
			{
				func_65(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_43()
{
	if (!func_11(&uLocal_67))
	{
		func_10(&uLocal_67, 0, 0);
	}
	else if (func_64(Local_238.f_2.f_1) && func_64(Local_238.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_67, 6000, 0))
		{
			if (func_47() && func_44())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_44()
{
	if ((!unk_0x38CE16C96BD11344(Local_238.f_2.f_3) && func_64(Local_238.f_2.f_3.f_1)) && unk_0x38CE16C96BD11344(Local_238.f_2))
	{
		if (func_14(Local_238.f_2))
		{
			if (func_46(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x9F8AA94D6D97DBF4(unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), true);
				unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), Global_1574049);
				unk_0xC8A9481A01E63C28(unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), 0);
				unk_0x971D38760FBC02EF(unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), true);
				func_45();
				unk_0x5ABA3986D90D8A3B(unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), iLocal_47);
				unk_0xB893215D8D4C015B(unk_0x367B936610BA360C(Local_238.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0xE532F5D78798DAAB(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_45()
{
	if (!iLocal_49)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0xE8854A4326B9E12B(&iLocal_47);
			unk_0x23703CD154E83B88(0, unk_0x367B936610BA360C(Local_238.f_2), 0, 0, Local_57 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x23703CD154E83B88(0, unk_0x367B936610BA360C(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x39E72BC99E6360CB(iLocal_47);
			iLocal_49 = 1;
		}
	}
}

int func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	if (!unk_0x38CE16C96BD11344(iParam1))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(iParam1), false))
	{
		return 0;
	}
	*uParam0 = unk_0x0EDEC3C276198689(unk_0x7DD959874C1FD534(unk_0x367B936610BA360C(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xBDCD95FC216A8B3E(*uParam0), bParam7);
		if (unk_0xC7827959479DCC78(unk_0xBDCD95FC216A8B3E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_47()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x38CE16C96BD11344(Local_238.f_2))
	{
		if (func_64(Local_238.f_2.f_1))
		{
			if (unk_0x1F1F957154EC51DF("AIRSTRIKE_FLYOVER", 0))
			{
				func_60(&Var0, &fVar3);
				if (func_49(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (func_48(&(Local_238.f_2), Local_238.f_2.f_1, Var0, fVar3, 1, 1, 1, 0, 1, 1))
					{
						Local_238.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0xB664292EAECF7FA6(unk_0x367B936610BA360C(Local_238.f_2), 2);
						unk_0x428CA6DBD1094446(unk_0x367B936610BA360C(Local_238.f_2), false);
						unk_0x1718DE8E3F2823CA(unk_0x367B936610BA360C(Local_238.f_2), true);
						unk_0x710311ADF0E20730(unk_0x367B936610BA360C(Local_238.f_2));
						unk_0xAB54A438726D25D5(unk_0x367B936610BA360C(Local_238.f_2), 60f);
						unk_0x2497C4717C8B881E(unk_0x367B936610BA360C(Local_238.f_2), 1, 1);
						unk_0x79DF7E806202CE01(unk_0x367B936610BA360C(Local_238.f_2), 1000);
						unk_0x3910051CCECDB00C(unk_0x367B936610BA360C(Local_238.f_2), false);
						unk_0xCFC8BE9A5E1FE575(unk_0x367B936610BA360C(Local_238.f_2), 3);
						unk_0x87E7F24270732CB1(unk_0x367B936610BA360C(Local_238.f_2));
						unk_0xE532F5D78798DAAB(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_48(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	
	if (!unk_0x7277F1F2E085EE74(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x01C7B9B38428AEB6(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xAF35D0D2583051B0(iParam1, Param2, fParam5, bParam7, bParam6);
	*uParam0 = unk_0xB4C94523F023419C(iVar0);
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(iVar0, bParam10);
		if (unk_0xC7827959479DCC78(iVar0))
		{
			if (bParam8)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
			else
			{
				unk_0xE05E81A888FA63C8(*uParam0, false);
			}
		}
		unk_0x67B2C79AA7FF5738(iVar0, bParam9);
		return 1;
	}
	return 0;
}

int func_49(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x083961498679DC9F(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam5, false))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0x50CAD495A460B305(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404546++;
	if (fParam14 > 0f)
	{
		if (func_56(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_50(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404546++;
	return 1;
}

int func_50(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_55(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF1B760881820C952(func_40(unk_0x4F8644AF03D0E0D6()), Param0, true) <= (fVar2 + fParam3))
				{
					if (unk_0xE33D59DA70B58FDF(Param0, fParam3))
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
		if (func_55(iVar1, 1, 1))
		{
			if (!func_52(iVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if ((func_51(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0x37039302F4E0A008(iVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x37039302F4E0A008(iVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0xF1B760881820C952(func_40(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(iVar1) != iParam8 || unk_0x37039302F4E0A008(iVar1) == -1)
						{
							if (unk_0xF1B760881820C952(func_40(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
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

int func_51(int iParam0)
{
	if (unk_0xD796CB5BA8F20E32(unk_0x43A66C31C68491C0(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_53(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
	}
	if (Global_1315875[iVar1] == 1)
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

int func_54()
{
	return Global_1312736;
}

int func_55(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4F8644AF03D0E0D6() != iVar1) || iParam8 == 0)
		{
			if (func_55(iVar1, bParam4, bParam5))
			{
				if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
				{
					if (!bParam7 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(iVar1)) && func_51(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(iVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && uParam9) && bParam6) && func_57(iVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(iVar1)))
							{
								if (unk_0xF1B760881820C952(func_40(iVar1), Param0, true) < fParam3)
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

int func_57(int iParam0)
{
	if (func_59(unk_0x4F8644AF03D0E0D6(), iParam0))
	{
		return 1;
	}
	Global_2445236 = { func_58(iParam0) };
	if (unk_0x1A24A179F9B31654(&Global_2445236))
	{
		return 1;
	}
	return 0;
}

struct<13> func_58(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

int func_59(int iParam0, int iParam1)
{
	if (unk_0x579CCED0265D4896())
	{
		Global_2445236 = { func_58(iParam0) };
		Global_2445249 = { func_58(iParam1) };
		if (unk_0xB124B57F571D8F18(&Global_2445236))
		{
			if (unk_0xB124B57F571D8F18(&Global_2445249))
			{
				unk_0xEEE6EACBE8874FBA(&Global_2445166, 35, &Global_2445236);
				unk_0xEEE6EACBE8874FBA(&Global_2445201, 35, &Global_2445249);
				if (Global_2445166 == Global_2445201)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_60(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_62(Local_57 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x8ABE8608576D9CE3((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_61(*uParam0, Local_57);
}

float func_61(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2FFB6B224F4B2926((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_62(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x313CE5879CEB6FCD(-1f, 1f), unk_0x313CE5879CEB6FCD(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_63(Var0, unk_0x313CE5879CEB6FCD(fParam3, fParam4)) };
	Var0.f_2 = unk_0x313CE5879CEB6FCD(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_63(struct<3> Param0, float fParam3)
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

bool func_64(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

void func_65(int iParam0)
{
	Local_238.f_2.f_2 = iParam0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	if (unk_0x298B91AE825E5705(iParam0))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (unk_0xBB40DD2270B65366(iVar0, -1) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_67()
{
	if (!iLocal_50)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0xE8854A4326B9E12B(&iLocal_48);
			unk_0x23703CD154E83B88(0, unk_0x367B936610BA360C(Local_238.f_2), 0, 0, Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x23703CD154E83B88(0, unk_0x367B936610BA360C(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x39E72BC99E6360CB(iLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_68(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(iParam0));
	}
	return 1;
}

bool func_69(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_70()
{
	return Global_89836.f_290 > 0;
}

void func_71()
{
	if (!iLocal_234)
	{
		if (!func_68(Local_238.f_2.f_3))
		{
			func_72(&uLocal_69, 3, unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_72(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

int func_73()
{
	return Local_238.f_0;
}

int func_74(int iParam0)
{
	return Local_295[iParam0 /*5*/];
}

void func_75()
{
}

void func_76()
{
	if (unk_0x38CE16C96BD11344(Local_238.f_2.f_3) && unk_0x38CE16C96BD11344(Local_238.f_2))
	{
		if (func_14(Local_238.f_2) && !func_68(Local_238.f_2.f_3))
		{
			unk_0x23703CD154E83B88(unk_0xBDCD95FC216A8B3E(Local_238.f_2.f_3), unk_0x367B936610BA360C(Local_238.f_2), 0, unk_0xD80958FC74E988A6(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	func_78(func_80(1, 1), 11, func_79());
	func_77();
}

void func_77()
{
	unk_0x1090044AD1DA76FA();
}

void func_78(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 292;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x5AE99C571D5BBE5D(1, &Var0, 6, iParam0);
	}
}

int func_79()
{
	return -1;
}

int func_80(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x41BD2A6B006AF756(iVar1);
		if (func_55(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
				else if (!func_52(iVar2, 0))
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_81()
{
	bool bVar0;
	
	func_88(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (Global_2436712)
	{
		return 1;
	}
	if (func_86())
	{
		return 1;
	}
	if (func_85(157))
	{
		if (!func_84())
		{
			return 1;
		}
	}
	if (func_85(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_82() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_82()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_82()
{
	switch (func_83())
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

int func_83()
{
	return Global_24444;
}

bool func_84()
{
	return Global_2427935.f_570;
}

int func_85(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return Global_2434971;
}

bool func_87()
{
	return Global_2427935.f_565;
}

void func_88(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_89(iVar0);
					break;
				
				case 2:
					unk_0x2902843FCD2B2D79(1, iVar0, &Var4, 3);
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

void func_89(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_55(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_90(iVar4, &bVar5))
						{
							unk_0xA711568EEDB43069(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x629BFA74418D6239(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_90(int iParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x0A7B270912999B3C(iParam0))
		{
			if (unk_0x0991549DE4D64762(iParam0))
			{
				unk_0xAD738C3085FE7E11(iParam0, false, true);
				*uParam1 = 1;
			}
		}
		if (unk_0xDDE6DF5AE89981D2(iParam0, false))
		{
			if (unk_0x01BF60A500E28887(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_92(struct<20> Param0)
{
	func_98(func_99(Param0.f_0), Param0);
	unk_0xB60FEBA45333D36F(1);
	unk_0x76B02E21ED27A469(1);
	func_96(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_238, 57);
	unk_0x3364AA97340CA215(&Local_295, 11);
	unk_0xAA391C728106F7AF(false);
	if (!func_95())
	{
		func_76();
	}
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		Local_57 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
	}
	if (func_3(unk_0x4F8644AF03D0E0D6(), 1))
	{
		bLocal_51 = true;
	}
	func_93(64, 1);
	Local_295[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 0;
}

void func_93(int iParam0, bool bParam1)
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
			Global_2097152[func_94() /*8053*/].f_5756.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_94() /*8053*/].f_5756.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_94() /*8053*/].f_5756.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_94() /*8053*/].f_5756.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_94() /*8053*/].f_5756.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_94() /*8053*/].f_5756.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_94() /*8053*/].f_5756.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_94() /*8053*/].f_5756.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_94() /*8053*/].f_5756.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_94() /*8053*/].f_5756.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_94() /*8053*/].f_5756.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_94() /*8053*/].f_5756.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_94() /*8053*/].f_5756.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_94() /*8053*/].f_5756.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_94() /*8053*/].f_5756.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_94() /*8053*/].f_5756.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_94() /*8053*/].f_5756.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_94() /*8053*/].f_5756.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_94() /*8053*/].f_5756.f_29 = iVar0;
			break;
	}
}

int func_94()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_95()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_87())
		{
			return 0;
		}
		if (func_85(155))
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

int func_96(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_77();
			}
			else
			{
				return 0;
			}
		}
		if (!func_97())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_77();
					}
					else
					{
						return 0;
					}
				}
				if (func_87())
				{
					if (!bParam2)
					{
						func_77();
					}
					else
					{
						return 0;
					}
				}
				if (func_85(155))
				{
					if (!bParam2)
					{
						func_77();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_77();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_77();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_77();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_97()
{
	return Global_1315872;
}

void func_98(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_77();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_99(int iParam0)
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

