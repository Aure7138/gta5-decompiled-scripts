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
	var uLocal_237 = 0;
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
	if (unk_0xD95428C8AA1DBBF2())
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
		if (unk_0xD95428C8AA1DBBF2())
		{
			func_75();
			switch (func_74(unk_0x9DCF1243D4AAD942()))
			{
				case 0:
					if (func_73() > 0)
					{
						Local_295[unk_0x9DCF1243D4AAD942() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_73() == 3)
					{
						Local_295[unk_0x9DCF1243D4AAD942() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_76();
					break;
			}
			if (unk_0x2CCDE625E685C339())
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
			if (((!unk_0xBB51CB7A4D14453D() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_238.f_56 = 1;
			}
		}
	}
	if (bLocal_51)
	{
		if (!func_3(unk_0xAF65E5A58BE87D95(), 1))
		{
			Local_238.f_0 = 3;
		}
	}
	else if (func_3(unk_0xAF65E5A58BE87D95(), 1) || func_2())
	{
		Local_238.f_0 = 3;
	}
	if (unk_0x3574DD38C5FAC832())
	{
		Local_238.f_0 = 3;
	}
}

bool func_2()
{
	return unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_31.f_18, 0);
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
	return unk_0x61D8FEAF64881CDA(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
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
	if (unk_0xD95428C8AA1DBBF2() && !bParam2)
	{
		if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xF976C624234A4AA8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xD95428C8AA1DBBF2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFACC0E85E40AD425();
			}
			else
			{
				*uParam0 = unk_0x49BD9731DF21C969();
			}
		}
		else
		{
			*uParam0 = unk_0xF976C624234A4AA8();
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
			Local_60 = { unk_0xBF1B13057E5119A4(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 1) };
			Local_60.f_2 = (Local_60.f_2 - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x507DA4994C3D8EBD(), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 1, 0);
					func_10(&(Local_238.f_51), 0, 0);
					iLocal_56 = 1;
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
				if (!unk_0x61D8FEAF64881CDA(uLocal_237, Local_238.f_50))
				{
					Var0 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_60.f_2;
					Var3 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xBC5E1C3D489E93FD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x3C700A81FEF45F8E(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1, 0, -1f, unk_0x507DA4994C3D8EBD(), 1, 0, 0);
					Local_238.f_50++;
					iLocal_56 = 0;
					unk_0x3DBE2A7AF9E71C82(&uLocal_237, Local_238.f_50);
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
	if (unk_0x3D8BF0E3847B29E0(uParam0))
	{
		return !func_15(unk_0xDACD0CF3BB366AB6(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
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
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (!iLocal_55)
			{
				if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_70();
					unk_0x3F9EDC2D18464273(unk_0x507DA4994C3D8EBD(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_flare"), bVar3);
					iLocal_55 = 1;
				}
			}
			else if (unk_0x6A06C2FF2915A3A9(unk_0x507DA4994C3D8EBD(), joaat("weapon_flare"), 100f, &(Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 1))
			{
				if (func_69(Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0f, 0f, 0f))
				{
					Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 = { Var0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0x4A4C1A1BC79EFE8F(1);
				}
				if (!iLocal_54)
				{
					if (!func_68(Local_238.f_2.f_3))
					{
						if (func_14(Local_238.f_2))
						{
							func_67();
							unk_0xAC57FBF981AB03F4(unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3));
							unk_0x8229311A391A4EC6(unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), uLocal_48);
							unk_0x7C76B3DBC3FC45F8(unk_0xDACD0CF3BB366AB6(Local_238.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_54 = 1;
						}
					}
				}
			}
			else if (!iLocal_53)
			{
				if (!unk_0xBB51CB7A4D14453D())
				{
					if (func_66(unk_0x507DA4994C3D8EBD()))
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
	var uVar0;
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
				uVar0 = unk_0xDACD0CF3BB366AB6(Local_238.f_2);
				if (!unk_0xD361727124133DF3(uLocal_46))
				{
					uLocal_46 = unk_0xB6F075D13B917FBE(uVar0);
					unk_0x01DF6D56C47E7482(uLocal_46, 16);
					unk_0x2B271F66198227B7(uLocal_46, "AIRSTRIKE_5");
					unk_0x847FC5384ABAF1A7(uLocal_46, 0);
				}
				else
				{
					unk_0x7660EFF89E3C012A(uLocal_46, unk_0x11E019C8F43ACC8A(unk_0xA9D6B28E708753B6(uVar0)));
				}
				if (!iLocal_52)
				{
					if (!func_16(Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2))
					{
						Var7 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_57 };
					}
					if (unk_0x8FE221761D524CFE(Var7, unk_0xBF1B13057E5119A4(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0x967D899F0B1B3209(unk_0xDACD0CF3BB366AB6(Local_238.f_2));
						iLocal_52 = 1;
					}
				}
				if (!iLocal_235)
				{
					if (!Local_238.f_54)
					{
						if (!func_68(Local_238.f_2.f_3))
						{
							if (!func_16(Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2))
							{
								if (unk_0x8FE221761D524CFE(func_40(unk_0xAF65E5A58BE87D95()), unk_0xBF1B13057E5119A4(unk_0xDACD0CF3BB366AB6(Local_238.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x8FE221761D524CFE(Var7, unk_0xBF1B13057E5119A4(uVar0, 1), 1) >= (60f * 2.5f))
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
						if (!func_16(Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2))
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
								Var1 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0x594EB70937EC1486(uVar0, Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0x876E2901E525BE19(Var1, Var4, joaat("weapon_flare"), 0))
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
						else if (unk_0x594EB70937EC1486(uVar0, Local_57, 75f, 75f, 1000f, 0, 1, 0))
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
	var uVar0;
	
	if (!func_68(Local_238.f_2.f_3))
	{
		if (func_21(Local_238.f_2.f_3))
		{
			if (unk_0xC6EE326730271D0C(Local_238.f_2.f_3))
			{
				uVar0 = unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3);
				unk_0x3E16CE93BAE616EE(uVar0, 0);
			}
		}
	}
}

int func_21(var uParam0)
{
	if (unk_0x555782BF9C00FA3E(uParam0))
	{
		return 1;
	}
	if (unk_0x2CCDE625E685C339())
	{
		unk_0x1301764D6FF2BC45(uParam0);
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
	if (!unk_0xCA97BCE0621BFD25(Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
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
					unk_0xD858EC6FECDB4B3F(0);
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
		if (unk_0xF611D1BB58990143())
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
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
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
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
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
	unk_0xD858EC6FECDB4B3F(0);
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
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
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
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_34(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_33(unk_0x507DA4994C3D8EBD());
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
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_38()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
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
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iParam0), 0);
}

void func_41()
{
	if (unk_0xD361727124133DF3(uLocal_46))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_46);
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
	if ((!unk_0x3D8BF0E3847B29E0(Local_238.f_2.f_3) && func_64(Local_238.f_2.f_3.f_1)) && unk_0x3D8BF0E3847B29E0(Local_238.f_2))
	{
		if (func_14(Local_238.f_2))
		{
			if (func_46(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x2DC5B31EBB810396(unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1);
				unk_0xE440546F94B26235(unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), Global_1574049);
				unk_0x146FCBEC0D4289BF(unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 0);
				unk_0xA1E4BA3B17C6D931(unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), 1);
				func_45();
				unk_0x8229311A391A4EC6(unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), uLocal_47);
				unk_0x7C76B3DBC3FC45F8(unk_0xDACD0CF3BB366AB6(Local_238.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x3D8BF0E3847B29E0(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0xFF467904A8A12BBE(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_45()
{
	if (!iLocal_49)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_47);
			unk_0x8276BF488762405A(0, unk_0xDACD0CF3BB366AB6(Local_238.f_2), 0, 0, Local_57 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x8276BF488762405A(0, unk_0xDACD0CF3BB366AB6(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x6EE8A5CF9AC75F12(uLocal_47);
			iLocal_49 = 1;
		}
	}
}

int func_46(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x743224EE855B1894(1))
	{
		return 0;
	}
	if (!unk_0x3D8BF0E3847B29E0(uParam1))
	{
		return 0;
	}
	if (!unk_0xCA8794CE207FC6D5(unk_0xDACD0CF3BB366AB6(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x522900D6F6631F0E(unk_0xC68FBD37098CE438(unk_0xDACD0CF3BB366AB6(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		unk_0x5BA593EA32D0187E(unk_0xE6286B95AEF7B8C2(*uParam0), iParam7);
		if (unk_0xFD54DBFF23B29E98(unk_0xE6286B95AEF7B8C2(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_47()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x3D8BF0E3847B29E0(Local_238.f_2))
	{
		if (func_64(Local_238.f_2.f_1))
		{
			if (unk_0xDBB45AE299F05694("AIRSTRIKE_FLYOVER", 0))
			{
				func_60(&Var0, &uVar3);
				if (func_49(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (func_48(&(Local_238.f_2), Local_238.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1))
					{
						Local_238.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0xCDC1FD4387DA32EC(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 2);
						unk_0x479E7EEEBDEE245D(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 0);
						unk_0x4B499AD03E78933A(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 1);
						unk_0x0C18E5D819BB888B(unk_0xDACD0CF3BB366AB6(Local_238.f_2));
						unk_0xADE31BE382A60FA4(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 60f);
						unk_0xE0E038A4E5C7727B(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 1, 1);
						unk_0xFCED9D0DBA285B55(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 1000);
						unk_0x5BA593EA32D0187E(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 0);
						unk_0xF14E53754BC84C29(unk_0xDACD0CF3BB366AB6(Local_238.f_2), 3);
						unk_0xB932809AAF04620B(unk_0xDACD0CF3BB366AB6(Local_238.f_2));
						unk_0xFF467904A8A12BBE(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_48(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x4BB625F7911DD339(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x407F91A831576A66(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x546974B676313326(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x61B4CBE0A0FF746E(uVar0);
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		unk_0x5BA593EA32D0187E(uVar0, iParam10);
		if (unk_0xFD54DBFF23B29E98(uVar0))
		{
			if (bParam8)
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 1);
			}
			else
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 0);
			}
		}
		unk_0x464A1A49361CDE18(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_49(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x1DB23BF4B2FFF9BA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x98DDD45D8A6467D0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x98DDD45D8A6467D0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x3D4E28BCE4C60954(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0xF97CA70F2DB85F21(Param0, 2.5f) > 0)
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
		if (func_55(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (!unk_0xC2C705ED6124A7C2())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8FE221761D524CFE(func_40(unk_0xAF65E5A58BE87D95()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x23A9305227426F8B(Param0, fParam3))
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
			if (!func_52(iVar1, 0) && unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xAF65E5A58BE87D95()))
				{
					if ((func_51(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0x5805EAF13FC54BE6(iVar1) == unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x5805EAF13FC54BE6(iVar1) != unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))) || unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0x8FE221761D524CFE(func_40(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x5805EAF13FC54BE6(iVar1) != iParam8 || unk_0x5805EAF13FC54BE6(iVar1) == -1)
						{
							if (unk_0x8FE221761D524CFE(func_40(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
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
	if (unk_0x1ACC4CD5A7C76F75(unk_0x687D51F360787909(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_53(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
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
	if (unk_0xB832D52B86777A35(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x52A84D9C3A400EA8(iParam0))
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
		if ((iParam8 == 1 && unk_0xAF65E5A58BE87D95() != iVar1) || iParam8 == 0)
		{
			if (func_55(iVar1, bParam4, bParam5))
			{
				if (unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
				{
					if (!bParam7 || (!unk_0x9F94F2CFDCA78C55(unk_0x687D51F360787909(iVar1)) && func_51(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) != unk_0x5805EAF13FC54BE6(iVar1))) || unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1)
						{
							if (((unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1 && uParam9) && bParam6) && func_57(iVar1))
							{
							}
							else if (unk_0xFD68187442384158(unk_0x687D51F360787909(iVar1)))
							{
								if (unk_0x8FE221761D524CFE(func_40(iVar1), Param0, 1) < fParam3)
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
	if (func_59(unk_0xAF65E5A58BE87D95(), iParam0))
	{
		return 1;
	}
	Global_2445239 = { func_58(iParam0) };
	if (unk_0x8EF73C99D8AA61C0(&Global_2445239))
	{
		return 1;
	}
	return 0;
}

struct<13> func_58(var uParam0)
{
	struct<13> Var0;
	
	unk_0x0D7D678636A21203(uParam0, &Var0, 13);
	return Var0;
}

int func_59(int iParam0, var uParam1)
{
	if (unk_0x48005FE1241D4091())
	{
		Global_2445239 = { func_58(iParam0) };
		Global_2445252 = { func_58(uParam1) };
		if (unk_0x39606F3949DA3895(&Global_2445239))
		{
			if (unk_0x39606F3949DA3895(&Global_2445252))
			{
				unk_0x96899C28EF61DCA9(&Global_2445169, 35, &Global_2445239);
				unk_0x96899C28EF61DCA9(&Global_2445204, 35, &Global_2445252);
				if (Global_2445169 == Global_2445204)
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
	fVar0 = unk_0xDF609A62B8C63C61((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_61(*uParam0, Local_57);
}

var func_61(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xA75239A5F28CBA62((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_62(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x01E9A2D3AF075537(-1f, 1f), unk_0x01E9A2D3AF075537(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_63(Var0, unk_0x01E9A2D3AF075537(fParam3, fParam4)) };
	Var0.f_2 = unk_0x01E9A2D3AF075537(-fVar3, fVar3);
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

int func_64(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCBE6AC5010E5CE5C(iParam0);
	return unk_0xD291857D0C9C7FEC(iParam0);
}

void func_65(int iParam0)
{
	Local_238.f_2.f_2 = iParam0;
}

int func_66(int iParam0)
{
	var uVar0;
	
	if (unk_0xD7475AE87197B442(iParam0))
	{
		uVar0 = unk_0x78AB10B64129B3D5(iParam0, 0);
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			if (unk_0xE634CB9EE7094537(iVar0, -1) == iParam0)
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
			unk_0xB5DC017AFD430D1B(&uLocal_48);
			unk_0x8276BF488762405A(0, unk_0xDACD0CF3BB366AB6(Local_238.f_2), 0, 0, Local_295[unk_0x9DCF1243D4AAD942() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x8276BF488762405A(0, unk_0xDACD0CF3BB366AB6(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x6EE8A5CF9AC75F12(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_68(var uParam0)
{
	if (unk_0x3D8BF0E3847B29E0(uParam0))
	{
		return unk_0x9F94F2CFDCA78C55(unk_0xE6286B95AEF7B8C2(uParam0));
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
			func_72(&uLocal_69, 3, unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_72(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(uParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(uParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(uParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(uParam2, 1);
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
	if (unk_0x3D8BF0E3847B29E0(Local_238.f_2.f_3) && unk_0x3D8BF0E3847B29E0(Local_238.f_2))
	{
		if (func_14(Local_238.f_2) && !func_68(Local_238.f_2.f_3))
		{
			unk_0x8276BF488762405A(unk_0xE6286B95AEF7B8C2(Local_238.f_2.f_3), unk_0xDACD0CF3BB366AB6(Local_238.f_2), 0, unk_0x507DA4994C3D8EBD(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	func_78(func_80(1, 1), 11, func_79());
	func_77();
}

void func_77()
{
	unk_0x883793591E631A3B();
}

void func_78(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 292;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 6, iParam0);
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
		iVar2 = unk_0xAE744CCC666ACB74(iVar1);
		if (func_55(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xAF65E5A58BE87D95() || iParam0)
			{
				if (bParam1)
				{
					unk_0x3DBE2A7AF9E71C82(&uVar0, iVar1);
				}
				else if (!func_52(iVar2, 0))
				{
					unk_0x3DBE2A7AF9E71C82(&uVar0, iVar1);
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
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 1;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (Global_2436715)
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
	if (!unk_0x0E4B4CA22DBCFA69())
	{
		return 1;
	}
	if (func_82() != 0)
	{
		if (unk_0x25531002BCF0D968(func_82()) == 0)
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
	if (unk_0x289D054E2E18C82E(1, iParam0))
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
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		iVar1 = unk_0xAAB64DCC229F922F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6EDD33D6B8546C95(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_89(iVar0);
					break;
				
				case 2:
					unk_0x6EDD33D6B8546C95(1, iVar0, &Var4, 3);
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
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		if (func_55(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x687D51F360787909(Var0.f_1);
			if (unk_0xFD68187442384158(uVar3))
			{
				if (unk_0x2A24448FF232F834(iVar3, 0))
				{
					uVar4 = unk_0x78AB10B64129B3D5(iVar3, 0);
					if (unk_0x9067781626AA370D(uVar4, Var0.f_2) && unk_0x0D1738F09A13D367())
					{
						if (func_90(uVar4, &bVar5))
						{
							unk_0xA8B02A3D719BC7B0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB67623A401171555(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_90(int iParam0, var uParam1)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0x73E2404DC70203CD(iParam0))
		{
			if (unk_0x9ACF2D423F8B5749(iParam0))
			{
				unk_0xBAE5DF507EEC53C8(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x51BC2FF711F8CF71(iParam0, 0))
		{
			if (unk_0xFE0D96A75DA37EB0(iParam0))
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
	unk_0x31C8FBE30948E037(1);
	unk_0xB5C67549F1765883(1);
	func_96(0, -1, 0);
	unk_0x661B032797391228(&Local_238, 57);
	unk_0xEF4D8ADC6645E7F7(&Local_295, 11);
	unk_0xB43679BBB30F1391(0);
	if (!func_95())
	{
		func_76();
	}
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		Local_57 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0) };
	}
	if (func_3(unk_0xAF65E5A58BE87D95(), 1))
	{
		bLocal_51 = true;
	}
	func_93(64, 1);
	Local_295[unk_0x9DCF1243D4AAD942() /*5*/] = 0;
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
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 0;
		}
		if (unk_0x0483A743E1339A51())
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
	
	iVar0 = unk_0x2B79F83CAD49E762();
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
				if (!unk_0xD95428C8AA1DBBF2())
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
			else if (!unk_0xD5762A6870CA7430())
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
		iVar0 = unk_0x2B79F83CAD49E762();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
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
	else if (!unk_0xD5762A6870CA7430())
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

void func_98(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		func_77();
	}
	unk_0x4C2DEED020A287EF(uParam0, 0, Param1.f_16);
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

