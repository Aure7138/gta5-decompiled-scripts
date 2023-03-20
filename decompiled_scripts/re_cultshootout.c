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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53[6];
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_78 = 0f;
	float fLocal_79[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_109[2] = { 0, 0 };
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 16;
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
	var uLocal_238 = 0;
	var uLocal_239 = 0;
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
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_50 = { 2194.135f, 5593.278f, 53.70383f };
	Local_72 = { 2203.27f, 5549.918f, 93.09485f };
	Local_75 = { 2199.629f, 5640.293f, 52.23926f };
	fLocal_78 = 81.5f;
	Local_47 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x7547D7CF93115D6D(11))
	{
		func_136();
	}
	if (func_109(Local_47, -1, 0, 0, 0))
	{
		func_106(-1);
	}
	else
	{
		unk_0x883793591E631A3B();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0x3BCCCFB165E15A65() || iLocal_99) || (func_105() && unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_47, 500f, 500f, 500f, 0, 1, 0)))
		{
			if (!func_105())
			{
				if (func_104())
				{
					func_136();
				}
			}
			unk_0xC0B91B09CAEBF5AE("RE_DS", 0);
			switch (iLocal_45)
			{
				case 0:
					if (func_92())
					{
						func_136();
					}
					func_90();
					iLocal_87 = 1;
					break;
				
				case 1:
					func_24();
					break;
				
				case 2:
					func_1();
					break;
			}
		}
		else
		{
			func_136();
		}
	}
}

void func_1()
{
	if (iLocal_87 && !iLocal_86)
	{
		unk_0xF74C93D9036BCC1E("RE20_FAIL");
		if (unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			func_23(0);
		}
		iLocal_124 = 0;
		while (iLocal_124 < 6)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_102[iLocal_124]))
			{
				if (unk_0xD361727124133DF3(uLocal_115[iLocal_124]))
				{
					unk_0xA0A65B537B1F11EC(&(uLocal_115[iLocal_124]));
				}
				unk_0xCA4DD92F1F2931F3(&(iLocal_102[iLocal_124]));
			}
			iLocal_124++;
		}
		unk_0xA54C914AEB391F49(1f);
		unk_0xB8265112BB26591B(3, 1);
		if (bLocal_88)
		{
			func_3(18, 7, 0);
		}
		else
		{
			func_3(18, 1, 0);
		}
		iLocal_86 = 1;
	}
	if (unk_0x2A488C176D52CCA5(func_2(unk_0xAF65E5A58BE87D95()), Local_47) > 150f)
	{
		func_136();
	}
}

Vector3 func_2(var uParam0)
{
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(uParam0), 0);
}

