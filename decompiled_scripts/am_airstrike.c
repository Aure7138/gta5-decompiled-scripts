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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 16;
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
	var uLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	var uLocal_241 = 0;
	struct<57> Local_242 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_299[2];
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
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x1995B52453EF6537())
	{
		func_100(ScriptParam_0);
	}
	while (true)
	{
		func_99();
		if (func_89())
		{
			func_85();
		}
		if (unk_0x1995B52453EF6537())
		{
			func_84();
			switch (func_83(unk_0x1E7FB1CA38C403F6()))
			{
				case 0:
					if (func_82() > 0)
					{
						Local_299[unk_0x1E7FB1CA38C403F6() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_82() == 3)
					{
						Local_299[unk_0x1E7FB1CA38C403F6() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_85();
					break;
			}
			if (unk_0x04DE35D10A718EEF())
			{
				switch (func_82())
				{
					case 0:
						Local_242.f_0 = 2;
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
	switch (Local_242.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_242.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_242.f_0 = 3;
	}
	func_17();
	if (Local_242.f_53 && Local_242.f_50 < 10)
	{
		func_12();
	}
	if (Local_242.f_50 >= 10)
	{
		if (!func_11(&uLocal_69))
		{
			func_10(&uLocal_69, 0, 0);
		}
		else if (func_9(&uLocal_69, 10000, 0))
		{
			Local_242.f_0 = 3;
		}
	}
	if (func_8())
	{
		Local_242.f_0 = 3;
	}
	if (Local_242.f_55 == 1)
	{
		if (!Local_242.f_56)
		{
			if (((!unk_0xA14FC57CB26C2B67() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_242.f_56 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_3(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			Local_242.f_0 = 3;
		}
	}
	else if (func_3(unk_0xFB6B3EEFAB2DD12C(), 1) || func_2())
	{
		Local_242.f_0 = 3;
	}
	if (unk_0x30A37E559346657F())
	{
		Local_242.f_0 = 3;
	}
}

bool func_2()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 0);
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
	if (Global_1589933[iParam0 /*601*/] == -1)
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
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

bool func_8()
{
	return Global_1312412;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
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
	if (func_16(Local_63))
	{
		if (func_14(Local_242.f_2))
		{
			Local_63 = { unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_242.f_2), 1) };
			Local_63.f_2 = (Local_63.f_2 - 5f);
		}
	}
	switch (Local_242.f_50)
	{
		case 0:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xD5A676B97920D126(), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 1, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 750, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 750, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 750, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xF44A5E894FE76438(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x87AA1B4BA52B1360(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x99D321DBBA9AC7B9(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1, 0, -1f, unk_0xD5A676B97920D126(), 1, 0, 0, 0);
					Local_242.f_50++;
					iLocal_57 = 0;
					unk_0xB8A73E7DA87B2968(&uLocal_241, Local_242.f_50);
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
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return !func_15(unk_0xE95C934718B1A4FF(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
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
	
	if (func_14(Local_242.f_2))
	{
		uVar0 = unk_0xE95C934718B1A4FF(Local_242.f_2);
		Var4 = { unk_0xC086F8D75730FA3A(uVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_16(Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2))
		{
			Var1 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 };
		}
		else if (func_23(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_14(Local_242.f_2))
			{
				if (!unk_0x1AAFFE4111587B35(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_66 = unk_0x8E92CDAEB8357ABD(Var4, Var1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_66 = (fLocal_66 - 3.75f);
		}
		iVar7 = unk_0xF34EE736CF047844(fLocal_66);
		if (fLocal_66 <= 200f)
		{
			iVar8 = 6;
		}
		else
		{
			iVar8 = 1;
		}
		if (fLocal_66 >= 0f)
		{
			func_18(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
		Global_1354290.f_1 = 1;
		func_21(6, iVar0);
		Global_1354290.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_3579.f_183[iVar0] = iParam3;
		Global_1354290.f_3579.f_172[iVar0] = iParam2;
		Global_1354290.f_3579.f_260[iVar0] = iParam4;
		Global_1354290.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1354290.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1354290.f_3579.f_443[iVar0] = iParam7;
		Global_1354290.f_3579.f_454[iVar0] = fParam8;
		Global_1354290.f_3579.f_497[iVar0] = iParam9;
		Global_1354290.f_3579.f_508[iVar0] = iParam10;
		Global_1354290.f_3579.f_205[iVar0] = iParam11;
		Global_1354290.f_3579.f_216[iVar0] = iParam12;
		Global_1354290.f_3579.f_227[iVar0] = iParam13;
		Global_1354290.f_3579.f_238[iVar0] = iParam14;
		Global_1354290.f_3579.f_249[iVar0] = iParam15;
		Global_1354290.f_3579.f_519[iVar0] = iParam16;
		Global_1354290.f_3579.f_530[iVar0] = iParam17;
		Global_1354290.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_20())
		{
			Global_1354290.f_941 = 1;
		}
		if (unk_0x2D337DD29A7ABD30())
		{
			iVar2 = 0;
			unk_0xBC8A4E0C71749580(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1354290.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1354290.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1354290.f_941 = 1;
			}
			if (func_19())
			{
				Global_1354290.f_945 = 1;
			}
		}
	}
}

int func_19()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0xBC8A4E0C71749580(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if ((unk_0x37F0B37A9EF3F53B() == 8 || unk_0x37F0B37A9EF3F53B() == 9) || unk_0x37F0B37A9EF3F53B() == 10)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_1354290.f_5139[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1354290.f_5139[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
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
	
	func_80();
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (!iLocal_56)
			{
				if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_79();
					unk_0x4408969E7EC5C720(unk_0xD5A676B97920D126(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_flare"), bVar3);
					iLocal_56 = 1;
				}
			}
			else if (unk_0xFFB889F4F5CA089A(unk_0xD5A676B97920D126(), joaat("weapon_flare"), 100f, &(Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2), 1))
			{
				if (func_78(Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 = { Var0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0x04890EB0282525A5(1);
				}
				if (!iLocal_55)
				{
					if (!func_77(Local_242.f_2.f_3))
					{
						if (func_14(Local_242.f_2))
						{
							func_76();
							unk_0x37338B7B7C4982DC(unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3));
							unk_0x8B06B801B92CEC2D(unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), uLocal_49);
							unk_0x9BA5C4A221B27202(unk_0xE95C934718B1A4FF(Local_242.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!unk_0xA14FC57CB26C2B67())
				{
					if (func_75(unk_0xD5A676B97920D126()))
					{
						func_6("AIRSTRIKE_4", -1);
					}
					else
					{
						func_6("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
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
	
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_242.f_2))
			{
				bLocal_58 = true;
				uVar0 = unk_0xE95C934718B1A4FF(Local_242.f_2);
				if (!unk_0x6901135DDCC4904D(uLocal_47))
				{
					uLocal_47 = unk_0x890C68C377CE0CA4(uVar0);
					unk_0xD6507DB77BCBD904(uLocal_47, 16);
					unk_0x2EDAF851B28036F0(uLocal_47, "AIRSTRIKE_5");
					unk_0x576211BDE434AC9A(uLocal_47, 0);
				}
				else
				{
					unk_0x0BBE79B5D12ED5BF(uLocal_47, unk_0x11E019C8F43ACC8A(unk_0x714F015B4D2DE1DC(uVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_16(Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2))
					{
						Var7 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_60 };
					}
					if (unk_0x8E92CDAEB8357ABD(Var7, unk_0xC086F8D75730FA3A(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0xD3DA38AA0B70A8DD(unk_0xE95C934718B1A4FF(Local_242.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_239)
				{
					if (!Local_242.f_54)
					{
						if (!func_77(Local_242.f_2.f_3))
						{
							if (!func_16(Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2))
							{
								if (unk_0x8E92CDAEB8357ABD(func_47(unk_0xFB6B3EEFAB2DD12C()), unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_242.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x8E92CDAEB8357ABD(Var7, unk_0xC086F8D75730FA3A(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_30(&uLocal_73, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_239 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_242.f_50 < 10)
				{
					if (!Local_242.f_53)
					{
						if (!func_16(Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_67))
								{
									func_10(&uLocal_67, 0, 0);
								}
								else if (func_9(&uLocal_67, 7500, 0))
								{
									Local_242.f_53 = 1;
								}
								Var1 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0x1AAFFE4111587B35(iVar0, Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0xC02F302EE238AE9E(Var1, Var4, joaat("weapon_flare"), 0))
								{
									Local_242.f_53 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_242.f_53 = 1;
								Local_242.f_50 = 100;
							}
						}
						else if (unk_0x1AAFFE4111587B35(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_242.f_53 = 1;
							Local_242.f_50 = 100;
							Local_242.f_54 = 1;
							if (!iLocal_240)
							{
								func_30(&uLocal_73, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_240 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_242.f_2) || func_77(Local_242.f_2.f_3))
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
	
	if (!func_77(Local_242.f_2.f_3))
	{
		if (func_28(Local_242.f_2.f_3))
		{
			if (unk_0x50CED8EEAE806923(Local_242.f_2.f_3))
			{
				uVar0 = unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3);
				unk_0xE81D470B804DC69A(uVar0, 0);
			}
		}
	}
}

int func_28(var uParam0)
{
	if (unk_0x7577EA45D81AA1C8(uParam0))
	{
		return 1;
	}
	if (unk_0x04DE35D10A718EEF())
	{
		unk_0x370543697500755D(uParam0);
	}
	return 0;
}

int func_29()
{
	if (Local_242.f_55 == 1)
	{
		return Local_242.f_55;
	}
	else if (Local_242.f_55 == 2)
	{
		return Local_242.f_55;
	}
	if (!unk_0x2A962D5F6CB393D4(Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_242.f_55 = 1;
		return Local_242.f_55;
	}
	Local_242.f_55 = 2;
	return Local_242.f_55;
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x73998CD31AEFA620(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
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
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_43();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_36();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_35())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
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
				switch (Global_14443.f_1)
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_33();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_32();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_33()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_34()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_37();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_37()
{
	func_38();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_38()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_41(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_40(unk_0xD5A676B97920D126());
			if (func_39(iVar0) && (!func_42(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_39(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_45()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

Vector3 func_47(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

void func_48()
{
	if (unk_0x6901135DDCC4904D(uLocal_47))
	{
		unk_0x8A3D7569826A325D(&uLocal_47);
	}
}

void func_49()
{
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_74(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_74(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_242.f_2))
			{
				if (func_77(Local_242.f_2.f_3))
				{
					func_74(3);
				}
			}
			else if (func_77(Local_242.f_2.f_3))
			{
				func_74(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()
{
	if (!func_11(&uLocal_71))
	{
		func_10(&uLocal_71, 0, 0);
	}
	else if (func_73(Local_242.f_2.f_1) && func_73(Local_242.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_71, 3000, 0))
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
	if ((!unk_0xF6A32456BABBBA74(Local_242.f_2.f_3) && func_73(Local_242.f_2.f_3.f_1)) && unk_0xF6A32456BABBBA74(Local_242.f_2))
	{
		if (func_14(Local_242.f_2))
		{
			if (func_53(&(Local_242.f_2.f_3), Local_242.f_2, 22, Local_242.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1);
				unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), Global_1574681);
				unk_0xD6E6C197BF8B123B(unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 0);
				unk_0x7D99F00F48D15ADB(unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), 1);
				func_52();
				unk_0x8B06B801B92CEC2D(unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), uLocal_48);
				unk_0x9BA5C4A221B27202(unk_0xE95C934718B1A4FF(Local_242.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0xF6A32456BABBBA74(Local_242.f_2.f_3))
	{
		return 0;
	}
	unk_0x8188DB74546FF484(Local_242.f_2.f_3.f_1);
	return 1;
}

void func_52()
{
	if (!iLocal_50)
	{
		if (func_14(Local_242.f_2))
		{
			unk_0x456121A0AAC868D4(&uLocal_48);
			unk_0x9380465A430F399B(0, unk_0xE95C934718B1A4FF(Local_242.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x9380465A430F399B(0, unk_0xE95C934718B1A4FF(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0xCFE67FBB69F1C410(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	if (!unk_0xF6A32456BABBBA74(uParam1))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x3EE3A80A2D8115F8(unk_0x0BD2D83BDCAED6E6(unk_0xE95C934718B1A4FF(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(unk_0x9E9133ACB2BCC1D5(*uParam0), iParam7);
		if (unk_0xDB6162AABEF41D01(unk_0x9E9133ACB2BCC1D5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
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
	
	if (!unk_0xF6A32456BABBBA74(Local_242.f_2))
	{
		if (func_73(Local_242.f_2.f_1))
		{
			if (unk_0x7E1E27ABD1B4A085("AIRSTRIKE_FLYOVER", 0))
			{
				func_69(&Var0, &uVar3);
				if (func_56(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_55(&(Local_242.f_2), Local_242.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1, 0))
					{
						Local_242.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0xAFC3B32426D08964(unk_0xE95C934718B1A4FF(Local_242.f_2), 2);
						unk_0xBBAF4B768DDB7572(unk_0xE95C934718B1A4FF(Local_242.f_2), 0);
						unk_0x35A8A01CFABC004E(unk_0xE95C934718B1A4FF(Local_242.f_2), 1);
						unk_0x7D326D5F253C92C7(unk_0xE95C934718B1A4FF(Local_242.f_2));
						unk_0x9773EF10686D53C8(unk_0xE95C934718B1A4FF(Local_242.f_2), 60f);
						unk_0x09AB636BA0F9BE90(unk_0xE95C934718B1A4FF(Local_242.f_2), 1, 1, 0);
						unk_0xF5720FA3C1091115(unk_0xE95C934718B1A4FF(Local_242.f_2), 1000);
						unk_0x0BD3F78CDD5346A8(unk_0xE95C934718B1A4FF(Local_242.f_2), 0);
						unk_0x1EC1DAAF33307EFC(unk_0xE95C934718B1A4FF(Local_242.f_2), 3);
						unk_0x2DE32DBDD162235B(unk_0xE95C934718B1A4FF(Local_242.f_2));
						unk_0x8188DB74546FF484(Local_242.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x66A05E630CEC173C(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xBCDF9E3086B4229C(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xDE8A46A23FDCBBFE(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC4BDEBE5421586E5(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam10);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam8)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
			else
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 0);
			}
		}
		unk_0xC5D75F3BE926D48A(iVar0, iParam9);
		unk_0xB2E0C0D6922D31F2(iVar0, true);
		if (bParam12)
		{
			unk_0xDE6C40B8B4A86A0A(iVar0);
			unk_0x12C2DF66EA2F61B3(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x9B85F36406C920C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x4FC351BF8E970FDA(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x4FC351BF8E970FDA(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x8341BF4B03057509(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x844703FC62D7378B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
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
	Global_2404994.f_2++;
	return 1;
}

int func_57(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_23(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_47(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
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
			if (!func_59(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_58(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x8E92CDAEB8357ABD(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam8 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x8E92CDAEB8357ABD(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
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
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_60(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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

int func_61()
{
	return Global_1312731;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam8 == 0)
		{
			if (func_23(iVar1, bParam4, bParam5))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam7 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (unk_0x8E92CDAEB8357ABD(func_47(iVar1), Param0, 1) < fParam3)
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
	if (func_68(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	Global_2482005 = { func_67(iParam0) };
	if (unk_0xBB38DDB2E1AE0498(&Global_2482005))
	{
		return 1;
	}
	if (func_64(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (!iVar0 == func_65())
	{
		if (iVar0 == func_66(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_65();
}

struct<13> func_67(var uParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(uParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, var uParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_67(iParam0) };
		Global_2482018 = { func_67(uParam1) };
		if (unk_0xF42D93ECBADC9AE3(&Global_2482005))
		{
			if (unk_0xF42D93ECBADC9AE3(&Global_2482018))
			{
				unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005);
				unk_0xF6955213DB8BD7D3(&Global_2481970, 35, &Global_2482018);
				if (Global_2481935 == Global_2481970)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_71(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0xD4B787C023B137CD((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_70(*uParam0, Local_60);
}

var func_70(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x1467106C5D2966B9((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_71(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0xB5FEA1F26F05B9F5(-1f, 1f), unk_0xB5FEA1F26F05B9F5(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_72(Var0, unk_0xB5FEA1F26F05B9F5(fParam3, fParam4)) };
	Var0.f_2 = unk_0xB5FEA1F26F05B9F5(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_72(struct<3> Param0, float fParam3)
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

int func_73(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x4ACD1E4CBA159ED1(iParam0);
	return unk_0x7AD0E9452821C95D(iParam0);
}

void func_74(int iParam0)
{
	Local_242.f_2.f_2 = iParam0;
}

int func_75(int iParam0)
{
	var uVar0;
	
	if (unk_0xEDC11DB270927D92(iParam0))
	{
		uVar0 = unk_0x0DBD8FE531FD620D(iParam0, 0);
		if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
		{
			if (unk_0x98BE504E8B389665(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_76()
{
	if (!iLocal_51)
	{
		if (func_14(Local_242.f_2))
		{
			unk_0x456121A0AAC868D4(&uLocal_49);
			unk_0x9380465A430F399B(0, unk_0xE95C934718B1A4FF(Local_242.f_2), 0, 0, Local_299[unk_0x1E7FB1CA38C403F6() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x9380465A430F399B(0, unk_0xE95C934718B1A4FF(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0xCFE67FBB69F1C410(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_77(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return unk_0x00B5B0B68211D89B(unk_0x9E9133ACB2BCC1D5(uParam0));
	}
	return 1;
}

bool func_78(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_79()
{
	return Global_91538.f_303 > 0;
}

void func_80()
{
	if (!iLocal_238)
	{
		if (!func_77(Local_242.f_2.f_3))
		{
			func_81(&uLocal_73, 3, unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_238 = 1;
		}
	}
}

void func_81(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(uParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(uParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(uParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(uParam2, 1);
			}
		}
	}
}

int func_82()
{
	return Local_242.f_0;
}

int func_83(int iParam0)
{
	return Local_299[iParam0 /*5*/];
}

void func_84()
{
}

void func_85()
{
	if (unk_0xF6A32456BABBBA74(Local_242.f_2.f_3) && unk_0xF6A32456BABBBA74(Local_242.f_2))
	{
		if (func_14(Local_242.f_2) && !func_77(Local_242.f_2.f_3))
		{
			unk_0x9380465A430F399B(unk_0x9E9133ACB2BCC1D5(Local_242.f_2.f_3), unk_0xE95C934718B1A4FF(Local_242.f_2), 0, unk_0xD5A676B97920D126(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	func_87(func_88(1, 1), 11, func_65());
	func_86();
}

void func_86()
{
	unk_0x01DFCA3621B68C4A();
}

void func_87(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 352;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 6, iParam0);
	}
}

int func_88(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
			{
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_89()
{
	bool bVar0;
	var uVar1;
	
	func_96(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_95())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_94())
	{
		return 1;
	}
	if (func_93(157))
	{
		if (!func_92())
		{
			return 1;
		}
	}
	if (func_93(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_90() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_90()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_90()
{
	switch (func_91())
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

int func_91()
{
	return Global_25185;
}

bool func_92()
{
	return Global_2443089.f_577;
}

int func_93(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return Global_2452479;
}

bool func_95()
{
	return Global_2443089.f_572;
}

void func_96(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_97(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
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

void func_97(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_23(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_98(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_98(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(iParam0))
		{
			if (unk_0x94482DCC4926EF60(iParam0))
			{
				unk_0xC53606C390BE2727(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(iParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_99()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_100(struct<20> Param0)
{
	func_106(func_107(Param0.f_0), Param0);
	unk_0xAC4AA684E16779D5(1);
	unk_0xF5116E26EBA83CA9(1);
	func_104(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_242, 57);
	unk_0x47DDB3A546F48091(&Local_299, 11);
	unk_0x7E85CEE862B85A74(0);
	if (!func_103())
	{
		func_85();
	}
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		Local_60 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
	}
	if (func_3(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		bLocal_52 = true;
	}
	func_101(64, 1);
	Local_299[unk_0x1E7FB1CA38C403F6() /*5*/] = 0;
}

void func_101(int iParam0, bool bParam1)
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
			Global_2097152[func_102() /*10730*/].f_7546.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_102() /*10730*/].f_7546.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_102() /*10730*/].f_7546.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_102() /*10730*/].f_7546.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_102() /*10730*/].f_7546.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_102() /*10730*/].f_7546.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_102() /*10730*/].f_7546.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_102() /*10730*/].f_7546.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_102() /*10730*/].f_7546.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_102() /*10730*/].f_7546.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_102() /*10730*/].f_7546.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_102() /*10730*/].f_7546.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_102() /*10730*/].f_7546.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_102() /*10730*/].f_7546.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_102() /*10730*/].f_7546.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_102() /*10730*/].f_7546.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_102() /*10730*/].f_7546.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_102() /*10730*/].f_7546.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_102() /*10730*/].f_7546.f_30 = iVar0;
			break;
	}
}

int func_102()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_103()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_95())
		{
			return 0;
		}
		if (func_93(155))
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

int func_104(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_86();
			}
			else
			{
				return 0;
			}
		}
		if (!func_105())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_86();
					}
					else
					{
						return 0;
					}
				}
				if (func_95())
				{
					if (!bParam2)
					{
						func_86();
					}
					else
					{
						return 0;
					}
				}
				if (func_93(155))
				{
					if (!bParam2)
					{
						func_86();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_86();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_86();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_86();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_105()
{
	return Global_1315206;
}

void func_106(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_86();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_107(int iParam0)
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
		
		case 73:
		case 74:
			return 4;
		
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
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