void func_3(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_22();
	func_13(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_12(iParam0, &uVar0);
	Var1 = { func_4(&uVar0) };
}

struct<16> func_4(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_11(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_10(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_9(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_8(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_7(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_5(*uParam0), 64);
	return Var0;
}

int func_5(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_6(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_6(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_7(int iParam0)
{
	return iParam0 & 15;
}

int func_8(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_9(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_10(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_11(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_12(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_13(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_5(*uParam0);
	iVar1 = func_7(*uParam0);
	iVar2 = func_8(*uParam0);
	iVar3 = func_11(*uParam0);
	iVar4 = func_10(*uParam0);
	iVar5 = func_9(*uParam0);
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
	iVar6 = func_21(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_21(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_14(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_14(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, iParam1);
	func_19(uParam0, iParam2);
	func_18(uParam0, iParam3);
	func_17(uParam0, iParam4);
	func_16(uParam0, iParam5);
	func_15(uParam0, iParam6);
}

void func_15(var uParam0, int iParam1)
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

void func_16(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_17(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_7(*uParam0);
	iVar1 = func_5(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_18(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_19(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_20(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_21(int iParam0, int iParam1)
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

int func_22()
{
	var uVar0;
	
	func_20(&uVar0, unk_0x2784A8234E9B4202());
	func_19(&uVar0, unk_0x06F66CEDC24218A4());
	func_18(&uVar0, unk_0xE76C684D1C903A71());
	func_17(&uVar0, unk_0xA277D6C04B4B44C8());
	func_16(&uVar0, unk_0x1285C2DD1E4945FF());
	func_15(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

void func_23(int iParam0)
{
	Global_97173.f_28117.f_7 = iParam0;
}

void func_24()
{
	func_70();
	func_69();
	switch (iLocal_46)
	{
		case 0:
			if (unk_0xBAE26BE2046B39E0(uLocal_112))
			{
				if (unk_0xD361727124133DF3(uLocal_113))
				{
					if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_72, Local_75, fLocal_78, 0, 1, 0))
					{
						func_66();
						if (!bLocal_100)
						{
							unk_0xF74C93D9036BCC1E("RE20_FADE_RADIO_OUT");
							iLocal_129 = unk_0xF976C624234A4AA8();
							bLocal_100 = true;
						}
						if (!func_105())
						{
							func_57(1);
						}
					}
				}
			}
			if (bLocal_100)
			{
				if ((unk_0xF976C624234A4AA8() - iLocal_129) > 6000)
				{
					if (!iLocal_101)
					{
						unk_0xF74C93D9036BCC1E("RE20_START");
						iLocal_101 = 1;
					}
				}
			}
			break;
		
		case 1:
			if ((((unk_0x9F94F2CFDCA78C55(iLocal_102[0]) && unk_0x9F94F2CFDCA78C55(iLocal_102[1])) && unk_0x9F94F2CFDCA78C55(iLocal_102[2])) && unk_0x9F94F2CFDCA78C55(iLocal_102[3])) && unk_0x9F94F2CFDCA78C55(iLocal_102[4]))
			{
				func_25();
			}
			else if (!unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_47, 100f, 100f, 100f, 0, 1, 0))
			{
				func_25();
			}
			break;
	}
	iLocal_124 = 0;
	while (iLocal_124 < 6)
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_102[iLocal_124]))
		{
			if (unk_0xD361727124133DF3(uLocal_115[iLocal_124]))
			{
				unk_0xA0A65B537B1F11EC(&(uLocal_115[iLocal_124]));
			}
		}
		iLocal_124++;
	}
}

void func_25()
{
	func_56("DRUG_BLIP_END", -1);
	unk_0xF74C93D9036BCC1E("RE20_END");
	func_23(1);
	while (func_55())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	bLocal_88 = true;
	func_29(-1, 0);
	func_26();
	iLocal_45 = 2;
}

void func_26()
{
	func_27();
}

int func_27()
{
	if (func_28(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_28(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_29(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_40("RE_REWARD", 1, 0, 4000, 10000, func_43(), 0, 138, 0);
			func_39(51);
		}
		if (func_38(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_37(iParam0, iParam1) != 322)
		{
			func_31(func_37(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_30(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_30(7);
			}
			else
			{
				func_30(1);
			}
		}
	}
}

void func_30(int iParam0)
{
	Global_97159 = iParam0;
}

void func_31(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_35((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_32();
	}
}

void func_32()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_34(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_33() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_27();
				}
			}
		}
	}
}

int func_33()
{
	return Global_24444;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_36()
{
	return Global_1312736;
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_40(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_41(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_41(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xA858564DC37EED5E(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA858564DC37EED5E(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0xF976C624234A4AA8() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0xF976C624234A4AA8() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_42();
	}
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_43()
{
	func_44();
	switch (Global_97173.f_1729.f_539.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_48(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_47(unk_0x507DA4994C3D8EBD());
			if (func_46(iVar0) && (!func_45(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_46(Global_97173.f_1729.f_539.f_3213))
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

bool func_45(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_46(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_52()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x3ED5FA3F61EC9E68(), 64);
	uVar16 = func_53(Var0);
	return uVar16;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BA42EA02A10243D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_54()
{
	return 1;
}

int func_55()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_56(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

int func_57(int iParam0)
{
	if (func_60())
	{
		Global_97163 = 1;
		Global_97160 = unk_0xF976C624234A4AA8();
		if (func_38(Global_97162))
		{
			func_58(0);
		}
		unk_0xAABDA3B6E57B068A(1, "RE_TITLE");
		if (iParam0 && func_38(Global_97162))
		{
			unk_0x2EFA6B02E866355A();
		}
		return 1;
	}
	return 0;
}

void func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_56(func_59(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 1))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_56(func_59(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 2))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_56(func_59(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 2);
				}
			}
			break;
	}
}

char* func_59(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_60()
{
	switch (func_61(&Global_24503, 0, 5, 0, unk_0xF682120D0C324317()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_61(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_65(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x60D71C675384BFB1(unk_0x4D82797EF5035A9F(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6C786E2F6583AF3(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_63(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_62(uParam0, iParam4);
		}
	}
	return 2;
}

void func_62(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_63(int iParam0)
{
	return func_64(iParam0, Global_34909);
}

int func_64(int iParam0, int iParam1)
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

int func_65(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_63(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_66()
{
	if (unk_0xD361727124133DF3(uLocal_113))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_113);
		if (unk_0xBAE26BE2046B39E0(uLocal_112))
		{
			if (!unk_0xD361727124133DF3(uLocal_114))
			{
				uLocal_114 = func_67(uLocal_112);
			}
		}
	}
}

int func_67(var uParam0)
{
	var uVar0;
	
	if (!unk_0xBAE26BE2046B39E0(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x200CF8FFC0E56B0C(uParam0);
	unk_0x1D8833C0F155BFE7(uVar0, func_68(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	return uVar0;
}

float func_68(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_69()
{
	if (unk_0x0561B9096FB80229(uLocal_112))
	{
		if (unk_0xD361727124133DF3(uLocal_113))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_113);
		}
		unk_0xC1B1E9A034A63A62(0);
		iLocal_99 = 1;
		iLocal_126 = 2;
		iLocal_46 = 1;
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	
	iLocal_124 = 0;
	while (iLocal_124 < 6)
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_102[iLocal_124]))
		{
			if (unk_0xD361727124133DF3(uLocal_115[iLocal_124]))
			{
				unk_0xA0A65B537B1F11EC(&(uLocal_115[iLocal_124]));
			}
			iLocal_126 = 2;
		}
		else
		{
			if ((func_89() && iLocal_126 != 2) || (iLocal_126 == 1 && unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD())))
			{
				func_87();
				unk_0x4EDE34FBADD967A6(0);
				if (func_86())
				{
					func_85(&uLocal_130, 4, iLocal_102[iLocal_124], "DRUGFARMGOON", 0, 1);
					func_73(&uLocal_130, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
				}
				iLocal_126 = 2;
			}
			switch (iLocal_126)
			{
				case 0:
					if (!iLocal_89[iLocal_124])
					{
						if ((unk_0x2F406E91B59DB558(iLocal_102[iLocal_124], unk_0x507DA4994C3D8EBD(), 15f, 15f, 40f, 0, 1, 0) && unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_102[iLocal_124])) || unk_0x2A71687AF0AE817B(iLocal_102[iLocal_124], unk_0x507DA4994C3D8EBD()))
						{
							if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_72, Local_75, fLocal_78, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), 2205.918f, 5633.455f, 55.7472f, 15f, 15f, 40f, 0, 1, 0))
							{
								if (!func_55())
								{
									func_85(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
									func_73(&uLocal_130, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								}
								iVar0 = 0;
								while (iVar0 < iLocal_102)
								{
									unk_0xDC06C29AA1C2E756(iLocal_102[iLocal_124]);
									unk_0xB5DC017AFD430D1B(&uLocal_123);
									unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
									unk_0x68D196451292305F(0, unk_0x507DA4994C3D8EBD(), unk_0x507DA4994C3D8EBD(), 1f, 0, 4f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									unk_0xCDBB862D670BA90E(0, unk_0x507DA4994C3D8EBD(), -1, 0);
									unk_0x6EE8A5CF9AC75F12(uLocal_123);
									unk_0x8229311A391A4EC6(iLocal_102[iVar0], uLocal_123);
									unk_0x9F77DFFC61FCB68C(&uLocal_123);
									unk_0x6C2B8C9CB6B5CDE4(iLocal_102[iVar0], 1, -1, 0);
									iVar0++;
								}
								iLocal_89[iLocal_124] = 1;
								iLocal_129 = unk_0xF976C624234A4AA8();
								iLocal_126 = 1;
							}
						}
					}
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 < iLocal_102)
					{
						if (!iLocal_89[iVar1])
						{
							unk_0xDC06C29AA1C2E756(iLocal_102[iLocal_124]);
							unk_0xB5DC017AFD430D1B(&uLocal_123);
							unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
							unk_0x68D196451292305F(0, unk_0x507DA4994C3D8EBD(), unk_0x507DA4994C3D8EBD(), 1f, 0, 4f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0xCDBB862D670BA90E(0, unk_0x507DA4994C3D8EBD(), -1, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_123);
							unk_0x8229311A391A4EC6(iLocal_102[iVar1], uLocal_123);
							unk_0x9F77DFFC61FCB68C(&uLocal_123);
							unk_0x6C2B8C9CB6B5CDE4(iLocal_102[iVar1], 1, -1, 0);
							iLocal_89[iVar1] = 1;
						}
						iVar1++;
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_102[iLocal_124]))
					{
						if (!unk_0x849DBD2D635C99D5(iLocal_102[iLocal_124], unk_0x507DA4994C3D8EBD(), 50f))
						{
							unk_0x8E759206778E571F(iLocal_102[iLocal_124], unk_0x507DA4994C3D8EBD(), -1, 0, 2);
							unk_0xA1E4BA3B17C6D931(iLocal_102[iLocal_124], 1);
						}
					}
					if (unk_0x3428BABF05B108EE(unk_0x507DA4994C3D8EBD()))
					{
						if (iLocal_127 == 0)
						{
							iLocal_127 = unk_0xF976C624234A4AA8();
						}
						else
						{
							iLocal_128 = unk_0xF976C624234A4AA8();
						}
					}
					else
					{
						iLocal_128 = 0;
						iLocal_127 = 0;
					}
					if (iLocal_89[iLocal_124] && !iLocal_96)
					{
						if ((unk_0xF976C624234A4AA8() - iLocal_129) > 6000)
						{
							if (!func_55())
							{
								func_85(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
								func_73(&uLocal_130, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_96 = 1;
							}
						}
					}
					if (iLocal_89[iLocal_124] && !iLocal_97)
					{
						if ((unk_0xF976C624234A4AA8() - iLocal_129) > 12000)
						{
							if (!func_55())
							{
								func_85(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
								func_73(&uLocal_130, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_97 = 1;
							}
						}
					}
					if (iLocal_89[iLocal_124])
					{
						if (((unk_0xF976C624234A4AA8() - iLocal_129) > 18000 || (iLocal_128 - iLocal_127) > 5000) || unk_0xC20B334EFA64243F(iLocal_102[iLocal_124], 0))
						{
							if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_72, Local_75, fLocal_78, 0, 1, 0) || unk_0x2F406E91B59DB558(iLocal_102[iLocal_124], unk_0x507DA4994C3D8EBD(), 15f, 15f, 5f, 0, 1, 0))
							{
								func_87();
								unk_0x4EDE34FBADD967A6(0);
								if (func_86())
								{
									func_85(&uLocal_130, 4, iLocal_102[iLocal_124], "DRUGFARMGOON", 0, 1);
									func_73(&uLocal_130, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
								}
								else
								{
									func_85(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
									func_73(&uLocal_130, "RECSHAU", "RECSH_FIRE", 4, 0, 0, 0);
								}
								iLocal_126 = 2;
							}
							else
							{
								if (!unk_0xC20B334EFA64243F(iLocal_102[iLocal_124], 0))
								{
									unk_0xAC57FBF981AB03F4(iLocal_102[iLocal_124]);
									if (!unk_0x9F94F2CFDCA78C55(iLocal_102[0]))
									{
										unk_0xB5DC017AFD430D1B(&uLocal_123);
										unk_0x3F07E364A21EBC20(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x211FA3DF75B31A84(0, 2214.833f, 5635.627f, 55.0029f, 8000);
										unk_0x3F07E364A21EBC20(0, 2222.259f, 5613.22f, 53.5576f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x211FA3DF75B31A84(0, 2221.951f, 5593.625f, 52.9483f, 10000);
										unk_0xC3DFF4EEE866DBF6(uLocal_123, 1);
										unk_0x6EE8A5CF9AC75F12(uLocal_123);
										unk_0x8229311A391A4EC6(iLocal_102[0], uLocal_123);
										unk_0x9F77DFFC61FCB68C(&uLocal_123);
										unk_0x6C2B8C9CB6B5CDE4(iLocal_102[0], 0, -1, 0);
									}
									if (!unk_0x9F94F2CFDCA78C55(iLocal_102[1]))
									{
										unk_0xB5DC017AFD430D1B(&uLocal_123);
										unk_0x3F07E364A21EBC20(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x211FA3DF75B31A84(0, 2205.466f, 5583.631f, 52.8682f, 8000);
										unk_0x3F07E364A21EBC20(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x211FA3DF75B31A84(0, 2199.498f, 5560.702f, 52.8606f, 10000);
										unk_0xC3DFF4EEE866DBF6(uLocal_123, 1);
										unk_0x6EE8A5CF9AC75F12(uLocal_123);
										unk_0x8229311A391A4EC6(iLocal_102[1], uLocal_123);
										unk_0x9F77DFFC61FCB68C(&uLocal_123);
										unk_0x6C2B8C9CB6B5CDE4(iLocal_102[1], 0, -1, 0);
									}
									if (!unk_0x9F94F2CFDCA78C55(iLocal_102[2]))
									{
										unk_0xB5DC017AFD430D1B(&uLocal_123);
										unk_0x3F07E364A21EBC20(0, 2199.679f, 5590.673f, 52.7784f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x211FA3DF75B31A84(0, 2210.646f, 5593.576f, 52.8312f, 8000);
										unk_0x3F07E364A21EBC20(0, 2232.761f, 5593.563f, 53.0542f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x211FA3DF75B31A84(0, 2237.916f, 5599.589f, 53.2311f, 12000);
										unk_0xC3DFF4EEE866DBF6(uLocal_123, 1);
										unk_0x6EE8A5CF9AC75F12(uLocal_123);
										unk_0x8229311A391A4EC6(iLocal_102[2], uLocal_123);
										unk_0x9F77DFFC61FCB68C(&uLocal_123);
										unk_0x6C2B8C9CB6B5CDE4(iLocal_102[2], 0, -1, 0);
									}
									if (!unk_0x9F94F2CFDCA78C55(iLocal_102[3]) && !unk_0x9F94F2CFDCA78C55(iLocal_102[4]))
									{
										unk_0xB5DC017AFD430D1B(&uLocal_123);
										unk_0xA3C87095904A382C(0, iLocal_102[4], -1, 2f, 1f, 1073741824, 0);
										unk_0xDE75E9DE5B6221E1(0, iLocal_102[4], 0);
										unk_0x371C90C63129A983(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
										unk_0x6EE8A5CF9AC75F12(uLocal_123);
										unk_0x8229311A391A4EC6(iLocal_102[3], uLocal_123);
										unk_0x9F77DFFC61FCB68C(&uLocal_123);
										unk_0x6C2B8C9CB6B5CDE4(iLocal_102[3], 0, -1, 0);
									}
									if (!unk_0x9F94F2CFDCA78C55(iLocal_102[4]))
									{
										unk_0xB5DC017AFD430D1B(&uLocal_123);
										unk_0xA3C87095904A382C(0, iLocal_102[3], -1, 2f, 1f, 1073741824, 0);
										unk_0xDE75E9DE5B6221E1(0, iLocal_102[3], 0);
										unk_0x371C90C63129A983(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
										unk_0x6EE8A5CF9AC75F12(uLocal_123);
										unk_0x8229311A391A4EC6(iLocal_102[4], uLocal_123);
										unk_0x9F77DFFC61FCB68C(&uLocal_123);
										unk_0x6C2B8C9CB6B5CDE4(iLocal_102[4], 0, -1, 0);
									}
									if (!unk_0x9F94F2CFDCA78C55(iLocal_102[5]))
									{
										unk_0xADF2D93E45C64741(iLocal_102[5], 0f, 3f, 1);
										unk_0x6C2B8C9CB6B5CDE4(iLocal_102[5], 0, -1, 0);
									}
								}
								iVar1 = 0;
								while (iVar1 < iLocal_89)
								{
									iLocal_89[iVar1] = 0;
									iVar1++;
								}
								iLocal_89[iLocal_124] = 0;
								iLocal_126 = 0;
							}
						}
					}
					break;
				
				case 2:
					func_66();
					iLocal_124 = 0;
					while (iLocal_124 < 6)
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_102[iLocal_124]))
						{
							if (!unk_0xC20B334EFA64243F(iLocal_102[iLocal_124], 0))
							{
								unk_0xDC06C29AA1C2E756(iLocal_102[iLocal_124]);
								unk_0x247B2966C6C2A4C1(iLocal_102[iLocal_124], unk_0x507DA4994C3D8EBD(), 0, 16);
								unk_0xA1E4BA3B17C6D931(iLocal_102[iLocal_124], 1);
								if (!unk_0xD361727124133DF3(uLocal_115[iLocal_124]))
								{
									uLocal_115[iLocal_124] = func_71(iLocal_102[iLocal_124], 1, 145);
								}
							}
						}
						if (!iLocal_98)
						{
							if (!func_55())
							{
								func_85(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
								func_73(&uLocal_130, "RECSHAU", "RECSH_STASH", 4, 0, 0, 0);
								iLocal_98 = 1;
							}
						}
						iLocal_124++;
					}
					break;
				}
		}
		iLocal_124++;
	}
}

var func_71(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_72(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xD361727124133DF3(uVar0)) && unk_0xD177A95825B53731(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0x2B271F66198227B7(uVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_72(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(uParam0);
	if (unk_0x1BA544973A67E699(uParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_68(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(uParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_68(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(uParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_68(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 0;
	return func_74(sParam2, iParam3, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)
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
					func_83();
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
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_81();
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
				func_79();
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
				if (func_78())
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
			if (func_77())
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
			func_76();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_75();
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
		func_83();
	}
	return 0;
}

void func_75()
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

void func_76()
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

int func_77()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_78()
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

void func_79()
{
	if (func_45(14))
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
		Global_14393 = func_80();
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

int func_80()
{
	func_44();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_81()
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

bool func_82(int iParam0, int iParam1)
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

void func_83()
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

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_85(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_86()
{
	return Global_97173.f_28117.f_7;
}

void func_87()
{
	Global_14558 = 0;
	func_88();
}

void func_88()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_109)
	{
		if (unk_0xCA8794CE207FC6D5(iLocal_109[iVar0], 0))
		{
			if (unk_0x6255AE2591FE7603(iLocal_109[iVar0], unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_102)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_102[iVar0]))
		{
			if (unk_0x2A71687AF0AE817B(iLocal_102[iVar0], unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_102[iVar0]) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_102[iVar0]))
				{
					return 1;
				}
			}
			if ((((((unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1), 5f, 1) || unk_0x6255AE2591FE7603(iLocal_102[iVar0], unk_0x507DA4994C3D8EBD(), 1)) || unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iLocal_102[iVar0])) || unk_0x876E2901E525BE19(unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1) - Vector(15f, 15f, 15f), unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1)) || unk_0x876E2901E525BE19(unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1) - Vector(15f, 15f, 15f), unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || unk_0x876E2901E525BE19(unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1) - Vector(15f, 15f, 15f), unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1)) || unk_0x876E2901E525BE19(unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1) - Vector(15f, 15f, 15f), unk_0xBF1B13057E5119A4(iLocal_102[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_stickybomb"), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (unk_0xE8AE70970F9FEB69(-1, Local_72, Local_75, fLocal_78))
	{
		return 1;
	}
	if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_72, Local_75, fLocal_78, 0, 1, 0))
	{
		if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
		{
			return 1;
		}
	}
	if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), 2202.498f, 5603.424f, 52.7476f, 20f, 20f, 20f, 0, 1, 0))
	{
		if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_90()
{
	int iVar0;
	
	unk_0xCBE6AC5010E5CE5C(joaat("g_m_y_salvagoon_01"));
	unk_0xCBE6AC5010E5CE5C(joaat("bobcatxl"));
	unk_0xCBE6AC5010E5CE5C(joaat("prop_cash_case_01"));
	if ((unk_0xD291857D0C9C7FEC(joaat("g_m_y_salvagoon_01")) && unk_0xD291857D0C9C7FEC(joaat("bobcatxl"))) && unk_0xD291857D0C9C7FEC(joaat("prop_cash_case_01")))
	{
		unk_0x92832F671263F8E0(Local_47 - Vector(20f, 50f, 50f), Local_47 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		unk_0x941F924D5E9C2140(joaat("bobcatxl"), 1);
		unk_0xA54C914AEB391F49(0f);
		unk_0xB8265112BB26591B(3, 0);
		iLocal_109[0] = unk_0x546974B676313326(joaat("bobcatxl"), 2209.17f, 5572.897f, 52.7565f, 255.5161f, 1, 1);
		unk_0xBAE5DF507EEC53C8(iLocal_109[0], 1, 0);
		unk_0xD90C30D269B19096(iLocal_109[0]);
		unk_0x25A5C91E8079E04E(iLocal_109[0], 1, 1);
		iLocal_109[1] = unk_0x546974B676313326(joaat("bobcatxl"), 2195.473f, 5607.506f, 52.5648f, 168.4012f, 1, 1);
		unk_0xBAE5DF507EEC53C8(iLocal_109[1], 1, 0);
		unk_0x25A5C91E8079E04E(iLocal_109[1], 1, 0);
		iVar0 = 0;
		unk_0x3DBE2A7AF9E71C82(&iVar0, 1);
		uLocal_112 = unk_0x00D55FB1F137D220(joaat("pickup_money_case"), Local_50, -1.368082f, 0.230633f, 176.8749f, iVar0, unk_0x4D3E68F73B727E49(40000, 100000), 2, 1, joaat("prop_cash_case_01"));
		Local_53[0 /*3*/] = { 2205.769f, 5631.985f, 55.553f };
		fLocal_79[0] = 352.2203f;
		Local_53[1 /*3*/] = { 2210.584f, 5580.684f, 52.8132f };
		fLocal_79[1] = 300.5012f;
		Local_53[2 /*3*/] = { 2201.302f, 5589.279f, 52.9354f };
		fLocal_79[2] = 53.1602f;
		Local_53[3 /*3*/] = { 2202.535f, 5613.367f, 52.6781f };
		fLocal_79[3] = 70f;
		Local_53[4 /*3*/] = { 2200.764f, 5614.076f, 52.6852f };
		fLocal_79[4] = 53f;
		Local_53[5 /*3*/] = { 2193.714f, 5595.456f, 52.7615f };
		fLocal_79[5] = 338.8346f;
		unk_0x46B6351EE89452C8("DrugCult", &iLocal_122);
		unk_0xCA4EA7D4F6DCCD43(3, iLocal_122, joaat("COP"));
		unk_0xCA4EA7D4F6DCCD43(3, joaat("COP"), iLocal_122);
		unk_0xCA4EA7D4F6DCCD43(5, iLocal_122, joaat("player"));
		iLocal_124 = 0;
		while (iLocal_124 < 6)
		{
			iLocal_102[iLocal_124] = unk_0x7B88529CAE3B7F15(26, joaat("g_m_y_salvagoon_01"), Local_53[iLocal_124 /*3*/], fLocal_79[iLocal_124], 1, 1);
			unk_0x2DC5B31EBB810396(iLocal_102[iLocal_124], 1);
			unk_0x48FFA098B5BE8ED0(iLocal_102[iLocal_124], 2);
			unk_0x3A1E687904400847(iLocal_102[iLocal_124], 50, 1);
			unk_0xD149F8A3FE6B4956(iLocal_102[iLocal_124], 0);
			unk_0xE7962295F4C99484(iLocal_102[iLocal_124], 13);
			unk_0xE440546F94B26235(iLocal_102[iLocal_124], iLocal_122);
			iLocal_125 = unk_0x4D3E68F73B727E49(0, 3);
			if (iLocal_125 == 0)
			{
				unk_0x3F9EDC2D18464273(iLocal_102[iLocal_124], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
			}
			else if (iLocal_125 == 1)
			{
				unk_0x3F9EDC2D18464273(iLocal_102[iLocal_124], joaat("weapon_microsmg"), -1, 1, 1);
			}
			else
			{
				unk_0x3F9EDC2D18464273(iLocal_102[iLocal_124], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			unk_0x7FEDD088E489CE41(iLocal_102[iLocal_124], 42, 1);
			func_85(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
			iLocal_124++;
		}
		if (!unk_0x9F94F2CFDCA78C55(iLocal_102[0]))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_123);
			unk_0x3F07E364A21EBC20(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x211FA3DF75B31A84(0, 2214.833f, 5635.627f, 55.0029f, 8000);
			unk_0x3F07E364A21EBC20(0, 2215.993f, 5613.299f, 53.6157f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x211FA3DF75B31A84(0, 2221.951f, 5593.625f, 52.9483f, 10000);
			unk_0xC3DFF4EEE866DBF6(uLocal_123, 1);
			unk_0x6EE8A5CF9AC75F12(uLocal_123);
			unk_0x8229311A391A4EC6(iLocal_102[0], uLocal_123);
			unk_0x9F77DFFC61FCB68C(&uLocal_123);
		}
		unk_0x3F671607BC1804B5(iLocal_102[0], "piDrugCult[0]");
		if (!unk_0x9F94F2CFDCA78C55(iLocal_102[1]))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_123);
			unk_0x3F07E364A21EBC20(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x211FA3DF75B31A84(0, 2205.466f, 5583.631f, 52.8682f, 8000);
			unk_0x3F07E364A21EBC20(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x211FA3DF75B31A84(0, 2199.498f, 5560.702f, 52.8606f, 10000);
			unk_0xC3DFF4EEE866DBF6(uLocal_123, 1);
			unk_0x6EE8A5CF9AC75F12(uLocal_123);
			unk_0x8229311A391A4EC6(iLocal_102[1], uLocal_123);
			unk_0x9F77DFFC61FCB68C(&uLocal_123);
		}
		unk_0x3F671607BC1804B5(iLocal_102[1], "piDrugCult[1]");
		if (!unk_0x9F94F2CFDCA78C55(iLocal_102[2]))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_123);
			unk_0x3F07E364A21EBC20(0, 2201.014f, 5589.357f, 52.9573f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x211FA3DF75B31A84(0, 2210.646f, 5593.576f, 52.8312f, 8000);
			unk_0x3F07E364A21EBC20(0, 2229.667f, 5598.368f, 53.2195f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x211FA3DF75B31A84(0, 2237.916f, 5599.589f, 53.2311f, 12000);
			unk_0xC3DFF4EEE866DBF6(uLocal_123, 1);
			unk_0x6EE8A5CF9AC75F12(uLocal_123);
			unk_0x8229311A391A4EC6(iLocal_102[2], uLocal_123);
			unk_0x9F77DFFC61FCB68C(&uLocal_123);
		}
		unk_0x3F671607BC1804B5(iLocal_102[2], "piDrugCult[2]");
		if (!unk_0x9F94F2CFDCA78C55(iLocal_102[3]) && !unk_0x9F94F2CFDCA78C55(iLocal_102[4]))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_123);
			unk_0xA3C87095904A382C(0, iLocal_102[4], -1, 2f, 1f, 1073741824, 0);
			unk_0xDE75E9DE5B6221E1(0, iLocal_102[4], 0);
			unk_0x371C90C63129A983(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0x6EE8A5CF9AC75F12(uLocal_123);
			unk_0x8229311A391A4EC6(iLocal_102[3], uLocal_123);
			unk_0x9F77DFFC61FCB68C(&uLocal_123);
		}
		unk_0x3F671607BC1804B5(iLocal_102[3], "piDrugCult[3]");
		if (!unk_0x9F94F2CFDCA78C55(iLocal_102[4]))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_123);
			unk_0xA3C87095904A382C(0, iLocal_102[3], -1, 2f, 1f, 1073741824, 0);
			unk_0xDE75E9DE5B6221E1(0, iLocal_102[3], 0);
			unk_0x371C90C63129A983(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0x6EE8A5CF9AC75F12(uLocal_123);
			unk_0x8229311A391A4EC6(iLocal_102[4], uLocal_123);
			unk_0x9F77DFFC61FCB68C(&uLocal_123);
		}
		unk_0x3F671607BC1804B5(iLocal_102[4], "piDrugCult[4]");
		unk_0xADF2D93E45C64741(iLocal_102[5], 0f, 3f, 1);
		unk_0x3F671607BC1804B5(iLocal_102[5], "piDrugCult[5]");
		uLocal_113 = func_91(Local_50, 0);
		unk_0x01DF6D56C47E7482(uLocal_113, 140);
		func_56("DRUG_BLIP_START", -1);
		iLocal_45 = 1;
	}
}

var func_91(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x1D8833C0F155BFE7(uVar0, func_68(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
	unk_0x43F7D508C655CBA3(uVar0, iParam3);
	return uVar0;
}

int func_92()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_103())
		{
			return 0;
		}
	}
	if (func_99())
	{
		return 1;
	}
	if (func_93(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_93(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (func_46(func_80()))
		{
			iVar36 = func_43();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_94(iVar32, &Var0);
					fVar35 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_94(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_95(uParam1, "Abigail1", func_97(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 1:
			func_95(uParam1, "Abigail2", func_97(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 2:
			func_95(uParam1, "Barry1", func_97(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 3:
			func_95(uParam1, "Barry2", func_97(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 4:
			func_95(uParam1, "Barry3", func_97(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 5:
			func_95(uParam1, "Barry3A", func_97(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 6:
			func_95(uParam1, "Barry3C", func_97(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 7:
			func_95(uParam1, "Barry4", func_97(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_96(iParam0), 0, 0);
			break;
		
		case 8:
			func_95(uParam1, "Dreyfuss1", func_97(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 9:
			func_95(uParam1, "Epsilon1", func_97(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 10:
			func_95(uParam1, "Epsilon2", func_97(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 11:
			func_95(uParam1, "Epsilon3", func_97(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 12:
			func_95(uParam1, "Epsilon4", func_97(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 13:
			func_95(uParam1, "Epsilon5", func_97(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 14:
			func_95(uParam1, "Epsilon6", func_97(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 15:
			func_95(uParam1, "Epsilon7", func_97(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 16:
			func_95(uParam1, "Epsilon8", func_97(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 17:
			func_95(uParam1, "Extreme1", func_97(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 18:
			func_95(uParam1, "Extreme2", func_97(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 19:
			func_95(uParam1, "Extreme3", func_97(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 20:
			func_95(uParam1, "Extreme4", func_97(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 21:
			func_95(uParam1, "Fanatic1", func_97(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 22:
			func_95(uParam1, "Fanatic2", func_97(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 23:
			func_95(uParam1, "Fanatic3", func_97(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_96(iParam0), 0, 1);
			break;
		
		case 24:
			func_95(uParam1, "Hao1", func_97(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_96(iParam0), 0, 1);
			break;
		
		case 25:
			func_95(uParam1, "Hunting1", func_97(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 26:
			func_95(uParam1, "Hunting2", func_97(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 27:
			func_95(uParam1, "Josh1", func_97(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 28:
			func_95(uParam1, "Josh2", func_97(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 29:
			func_95(uParam1, "Josh3", func_97(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 30:
			func_95(uParam1, "Josh4", func_97(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 31:
			func_95(uParam1, "Maude1", func_97(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 32:
			func_95(uParam1, "Minute1", func_97(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 33:
			func_95(uParam1, "Minute2", func_97(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 34:
			func_95(uParam1, "Minute3", func_97(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 35:
			func_95(uParam1, "MrsPhilips1", func_97(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 36:
			func_95(uParam1, "MrsPhilips2", func_97(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 37:
			func_95(uParam1, "Nigel1", func_97(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 38:
			func_95(uParam1, "Nigel1A", func_97(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 39:
			func_95(uParam1, "Nigel1B", func_97(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 40:
			func_95(uParam1, "Nigel1C", func_97(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 41:
			func_95(uParam1, "Nigel1D", func_97(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 42:
			func_95(uParam1, "Nigel2", func_97(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 43:
			func_95(uParam1, "Nigel3", func_97(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 44:
			func_95(uParam1, "Omega1", func_97(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 45:
			func_95(uParam1, "Omega2", func_97(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 46:
			func_95(uParam1, "Paparazzo1", func_97(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 47:
			func_95(uParam1, "Paparazzo2", func_97(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 48:
			func_95(uParam1, "Paparazzo3", func_97(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 49:
			func_95(uParam1, "Paparazzo3A", func_97(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 50:
			func_95(uParam1, "Paparazzo3B", func_97(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 51:
			func_95(uParam1, "Paparazzo4", func_97(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 52:
			func_95(uParam1, "Rampage1", func_97(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 54:
			func_95(uParam1, "Rampage3", func_97(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 55:
			func_95(uParam1, "Rampage4", func_97(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 56:
			func_95(uParam1, "Rampage5", func_97(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 53:
			func_95(uParam1, "Rampage2", func_97(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 57:
			func_95(uParam1, "TheLastOne", func_97(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 58:
			func_95(uParam1, "Tonya1", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 59:
			func_95(uParam1, "Tonya2", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 60:
			func_95(uParam1, "Tonya3", func_97(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 61:
			func_95(uParam1, "Tonya4", func_97(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 62:
			func_95(uParam1, "Tonya5", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_95(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_97(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_98(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_98(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_99()
{
	if (func_102() && !func_103())
	{
		return 1;
	}
	if (func_101() && func_100())
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	return Global_96891 > 0;
}

int func_101()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_102()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_103()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_104()
{
	if (!func_63(5))
	{
		return 1;
	}
	if (func_99())
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_103())
		{
			return 0;
		}
	}
	if (func_93(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if ((Global_97162 == func_52() && unk_0x7BCE01926E77105A()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_108(iParam0);
	unk_0x4F2CE8E787B36129(0);
	unk_0xD50D943D0D4E5EF1(1);
	Global_97159 = 0;
	func_107();
}

void func_107()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0x941F924D5E9C2140(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)), 1);
		}
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	}
}

void func_108(int iParam0)
{
	Global_97162 = iParam0;
}

int func_109(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_52();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_135())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_103())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_28(0))
		{
			return 0;
		}
		if (func_99())
		{
			return 0;
		}
		if (func_134())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_46(func_80()))
		{
			if (func_93(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_133(iParam3))
		{
			return 0;
		}
		if (func_46(func_80()))
		{
			if (func_132(func_80()) == 4 || func_132(func_80()) == 5)
			{
				return 0;
			}
		}
		if (func_46(func_80()))
		{
			if (!func_131(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_130(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xF976C624234A4AA8() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_129())
		{
			return 0;
		}
		if (unk_0x4E6BA6FF244D94A8())
		{
			return 0;
		}
		if (unk_0x7BCE01926E77105A())
		{
			return 0;
		}
		if (!func_120(4))
		{
			return 0;
		}
		if (!func_63(5))
		{
			return 0;
		}
		if (func_119(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x93AF5BB44F9A2E1B(unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD())))
		{
			if ((unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(377.153f, -717.567f, 10.0536f) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(320.9934f, 265.2515f, 82.1221f)) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_119(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_133(30) && !func_119(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_46(func_80()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_118(iVar8))
				{
					if (func_111(iVar4))
					{
						if (!func_110(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var5) < (210f * 210f))
							{
								if (func_80() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_110(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_112(iVar0);
}

int func_112(int iParam0)
{
	return func_113(iParam0, 1);
}

int func_113(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_118(iParam0))
	{
		return 0;
	}
	func_114(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_114(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_115(func_22(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_115(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_117(iParam0, iParam1))
	{
		iVar0 = func_7(iParam1);
		iVar1 = func_5(iParam0);
		iVar2 = (func_5(iParam0) - func_5(iParam1));
		iVar3 = (func_7(iParam0) - func_7(iParam1));
		iVar4 = (func_8(iParam0) - func_8(iParam1));
		iVar5 = (func_11(iParam0) - func_11(iParam1));
		iVar6 = (func_10(iParam0) - func_10(iParam1));
		iVar7 = (func_9(iParam0) - func_9(iParam1));
	}
	else
	{
		iVar0 = func_7(iParam0);
		iVar1 = func_5(iParam1);
		iVar2 = (func_5(iParam1) - func_5(iParam0));
		iVar3 = (func_7(iParam1) - func_7(iParam0));
		iVar4 = (func_8(iParam1) - func_8(iParam0));
		iVar5 = (func_11(iParam1) - func_11(iParam0));
		iVar6 = (func_10(iParam1) - func_10(iParam0));
		iVar7 = (func_9(iParam1) - func_9(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_21(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_116(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_116(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_117(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_118(iParam1) || !func_118(iParam0))
	{
		return 1;
	}
	iVar0 = func_5(iParam0);
	iVar1 = func_5(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_7(iParam0);
	iVar1 = func_7(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_8(iParam0);
	iVar1 = func_8(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_11(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_10(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_9(iParam0);
	iVar1 = func_9(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
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
	iVar0 = func_9(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_10(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_11(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_5(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_7(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_8(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_119(int iParam0, int iParam1)
{
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				iVar0 = func_80();
				if (!func_46(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_128()) || Global_96220) || Global_24446) || func_127()) || func_82(8, -1)) || func_126()) || func_125()) || func_124()) || func_123()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1) || func_128()) || Global_24446) || func_127()) || func_82(8, -1)) || func_124()) || func_126()) || func_125()) || func_123()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_128()) || Global_96220) || Global_24446) || func_127()) || func_82(8, -1)) || func_124()) || func_126()) || func_125()) || func_123()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_128()) || Global_96220) || Global_24446) || func_127()) || func_82(8, -1)) || func_126()) || func_125()) || func_123()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_128() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || func_82(8, -1)) || func_123()) || func_122()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_82(8, -1) || func_126()) || func_125()) || func_122()) || func_121())
						{
							return 0;
						}
						if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
						{
							if ((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_128()) || Global_24446) || func_127()) || func_82(8, -1)) || func_125()) || func_124()) || func_123()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || func_128()) || func_125()) || Global_96220) || Global_24446) || func_127()) || Global_35953) || func_82(8, -1)) || func_124()) || func_122()) || func_123()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_128()) || Global_96220) || Global_24446) || func_127()) || func_82(8, -1)) || func_124()) || func_122()) || func_126()) || func_125()) || func_123())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_121()
{
	return Global_89823.f_1;
}

int func_122()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_123()
{
	if (unk_0x25531002BCF0D968(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return Global_89836.f_291 > 0;
}

bool func_126()
{
	return Global_89836.f_290 > 0;
}

var func_127()
{
	return Global_1315898;
}

int func_128()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_129()
{
	func_79();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_130(int iParam0)
{
	return func_117(func_22(), iParam0);
}

int func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_80();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_132(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_133(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_135())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_134()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0xE634CB9EE7094537(uVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_135()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_136()
{
	if (iLocal_87)
	{
		if (!iLocal_86)
		{
			unk_0xF74C93D9036BCC1E("RE20_FAIL");
			if (unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				func_23(0);
			}
			iLocal_124 = 0;
			while (iLocal_124 < 6)
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_102[iLocal_124]))
				{
					if (unk_0xD361727124133DF3(uLocal_115[iLocal_124]))
					{
						unk_0xA0A65B537B1F11EC(&(uLocal_115[iLocal_124]));
					}
					unk_0xCA4DD92F1F2931F3(&(iLocal_102[iLocal_124]));
				}
				iLocal_124++;
			}
			unk_0xA54C914AEB391F49(1f);
			unk_0xB8265112BB26591B(3, 1);
			if (bLocal_88)
			{
				func_3(18, 7, 0);
			}
			else
			{
				func_3(18, 1, 0);
			}
		}
		unk_0x8473059B7180712A();
	}
	func_137(-1);
	unk_0x883793591E631A3B();
}

void func_137(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_105())
	{
		func_141(iParam0);
		unk_0xAABDA3B6E57B068A(0, 0);
		Global_97164 = unk_0xF976C624234A4AA8();
		func_140(30000);
		StringCopy(&cVar0, func_139(Global_97162, 1), 64);
		if (func_51(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x7D8C98CDE178AB1B(&cVar0, Global_97159, (unk_0xF976C624234A4AA8() - Global_97160), 0);
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xCD27BF29FB9012E2(&Global_97169, 0);
	}
	func_138(&Global_24503);
	Global_97163 = 0;
	func_108(-1);
}

void func_138(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_139(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_140(int iParam0)
{
	Global_35460 = (unk_0xF976C624234A4AA8() + iParam0);
}

void func_141(int iParam0)
{
	func_3(iParam0, 0, func_142(iParam0));
}

int func_142(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

