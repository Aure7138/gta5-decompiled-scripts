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
	int iLocal_45 = 0;
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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76[1] = { 0 };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 16;
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
	var uLocal_269 = 1097859072;
	var uLocal_270 = 1500;
	var uLocal_271 = 45;
	var uLocal_272 = 1103626240;
	var uLocal_273 = 5;
	var uLocal_274[1] = { 0 };
	char* sLocal_276 = NULL;
	char* sLocal_277 = NULL;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282[1] = { 0 };
	var uLocal_284[4] = { 0, 0, 0, 0 };
	struct<9> Local_289 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	struct<3> Local_302 = { 0, 0, 0 } ;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	int iLocal_340 = 0;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	Local_63 = { 500f, 500f, 500f };
	fLocal_329 = -1f;
	iLocal_332 = -1;
	bLocal_336 = true;
	unk_0x3CFCF109465A1DA6("stripperhome");
	unk_0x7944710FF545C60B(1);
	unk_0xA34437D4AD022736(unk_0x0C1D3C552325765B(), 1);
	if (unk_0x2EC83C7ACA23E8A4(75))
	{
		func_288();
	}
	bLocal_337 = ScriptParam_0.f_5;
	if (bLocal_337)
	{
		unk_0x786FDD765D4157F4(32, 0, -1);
		func_283(0, -1, 0);
		unk_0xF2797029E839595C(1);
		unk_0x401559486BCA4D9B(0);
	}
	uLocal_76[0] = ScriptParam_0[0];
	Global_100578.f_1 = uLocal_76[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x7C42343912622BB6();
	if (func_282() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_253(&ScriptParam_0, bVar0) && iLocal_74 != 6) && iLocal_74 != 5) && (iLocal_74 != -1 || !func_252(uLocal_333, 1024)))
	{
		func_244(0);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x2C07692AA3545079(func_243(0, 0));
	unk_0x2C07692AA3545079(func_243(1, 0));
	if (!bVar1)
	{
		iLocal_74 = 2;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_335 > 0)
		{
			func_241();
			iLocal_335 = (iLocal_335 - unk_0xF2DB717A73826179((unk_0x62E2FDDFDA7A731D() * 1000f)));
		}
		switch (iLocal_74)
		{
			case -1:
				func_240();
				break;
			
			case 0:
				func_201(1);
				break;
			
			case 1:
				func_104();
				break;
			
			case 2:
				func_201(0);
				break;
			
			case 3:
				func_86();
				break;
			
			case 4:
				func_36(bLocal_336);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&uLocal_261))
				{
					func_7(&uLocal_261);
				}
				else if (func_1(&uLocal_261, 7.5f))
				{
					func_288();
				}
				break;
		}
	}
}

int func_1(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_2(uParam0);
		return 1;
	}
	return 0;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		iVar2 = unk_0x4B50AAB32FBE0483();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 2);
}

void func_7(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_8(uParam0);
	}
}

void func_8(var uParam0)
{
	func_9(uParam0, 0f);
}

void func_9(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(unk_0x08BA6DD398CA197C(*uParam0, 4)) - fParam1);
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 1);
}

void func_11()
{
	if (!func_252(uLocal_333, 8192))
	{
		if (func_35())
		{
			func_26();
		}
		else
		{
			iLocal_74 = 6;
		}
	}
	if (func_252(uLocal_333, 16384))
	{
		if (func_12())
		{
			iLocal_74 = 6;
		}
	}
}

int func_12()
{
	if (unk_0x912AD5A10E7633F0(uLocal_274[0], 0))
	{
		return 1;
	}
	if (func_252(uLocal_333, 8192))
	{
		unk_0xF674E664795C8CB3(uLocal_274[0], 60, 1);
		if (unk_0x6E07DBF03F3AC258(uLocal_274[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, 0, 1, 1) || func_25(unk_0xA0081090911D13E5(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0xE99F157D6ECE25DA(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0x555D253AB8DC8914(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0x0D2E3F017CBCB8A8(uLocal_284[0]))
			{
				if (unk_0xD369B57993C85A50(uLocal_284[0]))
				{
					func_13(1, 1, 0);
					unk_0x2D5A415AD869CB5F(false, 0, 3000, 1, 0, 0);
					unk_0x50C86ABC13A071F8(uLocal_284[0], 1);
				}
			}
			unk_0x4E82D83B086B5C93(&(uLocal_274[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xFDEC0B505BCB00C0(unk_0x4A0FB18E33FE5805(), true, 0);
	}
	unk_0xD88C3482EA86B6F5(1);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x627D428B266FEDCA(1);
		unk_0x943A052E20E9C2CE(1);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&Global_25429, iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_25429, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x864EAABAADAAA1E3(unk_0x0C1D3C552325765B());
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 1);
		func_24(1);
		unk_0x3437639A811EF082();
		unk_0xB5B3F40B585C8D07();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xC6CB0C1523C73C77())
			{
				unk_0x588D9B1F6CF36C3C(0);
			}
			if (!func_23())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_55822 = 1;
		Global_68128 = 1;
		Global_69615 = 1;
	}
	else
	{
		func_24(0);
		unk_0x2D1364CCF7771349();
		Global_55822 = 0;
		if (bParam1)
		{
			unk_0xF100005CC9E0A614();
		}
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 0);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_20(unk_0x0C1D3C552325765B())) && !func_17(unk_0x0C1D3C552325765B(), 0)) && !func_16())
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_20(unk_0x0C1D3C552325765B()))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		}
		Global_69615 = 0;
	}
}

bool func_16()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
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
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_22(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && uParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_23()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 13);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 13);
	}
}

float func_25(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	return unk_0x999A157665D69393(Var0, Param1, iParam4);
}

void func_26()
{
	var uVar0;
	
	func_29();
	if (unk_0xE99F157D6ECE25DA(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0x555D253AB8DC8914(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_27(&uLocal_333, 16384);
	unk_0xBB21B5C3111E5F85(uLocal_274[0], 0);
	unk_0x705E4255B39314A7(uLocal_274[0], 104, 1);
	unk_0x95C55738CAE00A20(&uVar0);
	unk_0x1429584A1E80336C(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0x1429584A1E80336C(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0xC9567EA69F3CC4C2(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x70B222EEA46C37FA(uVar0);
	unk_0x3998B29E786DFD96(uLocal_274[0], uVar0);
	unk_0x7DFD14B8B873D6B5(&uVar0);
	func_27(&uLocal_333, 8192);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()
{
	if (!unk_0x460E7746DAC01E79(uLocal_274[0]) && func_34(1, 0, 1))
	{
		func_30(0, 0, 0);
		uLocal_284[0] = unk_0xF442D2875C1C4699("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0x2D5A415AD869CB5F(true, 0, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	unk_0xFDEC0B505BCB00C0(unk_0x4A0FB18E33FE5805(), false, iParam0);
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0xBD04C1F04667E915(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 15f);
	}
	unk_0xD88C3482EA86B6F5(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0);
	unk_0x627D428B266FEDCA(0);
	unk_0x943A052E20E9C2CE(0);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (Global_14604)
	{
		func_32(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_23())
	{
		Global_14443.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_34(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x575662C16C9FE750())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
		iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		if (bParam0)
		{
			if (unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (unk_0x8FD32443A080784B(iVar0, -1, 0) != unk_0xA0081090911D13E5())
				{
					return 0;
				}
			}
		}
		if (!unk_0x912AD5A10E7633F0(iVar0, 0))
		{
			if (unk_0xC00FEF88F7C3E2FB(iVar0) < 0.95f || unk_0xC00FEF88F7C3E2FB(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!unk_0x42322F841075FF38(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

int func_35()
{
	if ((uLocal_76[0] == 8 || uLocal_76[0] == 9) || func_25(uLocal_274[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_36(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	func_62();
	if (bParam0)
	{
		Var0 = { Local_308 };
	}
	else
	{
		func_61(&Var0, &uVar3, 0);
	}
	func_58(Var0);
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (unk_0x39FEE545B315414E(uLocal_274[0], 0))
		{
			iVar4 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (unk_0xD3FACCDA4D66AEAD(iVar4) && !unk_0x912AD5A10E7633F0(iVar4, 0))
			{
				if (iLocal_338)
				{
					if (func_57(iVar4, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_56();
						unk_0x8474D2383AC8AF53(uLocal_274[0], 0, 16777216);
						func_37();
					}
				}
				else if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Var0, 4f, 4f, 2f, 1, 1, 2))
				{
					iLocal_338 = 1;
				}
			}
		}
	}
}

void func_37()
{
	func_55();
	func_48(295, 0, 0);
	func_38(0);
	func_288();
}

void func_38(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	
	if (!func_45())
	{
		return;
	}
	if (!iLocal_69)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_43(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		unk_0xD5B7442BE4C49CDB(131, func_42(), 0f);
		unk_0xD5B7442BE4C49CDB(108, func_41(), 0f);
		unk_0xD5B7442BE4C49CDB(102, func_40(), 0f);
		unk_0xD5B7442BE4C49CDB(8, func_39(), 0f);
	}
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
}

int func_39()
{
	return iLocal_67;
}

int func_40()
{
	return iLocal_68;
}

int func_41()
{
	return iLocal_66;
}

int func_42()
{
	return 0;
}

int func_43(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x98C339BD475B043D())
	{
	}
	if ((!unk_0x6951A73024DC7FBB() && (unk_0xF6AED1327F669066() || !unk_0xA7F2473F08003D66())) && unk_0x5E3DBC95ECA07B6C())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x46E4D0D0168391A1())
			{
				Var69 = { func_44(unk_0x0C1D3C552325765B()) };
				if (unk_0xC1B41A655437AD93(&Var69))
				{
					if (unk_0x0ADE2D0C6811DC70(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0xA86CA03D9749EEB3() && Global_2450148.f_3)
			{
				unk_0x01EBE2A4D8AB7C0D(&Var0, &(Global_1738687.f_10));
			}
			else
			{
				unk_0x1D73017C0F6AC577(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x6951A73024DC7FBB())
	{
	}
	if (!unk_0xF6AED1327F669066())
	{
	}
	if (unk_0xA7F2473F08003D66())
	{
	}
	if (!unk_0x5E3DBC95ECA07B6C())
	{
	}
	return 0;
}

struct<13> func_44(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_45()
{
	if ((unk_0x98C339BD475B043D() && unk_0x446ED6C2B9B18A21()) && func_46())
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	if (func_47())
	{
		return 0;
	}
	if (unk_0x187CC7D5F9B002AA() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_47()
{
	return Global_2452243;
}

void func_48(int iParam0, int iParam1, int iParam2)
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
		func_54((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101553.f_9049[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101553.f_9049[iParam0 /*12*/].f_6 == 11 || Global_101553.f_9049[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101553.f_9049[iParam0 /*12*/].f_5 = 1;
		Global_101553.f_9049[iParam0 /*12*/].f_10 = iParam1;
		Global_101553.f_9049[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_49();
	}
}

void func_49()
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
	Global_101289 = 0;
	Global_101290 = 0;
	Global_101291 = 0;
	Global_101292 = 0;
	Global_101293 = 0;
	Global_101294 = 0;
	Global_101295 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101553.f_9049.f_3853;
	Global_101553.f_9049.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101553.f_9049[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101553.f_9049[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101289++;
					fVar1 = (fVar1 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101290++;
					fVar2 = (fVar2 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101291++;
					fVar3 = (fVar3 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101292++;
					fVar4 = (fVar4 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101293++;
					fVar5 = (fVar5 + (Global_101553.f_9049[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101294++;
					fVar6 = (fVar6 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101295++;
					fVar7 = (fVar7 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101272 > 0)
	{
		if (Global_101289 == Global_101272)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101273 > 0)
	{
		if (Global_101290 == Global_101273)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101274 > 0)
	{
		if (Global_101291 == Global_101274)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101275 > 0)
	{
		if (Global_101292 == Global_101275)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101276 > 0)
	{
		if (((Global_101293 == Global_101276 || (Global_101276 * 10 / Global_101293) < 41) || Global_101293 > Global_101279) || Global_101293 == Global_101279)
		{
			if (!unk_0x08BA6DD398CA197C(Global_101553.f_9049.f_3856, 14))
			{
				if (Global_101293 == Global_101276)
				{
					unk_0xE8AB1AD861EA93C1(joaat("num_rndevents_completed"), Global_101276, 0);
					unk_0x88B0F0DC270164B7(&(Global_101553.f_9049.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101277 > 0)
	{
		if (Global_101294 == Global_101277)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101278 > 0)
	{
		if (Global_101295 == Global_101278)
		{
			fVar7 = 5f;
		}
	}
	Global_101553.f_9049.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101293 > Global_101279 || Global_101293 == Global_101279)
	{
		iVar9 = Global_101279;
	}
	else
	{
		iVar9 = Global_101293;
	}
	unk_0x10CE8769EE2626C7(joaat("num_missions_completed"), Global_101289, 1);
	unk_0x10CE8769EE2626C7(joaat("num_missions_available"), Global_101272, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_completed"), Global_101290, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_available"), Global_101273, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_completed"), Global_101291, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_available"), Global_101274, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_completed"), Global_101292, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_available"), Global_101275, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_available"), Global_101279, 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_completed"), (Global_101295 + Global_101294), 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_available"), (Global_101278 + Global_101277), 1);
	Global_101296 = (Global_101289 * 100 / Global_101272);
	Global_101298 = ((Global_101291 + Global_101290) * 100 / (Global_101274 + Global_101273));
	Global_101297 = ((Global_101292 + iVar9) * 100 / (Global_101275 + Global_101279));
	Global_101299 = ((Global_101294 + Global_101295) * 100 / (Global_101277 + Global_101278));
	unk_0xA88E0F84F0E0949F(joaat("total_progress_made"), Global_101553.f_9049.f_3853, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_story_missions"), Global_101296, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_ambient_missions"), Global_101297, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_oddjobs"), Global_101298, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853))
	{
		func_53(13, unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853));
	}
	if (!unk_0x426131BF5A0B35D2())
	{
		if (!Global_69617)
		{
			if (func_52() == 2 == 0 && !unk_0xA86CA03D9749EEB3())
			{
				if (unk_0x187CC7D5F9B002AA())
				{
					Global_101287 = 0;
				}
				if (!Global_55816)
				{
					func_50();
				}
			}
		}
	}
}

int func_50()
{
	if (func_51(0))
	{
		return 0;
	}
	if (Global_91445.f_8)
	{
		if (Global_91445.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91445.f_10 > 1)
	{
		return 0;
	}
	Global_91445.f_10++;
	return 1;
}

bool func_51(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

int func_52()
{
	return Global_25185;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xC7B7B86D55D4C17E(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC77B359C84812EFE(iParam0, iParam1);
	}
	return 0;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		uVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_55()
{
	iLocal_68++;
	iLocal_69 = 1;
}

void func_56()
{
	if (unk_0xD3FACCDA4D66AEAD(uLocal_274[0]) && !unk_0x912AD5A10E7633F0(uLocal_274[0], 0))
	{
		unk_0xB0608983A83FFE10(uLocal_274[0], 1);
		if (unk_0x5D586EFF7D308A80(uLocal_274[0]))
		{
			unk_0x988206841442D7CE(uLocal_274[0]);
		}
	}
}

int func_57(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xABC36CFE4F3421A0(0, 71, 1);
	unk_0xABC36CFE4F3421A0(0, 72, 1);
	unk_0xABC36CFE4F3421A0(0, 76, 1);
	unk_0xABC36CFE4F3421A0(0, 73, 1);
	unk_0xABC36CFE4F3421A0(0, 59, 1);
	unk_0xABC36CFE4F3421A0(0, 60, 1);
	if (bParam5)
	{
		unk_0xABC36CFE4F3421A0(0, 75, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 80, 1);
	if (!bParam6)
	{
		unk_0xABC36CFE4F3421A0(0, 69, 1);
		unk_0xABC36CFE4F3421A0(0, 70, 1);
		unk_0xABC36CFE4F3421A0(0, 68, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 74, 1);
	unk_0xABC36CFE4F3421A0(0, 86, 1);
	unk_0xABC36CFE4F3421A0(0, 81, 1);
	unk_0xABC36CFE4F3421A0(0, 82, 1);
	unk_0xABC36CFE4F3421A0(0, 138, 1);
	unk_0xABC36CFE4F3421A0(0, 136, 1);
	unk_0xABC36CFE4F3421A0(0, 114, 1);
	unk_0xABC36CFE4F3421A0(0, 107, 1);
	unk_0xABC36CFE4F3421A0(0, 110, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 87, 1);
	unk_0xABC36CFE4F3421A0(0, 88, 1);
	unk_0xABC36CFE4F3421A0(0, 113, 1);
	unk_0xABC36CFE4F3421A0(0, 115, 1);
	unk_0xABC36CFE4F3421A0(0, 116, 1);
	unk_0xABC36CFE4F3421A0(0, 117, 1);
	unk_0xABC36CFE4F3421A0(0, 118, 1);
	unk_0xABC36CFE4F3421A0(0, 119, 1);
	unk_0xABC36CFE4F3421A0(0, 131, 1);
	unk_0xABC36CFE4F3421A0(0, 132, 1);
	unk_0xABC36CFE4F3421A0(0, 123, 1);
	unk_0xABC36CFE4F3421A0(0, 126, 1);
	unk_0xABC36CFE4F3421A0(0, 129, 1);
	unk_0xABC36CFE4F3421A0(0, 130, 1);
	unk_0xABC36CFE4F3421A0(0, 133, 1);
	unk_0xABC36CFE4F3421A0(0, 134, 1);
	unk_0xB18D6B85BBC9224A();
	if ((unk_0xDF658EB6CA91DFBC() - Global_29) > 500)
	{
		unk_0xAAE246A3BA63EEF6(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xDF658EB6CA91DFBC();
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0x7466327978A6A24C(unk_0x39053CCA2C4B5DA1(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_58(struct<3> Param0)
{
	int iVar0;
	
	if (unk_0x16833EFAA58E63DB(uLocal_281))
	{
		unk_0x0B57C567D698C373(&uLocal_281);
	}
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		return;
	}
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	if (unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0x912AD5A10E7633F0(iVar0, 0))
	{
		if (unk_0x39FEE545B315414E(uLocal_274[0], 0))
		{
			if (unk_0x1FD87E888EB4FC00(uLocal_274[0], unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0))
			{
				if (!unk_0x16833EFAA58E63DB(uLocal_280))
				{
					uLocal_280 = func_59(Param0, 1);
				}
			}
		}
	}
}

var func_59(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x52CE8C31DD5898E7(Param0);
	unk_0xC40118229E47A3D7(uVar0, func_60(unk_0xA86CA03D9749EEB3(), 1f, 1f));
	unk_0x71E206F83114C3D2(uVar0, iParam3);
	return uVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(var uParam0, var uParam1, bool bParam2)
{
	Local_317 = { Local_317 };
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
	}
}

void func_62()
{
	if (unk_0xEB361B4BD195A4D3(uLocal_274[0]))
	{
		if (!unk_0xD3FACCDA4D66AEAD(uLocal_274[0]))
		{
		}
		else if (unk_0x912AD5A10E7633F0(uLocal_274[0], 0))
		{
		}
		func_63(0);
	}
}

void func_63(int iParam0)
{
	if ((uLocal_76[0] > -1 && uLocal_76[0] < 10) && iParam0 != 2)
	{
		func_84(uLocal_76[0], (func_85(uLocal_76[0]) / 2));
	}
	func_82();
	switch (iParam0)
	{
		case 0:
			func_80("SCLUB_HOME_D", uLocal_76[0]);
			func_84(uLocal_76[0], 0);
			func_69(uLocal_76[0], 1);
			iLocal_74 = 6;
			break;
		
		case 1:
			unk_0x715FC4B638D9A515();
			func_64("SCLUB_HOME_A", uLocal_76[0], 0);
			iLocal_74 = 5;
			break;
		
		case 2:
			iLocal_74 = 5;
			break;
		
		case 4:
			func_80("SCLUB_HOME_D3", uLocal_76[0]);
			iLocal_74 = 6;
			break;
		
		case 3:
			if (func_25(uLocal_274[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_74 = 5;
			}
			else
			{
				iLocal_74 = 6;
			}
			break;
	}
}

void func_64(char* sParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_68(iParam1)}, 6);
	if (!func_67(sParam0, &uVar0))
	{
		if (!bParam2)
		{
			func_66(sParam0, &uVar0, -1);
		}
		else
		{
			func_65(sParam0, &uVar0);
		}
	}
}

void func_65(var uParam0, var uParam1)
{
	unk_0x55B5433015A91E85(uParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

void func_66(var uParam0, var uParam1, int iParam2)
{
	unk_0x55B5433015A91E85(uParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam2);
}

bool func_67(char* sParam0, var uParam1)
{
	unk_0xA277242E6FB38513(sParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	return unk_0x52387FFD63E8D8FC(0);
}

struct<4> func_68(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_69(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_70(&(Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_70(var uParam0, int iParam1)
{
	func_71(uParam0, iParam1);
}

void func_71(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_72()
{
	int iVar0;
	
	iVar0 = func_74();
	switch (iVar0)
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
		
		default:
			switch (func_73(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_73(int iParam0)
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

int func_74()
{
	func_75();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_75()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_79(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_78(unk_0xA0081090911D13E5());
			if (func_77(iVar0) && (!func_76(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_77(Global_101553.f_1991.f_539.f_3549))
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

bool func_76(int iParam0)
{
	return Global_35775 == iParam0;
}

bool func_77(int iParam0)
{
	return iParam0 < 3;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_79(int iParam0)
{
	if (func_77(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_80(char* sParam0, int iParam1)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_68(iParam1)}, 6);
	func_81(sParam0, &uVar0, 7500, 1);
}

void func_81(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x43ADD6E60AA2507B(sParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	unk_0xAA85370CFA6D5384(iParam2, 1);
}

void func_82()
{
	if (unk_0x16833EFAA58E63DB(uLocal_281))
	{
		unk_0x0B57C567D698C373(&uLocal_281);
	}
	if (unk_0x16833EFAA58E63DB(uLocal_280))
	{
		unk_0x0B57C567D698C373(&uLocal_280);
	}
	func_83();
}

void func_83()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_282[iVar0]))
		{
			unk_0x0B57C567D698C373(&(uLocal_282[iVar0]));
		}
		iVar0++;
	}
}

void func_84(int iParam0, int iParam1)
{
	Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_85(int iParam0)
{
	return Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/];
}

void func_86()
{
	func_62();
	func_82();
	switch (iLocal_80)
	{
		case 0:
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0x39FEE545B315414E(uLocal_274[0], 0))
				{
					if (!func_103("SCLUB_SECLUDED"))
					{
						func_102("SCLUB_SECLUDED");
					}
					if (func_101() && unk_0x39053CCA2C4B5DA1(unk_0xA0081090911D13E5()) == 0f)
					{
						unk_0x94724F7C938EBE34(1);
						unk_0xA9DC3948106CC3E4(func_96(uLocal_274[0], 0, 0));
						iLocal_80 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_89())
			{
				iLocal_80 = 2;
			}
			break;
		
		case 2:
			if (unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), 242628503) != 1)
			{
				func_241();
				if (unk_0x7C42343912622BB6() > 20 || unk_0x7C42343912622BB6() < 4)
				{
					bLocal_336 = false;
				}
				unk_0x0AFFDD3BC4F170F9(iLocal_45);
				func_87(bLocal_336);
				iLocal_74 = 4;
			}
			break;
	}
}

void func_87(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_80("SCLUB_HOME_GO", uLocal_76[0]);
			}
			else
			{
				func_88("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_88("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_88(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x43ADD6E60AA2507B(sParam0);
	unk_0xAA85370CFA6D5384(iParam1, 1);
}

int func_89()
{
	if (unk_0xAD21C77209FD2024(func_96(uLocal_274[0], 0, 0)))
	{
		func_90(uLocal_274[0], 0, 1, -1, 1);
		func_90(unk_0xA0081090911D13E5(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_90(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0xF8DB47D339B8B953(iParam0, 1);
	if (!unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		return;
	}
	iLocal_45 = unk_0xFA461E82A81FEF04();
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) && func_95(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0x0AFFDD3BC4F170F9(4);
		}
	}
	bVar1 = func_94(iVar0);
	sVar2 = func_96(iParam0, 0, 0);
	if (!unk_0xAD21C77209FD2024(sVar2))
	{
		unk_0xA9DC3948106CC3E4(sVar2);
	}
	else
	{
		unk_0x95C55738CAE00A20(&uVar3);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_91(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_91(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_91(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_91(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_91(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x70B222EEA46C37FA(uVar3);
		unk_0x3998B29E786DFD96(iParam0, uVar3);
		if (bParam4)
		{
			unk_0x7DFD14B8B873D6B5(&uVar3);
		}
	}
}

char* func_91(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_93(18);
					}
					else
					{
						sVar0 = func_93(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_93(8);
				}
				else
				{
					sVar0 = func_93(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_92(18);
				}
				else
				{
					sVar0 = func_92(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_92(8);
			}
			else
			{
				sVar0 = func_92(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_93(19);
					}
					else
					{
						sVar0 = func_93(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_93(9);
				}
				else
				{
					sVar0 = func_93(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_92(19);
				}
				else
				{
					sVar0 = func_92(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_92(9);
			}
			else
			{
				sVar0 = func_92(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_93(20);
					}
					else
					{
						sVar0 = func_93(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_93(10);
				}
				else
				{
					sVar0 = func_93(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_92(20);
				}
				else
				{
					sVar0 = func_92(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_92(10);
			}
			else
			{
				sVar0 = func_92(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_93(21);
					}
					else
					{
						sVar0 = func_93(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_93(11);
				}
				else
				{
					sVar0 = func_93(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_92(21);
				}
				else
				{
					sVar0 = func_92(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_92(11);
			}
			else
			{
				sVar0 = func_92(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_93(22);
					}
					else
					{
						sVar0 = func_93(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_93(12);
				}
				else
				{
					sVar0 = func_93(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_92(22);
				}
				else
				{
					sVar0 = func_92(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_92(12);
			}
			else
			{
				sVar0 = func_92(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_93(3);
				}
				else
				{
					sVar0 = func_93(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_92(3);
			}
			else
			{
				sVar0 = func_92(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_92(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_93(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_94(int iParam0)
{
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		switch (unk_0xCF63F083BB8317E3(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_95(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x819C3E64C255229B(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x819C3E64C255229B(1) == 4;
		}
	}
	return bVar0;
}

var func_96(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		iVar0 = unk_0xF8DB47D339B8B953(iParam0, 1);
		if (unk_0x1F1B2B6E500380C5(iVar0, 0))
		{
			if (func_94(iVar0))
			{
				if ((!func_95(0, 1) || iParam2) && !bParam1)
				{
					return func_100();
				}
				else
				{
					return func_99();
				}
			}
		}
	}
	if ((!func_95(0, 1) || iParam2) && !bParam1)
	{
		return func_98();
	}
	return func_97();
}

char* func_97()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_98()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_99()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_100()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	var uVar10;
	struct<3> Var11;
	float fVar14;
	int iVar15;
	
	fVar6 = 25f;
	func_61(&Var7, &uVar10, 0);
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iVar2 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		}
		Var3 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
		if (unk_0x00B119AD16AB45EB(Var3, &Var11, 1077936128, 0))
		{
			fVar14 = unk_0x2A488C176D52CCA5(Var3, Var11);
			if (fVar14 <= 10f)
			{
				return 0;
			}
		}
		if (unk_0x2A488C176D52CCA5(Var3, Local_308) < 20f || unk_0x2A488C176D52CCA5(Var3, Var7) < 20f)
		{
			return 0;
		}
		if (unk_0xC1E09F9E834BCD2A(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x0F156AC6B7986893(Var3, fVar6, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (unk_0x25138A378B1DA64B(iVar0, unk_0xA0081090911D13E5(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0x3F2B9B4503D513FA(Var3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0x1F1B2B6E500380C5(iVar1, 0))
					{
						iVar0 = unk_0x8FD32443A080784B(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar15 = unk_0x16A396814EC162D8(unk_0xA0081090911D13E5());
		if (!iVar15 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_102(char* sParam0)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

bool func_103(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_104()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_199(3000))
		{
			unk_0xF215E3B07B7990BC(1000);
			iLocal_75 = 12;
		}
	}
	if (!bLocal_71 && iLocal_75 >= 5)
	{
		iVar0 = unk_0xE2EB073861D474CB();
		if (unk_0x1F1B2B6E500380C5(iVar0, 0) && !unk_0x912AD5A10E7633F0(iVar0, 0))
		{
			if (unk_0x705BC1BB91F530B5(iVar0) == joaat("blimp2"))
			{
				bLocal_71 = false;
			}
			else if (unk_0x29626AAD56D23B62(unk_0xE2EB073861D474CB()) && uLocal_76[0] == 5)
			{
				bLocal_71 = func_196(&uLocal_70, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_195(unk_0xE2EB073861D474CB()))
			{
				bLocal_71 = func_196(&uLocal_70, Local_323, 1, fLocal_327);
			}
			else
			{
				bLocal_71 = func_196(&uLocal_70, Local_308, 1, fLocal_327);
			}
		}
	}
	if (iLocal_75 > 0 && iLocal_75 < 13)
	{
		unk_0xB477A2D8CA963C52();
	}
	switch (iLocal_75)
	{
		case 0:
			unk_0x94724F7C938EBE34(1);
			unk_0x715FC4B638D9A515();
			func_82();
			unk_0xDD9B91529459212C("TIME_LAPSE", 0, -1);
			func_30(56, 1, 0);
			if (!func_252(uLocal_333, 131072))
			{
				func_27(&uLocal_333, 131072);
			}
			if (!func_252(uLocal_333, 256))
			{
				func_194();
				func_27(&uLocal_333, 256);
			}
			if (!func_252(uLocal_333, 32768))
			{
				unk_0xA9DC3948106CC3E4(func_193());
				func_27(&uLocal_333, 32768);
			}
			if (!func_252(uLocal_333, 256))
			{
				unk_0xA9DC3948106CC3E4(func_192());
				func_27(&uLocal_333, 256);
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				iLocal_340 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				func_191(unk_0xA0081090911D13E5(), iLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_56();
				func_189(unk_0xA0081090911D13E5(), Local_302);
				func_189(uLocal_274[0], Local_305);
				iLocal_75 = 2;
			}
			func_187();
			break;
		
		case 1:
			if (!unk_0x912AD5A10E7633F0(iLocal_340, 0))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iLocal_340, 1), Local_308) < 2f)
				{
					func_56();
					func_189(unk_0xA0081090911D13E5(), Local_302);
					func_189(uLocal_274[0], Local_305);
					unk_0x2E1E57681BD2050A();
					iLocal_75 = 2;
				}
				else if (unk_0xDF658EB6CA91DFBC() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0xD369B57993C85A50(uLocal_284[0]))
			{
				unk_0x07553DAC96600443(uLocal_284[0], 1);
				unk_0x2D5A415AD869CB5F(true, 0, 3000, 1, 0, 0);
				if (!unk_0x912AD5A10E7633F0(iLocal_340, 0))
				{
					if (unk_0x705BC1BB91F530B5(iLocal_340) == joaat("blimp2"))
					{
						unk_0xEDBE0CD7C81FA37E(iLocal_340, 0, 0);
					}
				}
				func_8(&uLocal_255);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			if (func_186(&uLocal_255) > 1f)
			{
				unk_0xF13B03E3D574D5F1(uLocal_284[1], uLocal_284[0], 6000, 1, 1);
				func_185(&Local_289, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x7C42343912622BB6();
				iLocal_330 = iVar1 + 8;
				if (iLocal_330 > 23)
				{
					iLocal_330 = (iLocal_330 - 24);
				}
				Local_289.f_7 = iVar1;
				Local_289.f_8 = iLocal_330;
				func_2(&uLocal_255);
				iLocal_75 = 4;
			}
			break;
		
		case 4:
			if (!unk_0xE006B634C7488210(uLocal_284[1]) && unk_0xD369B57993C85A50(uLocal_284[1]))
			{
				if (!func_252(uLocal_331, 512))
				{
					if (unk_0xD3FACCDA4D66AEAD(iLocal_340) && !unk_0x912AD5A10E7633F0(iLocal_340, 0))
					{
						unk_0x4877CFC15DCA5DED(iLocal_340, 1);
					}
					func_182(unk_0xA0081090911D13E5(), func_184());
					unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), func_181());
					func_163();
					func_27(&uLocal_331, 512);
				}
				else if (!func_252(uLocal_331, 2048))
				{
					if (unk_0x912AD5A10E7633F0(uLocal_274[0], 0))
					{
					}
					if (!func_162() && !unk_0x124290C0A019B083(uLocal_274[0]))
					{
						func_163();
						if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
						{
							unk_0xFC942BCB9A58BF05(unk_0xA0081090911D13E5());
							unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_331, 2048);
						func_8(&uLocal_255);
						sLocal_277 = func_161();
						iLocal_75 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_186(&uLocal_255) > 1f)
			{
				if (func_136(iLocal_330, 0, sLocal_277, "", &Local_289, (func_186(&uLocal_255) * 0.2f), 0))
				{
					if (!func_162())
					{
						if (unk_0xD3FACCDA4D66AEAD(iLocal_340))
						{
							if (unk_0x705BC1BB91F530B5(iLocal_340) != joaat("blimp2"))
							{
								unk_0x0B17BC5D018E224B(Local_305, 20f, 1, 0, 0, 0);
							}
						}
						else
						{
							unk_0x0B17BC5D018E224B(Local_305, 20f, 1, 0, 0, 0);
						}
						if (unk_0xD3FACCDA4D66AEAD(uLocal_274[0]))
						{
							unk_0xEDBE0CD7C81FA37E(uLocal_274[0], 0, 0);
						}
						unk_0xCC99FC1ABFE3883F(unk_0xA0081090911D13E5(), 0);
						func_8(&uLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
			if (func_186(&uLocal_255) > 1.5f)
			{
				if (bLocal_71)
				{
					func_134(&uLocal_70);
				}
				func_8(&uLocal_255);
				iLocal_75 = 7;
			}
			break;
		
		case 7:
			if (!unk_0xD369B57993C85A50(uLocal_284[2]))
			{
				unk_0xF100005CC9E0A614();
				unk_0x2C9B6886E7A1F87A(1);
				unk_0xE0CE22BA0F7E91BE(1);
				unk_0xF13B03E3D574D5F1(uLocal_284[2], uLocal_284[1], 6000, 1, 1);
				func_8(&uLocal_255);
				iLocal_75 = 8;
			}
			break;
		
		case 8:
			if (!func_252(uLocal_333, 262144))
			{
				if (func_186(&uLocal_255) >= 1.25f)
				{
					func_133();
				}
			}
			if (func_186(&uLocal_255) > 6f)
			{
				unk_0x07553DAC96600443(uLocal_284[3], 1);
				if (!unk_0x912AD5A10E7633F0(iLocal_340, 0))
				{
					if (unk_0x705BC1BB91F530B5(iLocal_340) == joaat("blimp2"))
					{
						unk_0xEDBE0CD7C81FA37E(iLocal_340, 1, 0);
					}
					unk_0x7B17650F15A8876D(iLocal_340, 1, 1);
					unk_0xA0BCF2878D04DC73(iLocal_340, 1000f);
					unk_0xFE9791BE61B48751(iLocal_340, 1000f);
					unk_0xEEE264130F2EA9E2(iLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 10;
			}
			break;
		
		case 10:
			if (func_186(&uLocal_255) > 2f)
			{
				unk_0xD2C0F2FD77D871FA(0, 0, 3, 0);
				iLocal_75 = 13;
			}
			break;
		
		case 12:
			if (unk_0x2C22E7D1C80A53EF() && !unk_0x44F90FBF2C1E8021())
			{
				if (!func_252(uLocal_333, 262144))
				{
					unk_0xBDD9262D515C03B5(unk_0x0C1D3C552325765B(), Local_314, fLocal_326, 0, 1, 1);
					func_133();
				}
				if (!unk_0x912AD5A10E7633F0(iLocal_340, 0))
				{
					if (unk_0x705BC1BB91F530B5(iLocal_340) == joaat("blimp2"))
					{
						unk_0xEDBE0CD7C81FA37E(iLocal_340, 1, 0);
					}
				}
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
				if (!unk_0x912AD5A10E7633F0(iLocal_340, 0))
				{
					unk_0x7B17650F15A8876D(iLocal_340, 1, 1);
					unk_0xA0BCF2878D04DC73(iLocal_340, 1000f);
					unk_0xFE9791BE61B48751(iLocal_340, 1000f);
					unk_0xEEE264130F2EA9E2(iLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x44F90FBF2C1E8021() && func_186(&uLocal_255) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0xA082D4AC00BC651A(unk_0xA0081090911D13E5(), unk_0xF0BA9B123B880A7E(unk_0xA0081090911D13E5()));
				unk_0x9574A5748069B1DF(unk_0x0C1D3C552325765B(), 30, 1);
				if (unk_0x19AF839CB6D32B39(unk_0xA0081090911D13E5(), func_79(0)))
				{
					func_132();
				}
				unk_0x1757D2CC022D31AD(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0x912AD5A10E7633F0(iLocal_340, 0))
				{
					unk_0x7B17650F15A8876D(iLocal_340, 1, 1);
					if (unk_0x705BC1BB91F530B5(iLocal_340) != joaat("blimp2"))
					{
						unk_0x27327EB62D93CDBA(iLocal_340, Local_308, 1, 0, 0, 1);
						unk_0x10BB9EA2ADBCF0F3(iLocal_340, fLocal_327);
						if (unk_0x29626AAD56D23B62(iLocal_340) && uLocal_76[0] == 5)
						{
							unk_0x27327EB62D93CDBA(iLocal_340, -865f, 516.3f, 90f, 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(iLocal_340, 15f);
						}
						else if (func_195(iLocal_340))
						{
							unk_0x27327EB62D93CDBA(iLocal_340, Local_323, 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(iLocal_340, fLocal_328);
						}
						unk_0x74207974B5483203(iLocal_340);
					}
				}
				if (!unk_0x2C22E7D1C80A53EF())
				{
					func_185(&Local_289, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0x7B02B29C32E842C2(8, 0, 0);
					func_130(unk_0xBBDA792448DB5A89(8));
					unk_0xA0303A6B8C99DD6A(2000);
					unk_0x8BDD755F07063522(0);
					unk_0x2A7D387AD73F1D15(0, 1065353216);
					func_185(&Local_289, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0xD3FACCDA4D66AEAD(uLocal_274[0]))
				{
					unk_0x4E82D83B086B5C93(&(uLocal_274[0]));
				}
				if (!func_129(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
					{
						func_64("SCLUB_PHON_HELP_ALT", uLocal_76[0], 0);
					}
					else
					{
						func_64("SCLUB_PHON_HELP", uLocal_76[0], 0);
					}
					func_115(uLocal_76[0], 1, -1);
					unk_0x4EDE34FBADD967A6(4000);
				}
				func_113(uLocal_76[0]);
				iVar2 = func_112(uLocal_76[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_111(uLocal_76[0]);
					iVar4 = func_110(iVar2);
					func_105(-384575792, iVar3, iVar4, 3, func_109(), func_108(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_37();
			}
			break;
	}
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_51(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (unk_0x08BA6DD398CA197C(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_101553.f_6543.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_107(iParam3);
		Var0.f_4 = (unk_0xDF658EB6CA91DFBC() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0x09C86C0C5CA26B1E(&(Var0.f_1), 0);
		Global_101553.f_6543.f_651[Global_101553.f_6543.f_764 /*14*/] = { Var0 };
		Global_101553.f_6543.f_764++;
		func_106(0);
		func_106(1);
		func_106(2);
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_77(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_6543.f_136)
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_6543[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101553.f_6543[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101553.f_6543[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101553.f_6543.f_764)
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_6543.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101553.f_6543.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101553.f_6543.f_919[iParam0] = iVar1;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_109()
{
	func_75();
	switch (Global_101553.f_1991.f_539.f_3549)
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

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_112(int iParam0)
{
	return Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_113(int iParam0)
{
	if (func_112(iParam0) < 0)
	{
		func_114(iParam0, 0);
	}
	Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_114(int iParam0, int iParam1)
{
	Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_115(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_72();
	}
	if (func_128(iParam2) == 4)
	{
	}
	bVar0 = Global_101553.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0xA86CA03D9749EEB3())
		{
			if (!func_127(func_108(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_127(func_108(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_101553.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_126(iParam0, 0);
			func_123(func_108(iParam0), func_128(iParam2), 1);
			iVar1 = unk_0xB5BF1B58C833F7A9(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x88B0F0DC270164B7(&(Global_2097152[func_122() /*10106*/].f_7120.f_911), iParam0);
					func_119(15, 0);
					break;
			}
			func_118(iVar1);
			func_117(iParam0, iVar1);
			Global_100547.f_15[iParam0] = unk_0xDF658EB6CA91DFBC();
		}
	}
	else if (bVar0)
	{
		func_116(func_108(iParam0), func_128(iParam2));
	}
}

void func_116(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_117(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_100547.f_4[iParam0] = (unk_0xDF658EB6CA91DFBC() + iParam1);
	}
	else
	{
		Global_100547.f_4[iParam0] = (unk_0xDF658EB6CA91DFBC() + unk_0xB5BF1B58C833F7A9(1200000, 2100000));
	}
}

void func_118(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_100547.f_3 = (unk_0xDF658EB6CA91DFBC() + iParam0);
	}
	else
	{
		Global_100547.f_3 = (unk_0xDF658EB6CA91DFBC() + unk_0xB5BF1B58C833F7A9(21600000, 25200000));
	}
}

void func_119(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_121(iParam0, iParam1))
	{
		iVar0 = func_120();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_120()
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

int func_121(int iParam0, var uParam1)
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

int func_122()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_123(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_125();
		if (iParam1 == 4)
		{
			Global_101553.f_32740[iParam0 /*29*/].f_12[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[2] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69617)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_124();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_124();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_124();
			}
		}
	}
}

void func_124()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0x754E61FE98961B39("");
		StringCopy(&cVar16, unk_0xFFC9DE7E93AEAE21(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xFFC9DE7E93AEAE21("CELL_253");
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x754E61FE98961B39("CELL_255");
		unk_0xBDE6EEC5F6BDC060(&(Global_2923[1 /*6*/]));
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 0);
}

void func_125()
{
	if (func_76(14))
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
		Global_14443 = func_74();
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

void func_126(int iParam0, int iParam1)
{
	Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_127(int iParam0, int iParam1)
{
	if (Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_129(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_72();
	}
	return Global_101553.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_130(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_101553.f_16958.f_175[iVar0 /*19*/].f_5)))
		{
			func_131(&(Global_101553.f_16958.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_101553.f_16958.f_362[iVar1 /*3*/])))
		{
			func_131(&(Global_101553.f_16958.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x47D95B6D5DBF6271();
}

void func_131(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		func_9(uParam0, (func_4(uParam0) + fParam1));
	}
}

void func_132()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_88201[iVar0] = Global_88201[iVar0 + 1];
		}
		else
		{
			Global_88201[iVar0] = unk_0xDF658EB6CA91DFBC();
		}
		iVar0++;
	}
}

void func_133()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xAD21C77209FD2024(sLocal_276))
	{
	}
	else
	{
		iVar0 = unk_0xB5BF1B58C833F7A9(0, 50000);
		unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
		unk_0x95C55738CAE00A20(&uVar1);
		unk_0x1429584A1E80336C(0, Local_314, 1f, -1, 0.25f, 0, fLocal_326);
		if (iVar0 < 15000)
		{
			unk_0xC9567EA69F3CC4C2(0, sLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0xC9567EA69F3CC4C2(0, sLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0xC9567EA69F3CC4C2(0, sLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x70B222EEA46C37FA(uVar1);
		unk_0x3998B29E786DFD96(unk_0xA0081090911D13E5(), uVar1);
		unk_0x7DFD14B8B873D6B5(&uVar1);
		func_27(&uLocal_333, 262144);
	}
}

void func_134(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0xD3FACCDA4D66AEAD(uVar0))
	{
		if (!func_135(iVar0))
		{
			unk_0x591413670A1EF437(iVar0, 1, 0);
			unk_0xEDBE0CD7C81FA37E(iVar0, 1, 0);
			unk_0xBB21B5C3111E5F85(iVar0, 0);
		}
	}
}

int func_135(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
		{
			if (!unk_0x601CCD1205C6523F(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_160();
			iVar4 = func_160();
			func_159(&iVar4, iParam0);
			func_158(&iVar4, iParam1);
			func_157(&iVar4, 0);
			if (func_155(*uParam4, iVar4))
			{
				func_150(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_147(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_130((unk_0xBBDA792448DB5A89(uParam4->f_11) / 3600f));
			unk_0xF11974AE5BFDED72(0.6f);
			unk_0xE0CE22BA0F7E91BE(0);
			unk_0x2C9B6886E7A1F87A(0);
			func_146();
			uParam4->f_10 = unk_0x2657E29E0DD8087E();
			unk_0xAB16AADE80707D47(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xC94C39C53546E775("TOD_SHIFT_SCENE");
			func_145();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x3BB8D1C5FAAB25B3(sParam2) != 0)
					{
						unk_0x11BBF139870B5E0F(sParam2, 1f);
					}
					if (unk_0x3BB8D1C5FAAB25B3(sParam3) != 0)
					{
						unk_0xF2F27E81D927CA9E();
						unk_0xE9CD83E3D4F58EB7(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_150(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xE69E781F3FBD3528(func_144(iVar4), func_143(iVar4), func_142(iVar4));
				unk_0x15761381A3072BFA(uParam4->f_10);
				unk_0x29B0EFEB2715365C("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_141(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_150(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xE69E781F3FBD3528(func_144(iVar4), func_143(iVar4), func_142(iVar4));
			if (func_140(iVar4) != unk_0x5EE1E0D1EBF5F7F6())
			{
				unk_0xBDA86BB26600213F(func_140(iVar4), func_139(iVar4), func_137(iVar4));
			}
			func_241();
			unk_0x0062776E9EA8BF87(6);
			break;
	}
	return 0;
}

int func_137(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_138(unk_0x08BA6DD398CA197C(iParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)
{
	return iParam0 & 15;
}

int func_140(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

float func_141(float fParam0, float fParam1, float fParam2)
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

int func_142(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_143(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_144(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x5AF920EE00652664(Global_101553.f_12996[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_146()
{
	int iVar0;
	
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		return 0;
	}
	if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	if (!unk_0x912AD5A10E7633F0(iVar0, 0))
	{
		return 0;
	}
	unk_0x4DA90A8B408EBB18(iVar0, "OFF");
	return 1;
}

void func_147(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_155(iParam0, iParam1))
	{
		iVar0 = func_139(iParam1);
		iVar1 = func_137(iParam0);
		iVar2 = (func_137(iParam0) - func_137(iParam1));
		iVar3 = (func_139(iParam0) - func_139(iParam1));
		iVar4 = (func_140(iParam0) - func_140(iParam1));
		iVar5 = (func_144(iParam0) - func_144(iParam1));
		iVar6 = (func_143(iParam0) - func_143(iParam1));
		iVar7 = (func_142(iParam0) - func_142(iParam1));
	}
	else
	{
		iVar0 = func_139(iParam0);
		iVar1 = func_137(iParam1);
		iVar2 = (func_137(iParam1) - func_137(iParam0));
		iVar3 = (func_139(iParam1) - func_139(iParam0));
		iVar4 = (func_140(iParam1) - func_140(iParam0));
		iVar5 = (func_144(iParam1) - func_144(iParam0));
		iVar6 = (func_143(iParam1) - func_143(iParam0));
		iVar7 = (func_142(iParam1) - func_142(iParam0));
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
		iVar4 = (iVar4 + func_149(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_148(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_148(float fParam0, float fParam1, float fParam2)
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

int func_149(int iParam0, int iParam1)
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

void func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_137(*iParam0);
	iVar1 = func_139(*iParam0);
	iVar2 = func_140(*iParam0);
	iVar3 = func_144(*iParam0);
	iVar4 = func_143(*iParam0);
	iVar5 = func_142(*iParam0);
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
	iVar6 = func_149(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_149(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_151(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_151(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, iParam1);
	func_158(uParam0, iParam2);
	func_159(uParam0, iParam3);
	func_154(uParam0, iParam5);
	func_153(uParam0, iParam4);
	func_152(uParam0, iParam6);
}

void func_152(var uParam0, int iParam1)
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

void func_153(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_149(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_156(iParam1) || !func_156(iParam0))
	{
		return 1;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0)
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
	iVar0 = func_142(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_143(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_144(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_137(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_139(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_149(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_157(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_158(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_159(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

int func_160()
{
	var uVar0;
	
	func_157(&uVar0, unk_0x8A1006B6887A61DE());
	func_158(&uVar0, unk_0x4A29A51562AC24A5());
	func_159(&uVar0, unk_0x7C42343912622BB6());
	func_153(&uVar0, unk_0x5EE1E0D1EBF5F7F6());
	func_154(&uVar0, unk_0x55ED786EB10EA740());
	func_152(&uVar0, unk_0x3258DF33389FB224());
	return uVar0;
}

char* func_161()
{
	char* sVar0;
	
	switch (uLocal_76[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_162()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

void func_163()
{
	if (!unk_0x912AD5A10E7633F0(uLocal_274[0], 0))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_179(&uLocal_81, 1, 0, func_180(uLocal_76[0]), 0, 1);
			func_166("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_164(uLocal_274[0], "SEX_ORAL", 10);
		}
	}
}

void func_164(int iParam0, char* sParam1, int iParam2)
{
	unk_0xD8A7A2C7456E47C9(iParam0, sParam1, func_165(iParam2), 1);
}

int func_165(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_166(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar6[8];
	
	if (func_178())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_177(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_176(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_167(&uLocal_81, cVar6, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_167(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 0;
	return func_168(sParam2, iParam3, 0);
}

int func_168(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x588D9B1F6CF36C3C(0);
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
					func_174();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_173(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_172();
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_125();
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_171())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_23())
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_170();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_169();
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
		func_174();
	}
	return 0;
}

void func_169()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_170()
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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

void func_172()
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

bool func_173(int iParam0, int iParam1)
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

void func_174()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_175(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
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

struct<6> func_176(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_76[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_177(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_74() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_74() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_74() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_176(*sParam0) };
	}
}

int func_178()
{
	if ((unk_0x43589182CF3243AE() || unk_0xE80581DE0ACF1F8A()) || Global_15745 != 0)
	{
		return 0;
	}
	return 1;
}

void func_179(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

char* func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_181()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_182(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0x776447CD667051CD(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_183(iParam0))
	{
		unk_0x27327EB62D93CDBA(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_183(int iParam0)
{
	if (!unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		return 0;
	}
	return !unk_0x912AD5A10E7633F0(iParam0, 0);
}

Vector3 func_184()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_185(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()), 64);
	}
	if (!unk_0x7C0379981B7E6E40())
	{
		unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			unk_0xF152F4EB3CEAF22E(unk_0xA0081090911D13E5(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xD2C0F2FD77D871FA(0, 0, 3, 0);
	}
	else
	{
		unk_0x2D5A415AD869CB5F(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x94724F7C938EBE34(1);
	}
	else
	{
		if (unk_0x0D2E3F017CBCB8A8(uParam0->f_4))
		{
			if (unk_0xC0A42281C0F88A94(uParam0->f_4))
			{
				unk_0x07553DAC96600443(uParam0->f_4, 0);
			}
			unk_0x50C86ABC13A071F8(uParam0->f_4, 1);
		}
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
		}
		iVar0 = unk_0x525584039F375488();
		if (unk_0xD3FACCDA4D66AEAD(iVar0))
		{
			unk_0xEDBE0CD7C81FA37E(iVar0, 1, 0);
		}
		unk_0x29B0EFEB2715365C("TIME_LAPSE");
		if (unk_0x6DEB8F88FFE09057("TOD_SHIFT_SCENE"))
		{
			unk_0x15761381A3072BFA(uParam0->f_10);
			unk_0x29B0EFEB2715365C("TIME_LAPSE");
			unk_0x7C1793252FA472B6("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0);
	func_145();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xE69E781F3FBD3528(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xE69E781F3FBD3528(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x2C22E7D1C80A53EF())
		{
			unk_0xA0303A6B8C99DD6A(250);
		}
	}
	if (!bParam1)
	{
		if (Global_101553.f_18972.f_4801 != -15)
		{
			Global_101553.f_18972.f_4801 = func_160();
		}
	}
}

float func_186(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_187()
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14[4];
	var uVar27[4];
	
	func_188(&Var1, &Var14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x0D2E3F017CBCB8A8(uLocal_284[iVar0]))
		{
			uLocal_284[iVar0] = unk_0x12F59429E5E012F4(26379945, Var1[iVar0 /*3*/], Var14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			unk_0xE54CCCC537E33A2F(uLocal_284[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_289.f_4 = unk_0x669DFEC6C5E8A812("DEFAULT_SPLINE_CAMERA", 0);
	unk_0x694DD9C0BB3EE7CD(Local_289.f_4, Var1[0 /*3*/], Var14[0 /*3*/], 6000, 3, 2);
	unk_0x694DD9C0BB3EE7CD(Local_289.f_4, Var1[1 /*3*/], Var14[1 /*3*/], 6000, 3, 2);
	unk_0x033BAA756AF85975(Local_289.f_4, uVar27[0]);
}

void func_188(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_76[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_189(int iParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		unk_0xCC99FC1ABFE3883F(iParam0, 1);
		if (unk_0x21178DF77817BF39(iParam0, 242628503) != 1)
		{
			unk_0x7DFD14B8B873D6B5(&uLocal_339);
			unk_0x95C55738CAE00A20(&uLocal_339);
			if (unk_0x39FEE545B315414E(iParam0, 0))
			{
				unk_0x8474D2383AC8AF53(0, 0, 16777216);
			}
			if (iParam0 == unk_0xA0081090911D13E5())
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iParam0, 1), Local_302);
				fVar1 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iParam0, 1), Local_305);
				if (fVar1 < fVar0)
				{
					unk_0xCD49DDA254A161AF(0, uLocal_274[0], 0);
				}
				else if (!unk_0x509383441597090D(func_190()))
				{
					unk_0x06A0AFACC5EA5396(0, func_190(), 0, 552, -1);
				}
				else
				{
					unk_0x1429584A1E80336C(0, Local_302, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0xA0081090911D13E5())
			{
				if (!unk_0x509383441597090D(func_190()))
				{
					unk_0x06A0AFACC5EA5396(0, func_190(), 0, 546, -1);
				}
				else
				{
					unk_0x1429584A1E80336C(0, Param1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, Param1, 1) > 5f)
				{
					unk_0xCD49DDA254A161AF(0, unk_0xA0081090911D13E5(), 0);
					unk_0xC9567EA69F3CC4C2(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x332BEDF7CCD4832D(0, unk_0xB5BF1B58C833F7A9(3000, 6000));
					unk_0xCD49DDA254A161AF(0, unk_0xA0081090911D13E5(), 0);
					unk_0xC9567EA69F3CC4C2(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x332BEDF7CCD4832D(0, unk_0xB5BF1B58C833F7A9(3000, 6000));
					unk_0xCD49DDA254A161AF(0, unk_0xA0081090911D13E5(), 0);
					unk_0xC9567EA69F3CC4C2(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC9567EA69F3CC4C2(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x70B222EEA46C37FA(uLocal_339);
			unk_0x3998B29E786DFD96(iParam0, uLocal_339);
		}
	}
}

char* func_190()
{
	char* sVar0;
	
	if (uLocal_76[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_191(int iParam0, int iParam1)
{
	if (!unk_0xEB361B4BD195A4D3(iParam0) && !unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		unk_0x80A80036D1802B86(iParam0, iParam1, Local_308, fLocal_327, 3, 1092616192, 0);
	}
}

char* func_192()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_193()
{
	if (func_74() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_74() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_74() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_194()
{
	sLocal_276 = "move_p_m_one_idles@generic";
	unk_0xA9DC3948106CC3E4(sLocal_276);
}

int func_195(int iParam0)
{
	if (unk_0x324FA0A89ED8A01A(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0x324FA0A89ED8A01A(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_196(var uParam0, struct<3> Param1, bool bParam4, float fParam5)
{
	if (func_198(uParam0))
	{
		unk_0x1024616B94124EB5(*uParam0);
		if (!func_197(Param1))
		{
			unk_0x27327EB62D93CDBA(*uParam0, Param1, 1, 0, 0, 1);
			if (bParam4)
			{
				unk_0x10BB9EA2ADBCF0F3(*uParam0, fParam5);
			}
			unk_0x74207974B5483203(*uParam0);
		}
		return 1;
	}
	return 0;
}

int func_197(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x525584039F375488();
	if (unk_0xD3FACCDA4D66AEAD(iVar0))
	{
		if (!func_135(iVar0))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && unk_0x7298BA0C4D4A4C9E(iVar0, unk_0xA0081090911D13E5(), Local_63, 0, 1, 0))
			{
				unk_0x1024616B94124EB5(iVar0);
				unk_0x591413670A1EF437(iVar0, 0, 0);
				unk_0xEDBE0CD7C81FA37E(iVar0, 0, 0);
				unk_0xBB21B5C3111E5F85(iVar0, 1);
				unk_0x7B17650F15A8876D(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	if (unk_0xB20CA7A3EE29687A())
	{
		if ((unk_0xDF658EB6CA91DFBC() - Global_28) > iParam0)
		{
			Global_27 = unk_0xDF658EB6CA91DFBC();
		}
		Global_28 = unk_0xDF658EB6CA91DFBC();
		if ((unk_0xDF658EB6CA91DFBC() - Global_27) > iParam0)
		{
			if (func_200())
			{
				Global_27 = unk_0xDF658EB6CA91DFBC();
				return 1;
			}
		}
	}
	return 0;
}

int func_200()
{
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (unk_0x2A57AED61E15C7C7(0, 18) || unk_0x2A57AED61E15C7C7(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_201(bool bParam0)
{
	struct<4> Var0;
	float fVar4;
	
	func_62();
	if (unk_0x912AD5A10E7633F0(uLocal_274[0], 0))
	{
		return;
	}
	unk_0xE4EC3FD6A99953E8(Local_308 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_308 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), 0, 1);
	fVar4 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(uLocal_274[0], 1));
	if (iLocal_78 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_178()) && !func_252(uLocal_333, 2)) || func_239(uLocal_274[0], 0))
		{
			if (unk_0x16833EFAA58E63DB(uLocal_281))
			{
				unk_0x0B57C567D698C373(&uLocal_281);
			}
			if (unk_0x16833EFAA58E63DB(uLocal_280))
			{
				unk_0x0B57C567D698C373(&uLocal_280);
			}
			func_236(0);
			func_80("SCLUB_HOME_R", uLocal_76[0]);
			iLocal_78 = 9;
		}
	}
	if (unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (unk_0x16833EFAA58E63DB(uLocal_281))
			{
				unk_0x0B57C567D698C373(&uLocal_281);
			}
			if (unk_0x16833EFAA58E63DB(uLocal_280))
			{
				unk_0x0B57C567D698C373(&uLocal_280);
			}
			iLocal_78 = 8;
		}
	}
	if (func_225(uLocal_274[0], &uLocal_267, &uLocal_264))
	{
		func_63(4);
	}
	if (iLocal_78 <= 1)
	{
		func_244(1);
	}
	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
			if (func_178())
			{
				if (!func_252(uLocal_333, 1))
				{
					unk_0xBB21B5C3111E5F85(uLocal_274[0], 1);
					func_80("SCLUB_HOME_MEET", uLocal_76[0]);
					func_236(0);
					func_27(&uLocal_333, 1);
				}
				iLocal_78 = 1;
			}
			break;
		
		case 1:
			iLocal_79 = 1;
			Var0 = { func_68(uLocal_76[0]) };
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				iLocal_340 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				uLocal_334 = unk_0xC6FE0F623405BFA8(iLocal_340);
			}
			if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), unk_0xC59DF10B4FC39DF8(uLocal_274[0], 1), 3f, 3f, 3f, 0, 1, 0) || (unk_0x1F1B2B6E500380C5(iLocal_340, 0) && func_224(iLocal_340, uLocal_274[0], 1) <= 10f))
			{
				unk_0xBB21B5C3111E5F85(uLocal_274[0], 0);
				if (unk_0xD3FACCDA4D66AEAD(iLocal_340) && (unk_0x8EF0E5E933BE561D(iLocal_340) < 1 || (!bParam0 && !unk_0x0778B61C8A904D0B(unk_0x705BC1BB91F530B5(iLocal_340)))))
				{
					if (!func_67("SCLUB_SMALL_CAR", &Var0))
					{
						func_64("SCLUB_SMALL_CAR", uLocal_76[0], 0);
						func_164(uLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0x94724F7C938EBE34(1);
					unk_0xD3032BAC1ECE011F(uLocal_274[0]);
					func_222();
					if (!func_252(uLocal_333, 2))
					{
						func_27(&uLocal_333, 2);
					}
					func_221();
					func_82();
					func_214(39, 1);
					func_214(40, 1);
					func_214(41, 1);
					func_214(42, 1);
					func_214(43, 1);
					func_214(44, 1);
					iLocal_78 = 2;
				}
			}
			else if (func_67("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0x94724F7C938EBE34(1);
			}
			break;
		
		case 2:
			iLocal_79 = 2;
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0x39FEE545B315414E(uLocal_274[0], 0))
				{
					iLocal_78 = 3;
				}
			}
			else
			{
				func_164(uLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iLocal_79 = 3;
			func_211();
			if (!func_162())
			{
				if (func_178())
				{
					unk_0x965CFA6E4E433BDE(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 0, 1);
					unk_0xE4EC3FD6A99953E8(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 0, 1);
					unk_0xD74B8343DB9FEFD5(Local_308, 10f, 0, 0, 0, 0, 0);
					unk_0xF3C7015EF0F4A17C(Local_308, 10f, 0);
					uLocal_301 = unk_0x6A173E5A316F6DE8(Local_308 - Vector(35f, 35f, 35f), Local_308 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&uLocal_246);
					if (bParam0)
					{
						func_87(1);
						func_210();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_79 = 4;
			func_207(fVar4, Local_311);
			func_202();
			if ((func_4(&uLocal_258) > 45f || unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Local_320) > (100f * 100f)) && func_25(unk_0xA0081090911D13E5(), Local_311, 1) > 100f)
			{
				if (uLocal_76[0] == 8)
				{
					func_166("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_164(uLocal_274[0], "GENERIC_FUCK_YOU", 10);
				}
				func_63(3);
			}
			else if (func_239(uLocal_274[0], 1))
			{
				if (unk_0x16833EFAA58E63DB(uLocal_281))
				{
					unk_0x0B57C567D698C373(&uLocal_281);
				}
				if (unk_0x16833EFAA58E63DB(uLocal_280))
				{
					unk_0x0B57C567D698C373(&uLocal_280);
				}
				func_236(0);
				func_80("SCLUB_HOME_R", uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_308, 3f, 3f, 2f, 1, 1, 2) || unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_305, 5f, 5f, 2f, 1, 1, 1))
			{
				if (func_34(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			else if (!unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
			{
				func_210();
			}
			break;
		
		case 5:
			iLocal_79 = 5;
			func_207(fVar4, Local_308);
			func_202();
			func_222();
			if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_308, 1f, 1f, 2f, 1, 1, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
				{
					func_210();
				}
				else
				{
					func_58(Local_308);
				}
				if (func_103("SCLUB_HOME_WALK"))
				{
					unk_0x94724F7C938EBE34(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0xD3FACCDA4D66AEAD(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
				{
					if (func_57(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_56();
						func_189(uLocal_274[0], Local_305);
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
						{
							func_166("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_166("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_78 = 7;
					}
				}
			}
			else if (unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
			{
				unk_0xB0993C95A7DBF879(uLocal_274[0]);
				func_210();
				unk_0x94724F7C938EBE34(1);
			}
			break;
		
		case 7:
			iLocal_79 = 7;
			if ((!func_162() && !unk_0x43589182CF3243AE()) && !func_252(uLocal_333, 2048))
			{
				Var0 = { func_68(uLocal_76[0]) };
				func_81("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_82();
				func_236(0);
				func_27(&uLocal_333, 2048);
			}
			if ((unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_311, 5f, 5f, 2f, 0, 1, 1) || unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_305, 5f, 5f, 2f, 0, 1, 1)) && unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
			{
				if (func_34(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_252(uLocal_331, 4096) && !func_162()) && !unk_0x124290C0A019B083(uLocal_274[0]))
			{
				if (iLocal_79 > 1 || unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(uLocal_274[0], 1)) < (3f * 3f))
				{
					func_164(uLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_331, 4096);
				}
			}
			if (!unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
			{
				iLocal_78 = iLocal_79;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_63(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_239(uLocal_274[0], 1))
			{
				unk_0x715FC4B638D9A515();
				iLocal_78 = iLocal_79;
				if (unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
				{
					func_210();
				}
			}
			break;
	}
}

void func_202()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_252(uLocal_333, 16))
	{
		if (func_203())
		{
			func_27(&uLocal_333, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_96(uLocal_274[0], 0, 0);
	if (!func_252(uLocal_333, 8))
	{
		if (!func_252(uLocal_333, 4))
		{
			if (!func_252(uLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					func_166("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_331, 256);
			}
			else
			{
				unk_0xA9DC3948106CC3E4(sVar0);
				func_27(&uLocal_333, 4);
			}
		}
		else if (unk_0xAD21C77209FD2024(sVar0))
		{
			func_90(uLocal_274[0], 1, 1, -1, 1);
			unk_0x77637031DE326F70(uLocal_274[0], 1);
			func_7(&uLocal_255);
			func_27(&uLocal_333, 8);
		}
	}
	else if (func_252(uLocal_333, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x2FB5C9A04733E5EF(uLocal_274[0], sVar0, func_91(4, 1, 1, func_94(iLocal_340)), 3);
		bVar3 = unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5());
		bVar4 = unk_0x21178DF77817BF39(uLocal_274[0], 242628503) == 7;
		bVar5 = unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0xD3FACCDA4D66AEAD(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)) && !unk_0x912AD5A10E7633F0(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0))
			{
				bVar6 = (unk_0x55D9E756AFC7AF1D(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)) && unk_0x39053CCA2C4B5DA1(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)) > 5f);
			}
		}
		if ((((!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || func_4(&uLocal_255) > 35f) || unk_0x2A488C176D52CCA5(Local_308, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0xC9567EA69F3CC4C2(uLocal_274[0], sVar0, func_91(4, 1, 1, func_94(iLocal_340)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_335 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_241();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0xA082D4AC00BC651A(unk_0xA0081090911D13E5(), (unk_0xC6FE0F623405BFA8(unk_0xA0081090911D13E5()) - unk_0x11E019C8F43ACC8A((IntToFloat(unk_0xF0BA9B123B880A7E(unk_0xA0081090911D13E5())) * 0.1f))));
					func_164(unk_0xA0081090911D13E5(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_164(unk_0xA0081090911D13E5(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_331, 128);
			}
			unk_0x04269E768DDAF940(sVar0);
			func_70(&uLocal_333, 4);
		}
		if (!func_252(uLocal_331, 64))
		{
			if (func_4(&uLocal_255) > 10f)
			{
				func_164(unk_0xA0081090911D13E5(), "SEX_GENERIC", 10);
				func_164(uLocal_274[0], "SEX_ORAL", 10);
				func_27(&uLocal_331, 64);
			}
		}
		unk_0x35FBFE9B937728A9();
		func_241();
	}
}

int func_203()
{
	struct<3> Var0;
	var uVar3;
	
	if (!func_178())
	{
		return 0;
	}
	func_61(&Var0, &uVar3, 0);
	if (((unk_0x2A488C176D52CCA5(Local_308, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) > (75f * 2f) && unk_0x2A488C176D52CCA5(Var0, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) > (75f / 2f)) && func_112(uLocal_76[0]) > 1) && func_204())
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	if (unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iVar0);
		if (func_206(iVar1, 0) && func_205(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		if (unk_0x141913B932CAECD6(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xADEACD5FDE0D1FDE(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x1600BD20ACC91AF6(iParam0, iVar1, unk_0xADEACD5FDE0D1FDE(iParam0, iVar1)), 16);
						iVar2 = unk_0x3BB8D1C5FAAB25B3(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x3BB8D1C5FAAB25B3("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0xCF63F083BB8317E3(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
				return 1;
				break;
		}
		if (unk_0xCF63F083BB8317E3(iParam0) == 931866387 && unk_0x705BC1BB91F530B5(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0, bool bParam1)
{
	if ((((unk_0xE3C6E31B7236489F(iParam0) || unk_0x1E3C80E7C4B8041B(iParam0)) || unk_0xFC4346F9DE2AB4AE(iParam0)) || unk_0x11F6DEA60A2AE510(iParam0)) || unk_0xBFD32C1D4D54E09B(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2"))
	{
		return 0;
	}
	return 1;
}

void func_207(float fParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_252(uLocal_331, 262144))
	{
		if (func_209(uLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
			{
				func_166("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_164(uLocal_274[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&uLocal_249);
			func_27(&uLocal_331, 262144);
		}
	}
	else if (func_4(&uLocal_249) > 10f)
	{
		func_70(&uLocal_331, 262144);
		func_8(&uLocal_249);
	}
	if ((fParam0 > 5f || !func_178()) || func_252(uLocal_333, 4))
	{
		return;
	}
	if (!func_252(uLocal_331, 1) && !func_252(uLocal_331, 128))
	{
		if (unk_0x2A488C176D52CCA5(Param1, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
			{
				if (func_166("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_331, 1);
				}
			}
			else
			{
				func_27(&uLocal_331, 1);
			}
			unk_0xD74B8343DB9FEFD5(Local_308, 5f, 0, 0, 0, 0, 0);
		}
	}
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		return;
	}
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	if (!unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		if (!func_252(uLocal_331, 16))
		{
			func_164(uLocal_274[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_331, 16);
			func_8(&uLocal_246);
		}
		if (!func_252(uLocal_331, 4))
		{
			func_70(&uLocal_331, 4);
		}
		if (!func_252(uLocal_331, 8))
		{
			func_70(&uLocal_331, 8);
		}
	}
	else
	{
		fVar1 = unk_0x39053CCA2C4B5DA1(iVar0);
		fVar2 = unk_0xD6D39532149CE0AF(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&uLocal_252);
		}
		if (!func_252(uLocal_331, 4))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_164(uLocal_274[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_70(&uLocal_331, 4);
			func_8(&uLocal_246);
		}
		if (!func_252(uLocal_331, 8))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_164(uLocal_274[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_70(&uLocal_331, 8);
			func_8(&uLocal_246);
		}
		if (!func_252(uLocal_331, 131072))
		{
			if (func_208(uLocal_274[0], &uLocal_334))
			{
				if (func_4(&uLocal_249) > 5f)
				{
					func_164(uLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_331, 131072);
					func_8(&uLocal_246);
				}
			}
		}
		else if (func_4(&uLocal_249) > 5f)
		{
			func_70(&uLocal_331, 131072);
			func_8(&uLocal_249);
		}
		if (!func_252(uLocal_331, 65536))
		{
			if (func_4(&uLocal_246) > 30f || (func_4(&uLocal_246) > 10f && !func_252(uLocal_331, 32)))
			{
				func_164(uLocal_274[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_331, 32);
				func_27(&uLocal_331, 524288);
				func_8(&uLocal_246);
			}
			else if (func_252(uLocal_331, 524288))
			{
				if (!unk_0x124290C0A019B083(uLocal_274[0]) && func_4(&uLocal_246) > 4f)
				{
					func_164(unk_0xA0081090911D13E5(), "BOOTY_FLIRT_RESP", 10);
					func_70(&uLocal_331, 524288);
				}
			}
		}
	}
}

int func_208(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	if (unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		if (unk_0x72550A6F2BC0E12B(uParam0, iVar0))
		{
			if (unk_0x55D9E756AFC7AF1D(iVar0))
			{
				iVar1 = unk_0xC6FE0F623405BFA8(iVar0);
				iVar2 = (*uParam1 - iVar1);
				*uParam1 = iVar1;
				unk_0x79EC9CA36480CB01(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0x310855B068690064(108, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 10f) && unk_0x2F14E7FE397B72F2(iParam0, unk_0xA0081090911D13E5()))
		{
			return 1;
		}
	}
	return 0;
}

void func_210()
{
	func_83();
	func_8(&uLocal_246);
	if (unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
	{
		if (unk_0x16833EFAA58E63DB(uLocal_280))
		{
			unk_0x0B57C567D698C373(&uLocal_280);
		}
		if (!unk_0x16833EFAA58E63DB(uLocal_281))
		{
			uLocal_281 = func_59(Local_311, 0);
		}
		func_8(&uLocal_258);
		Local_320 = { unk_0xC59DF10B4FC39DF8(uLocal_274[0], 1) };
		iLocal_78 = 4;
	}
	else
	{
		func_8(&uLocal_249);
		func_58(Local_308);
		iLocal_78 = 5;
	}
}

void func_211()
{
	if (!func_252(uLocal_331, 1024))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			if (func_212(uLocal_76[0]))
			{
				if (!func_162())
				{
					func_164(uLocal_274[0], "NICE_CAR", 10);
					func_27(&uLocal_331, 1024);
				}
			}
		}
	}
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	if (unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iVar0);
		if (func_213(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_214(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_220(iParam0, 2, 1))
		{
			func_219(iParam0, 2, 1);
		}
	}
	else if (func_220(iParam0, 2, 1))
	{
		func_215(iParam0, 2, 1);
	}
}

void func_215(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x09C86C0C5CA26B1E(&(Global_91458.f_1308[iParam0]), iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_52() == 0)
		{
			uVar0 = func_217(func_218(iParam0), -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar0, iParam1);
			func_216(func_218(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_668[iParam0]), iParam1);
	}
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_73(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, iParam3);
	}
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_73(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 4442;
			break;
		
		case 45:
			return 3776;
			break;
		
		default:
			break;
	}
	return 4617;
}

void func_219(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x88B0F0DC270164B7(&(Global_91458.f_1308[iParam0]), iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_52() == 0)
		{
			uVar0 = func_217(func_218(iParam0), -1, 0);
			unk_0x88B0F0DC270164B7(&uVar0, iParam1);
			func_216(func_218(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Global_101553.f_668[iParam0]), iParam1);
	}
}

int func_220(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x08BA6DD398CA197C(Global_91458.f_1308[iParam0], iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_52() == 0)
		{
			return unk_0x08BA6DD398CA197C(func_217(func_218(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_221()
{
	if (uLocal_76[0] == 8)
	{
		func_166("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_164(uLocal_274[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_222()
{
	if (!unk_0x5D586EFF7D308A80(uLocal_274[0]) && unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(uLocal_274[0], 1)) < 10f)
	{
		unk_0xF6C043D83EDAD90F(uLocal_274[0], func_223());
		unk_0x69AB64EF21C2006E(uLocal_274[0], 0);
	}
}

int func_223()
{
	return unk_0x67D12A4DCB18DE93(unk_0x4A0FB18E33FE5805());
}

float func_224(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, iParam2);
}

int func_225(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(uParam2))
	{
		func_7(uParam2);
	}
	if (func_4(uParam2) > 3f)
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iVar1 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		}
		if (func_228(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_226(&uVar0);
			if (unk_0xD3FACCDA4D66AEAD(iParam0))
			{
				if (!unk_0x912AD5A10E7633F0(iParam0, 0))
				{
					if (!unk_0x073DE561E3841ECF(iLocal_72))
					{
						unk_0xD8C3303D0A49D05B("BootyCall", &iLocal_72);
					}
					unk_0xFDDE2C1A05E64390(2, iLocal_72, joaat("player"));
					unk_0xFDDE2C1A05E64390(2, joaat("player"), iLocal_72);
					unk_0x65889F26F311FC55(iParam0, iLocal_72);
					unk_0x69E46DC398F0B2BD(iParam0, unk_0xA0081090911D13E5(), 500f, -1, 0, 0);
				}
			}
			func_8(uParam2);
			return 1;
		}
	}
	return 0;
}

void func_226(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_227(1);
			break;
		
		case 2:
			break;
	}
}

void func_227(bool bParam0)
{
	Global_100547 = 0;
	Global_100547.f_1 = -1;
	Global_100547.f_2 = -1;
	if (bParam0)
	{
		func_118(-1);
	}
}

int func_228(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xA0081090911D13E5();
	if (!unk_0x912AD5A10E7633F0(iVar0, 0) && !unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (!func_252(*uParam2, 1))
		{
			if (func_235(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_252(*uParam2, 2))
		{
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_252(*uParam2, 4))
		{
			if (func_233(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_252(*uParam2, 8))
		{
			if (func_232(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_252(*uParam2, 128);
		if (bParam4)
		{
			if (func_229(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_252(*uParam2, 16))
		{
			if (func_229(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (iParam7 && unk_0x4AEC0F4FC7FE62C7(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0xC6FE0F623405BFA8(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = unk_0xC6FE0F623405BFA8(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0x525584039F375488();
		if (!unk_0x912AD5A10E7633F0(iVar0, 0))
		{
			if (unk_0x4AEC0F4FC7FE62C7(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0x4AEC0F4FC7FE62C7(iParam0, unk_0xA0081090911D13E5(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x4AEC0F4FC7FE62C7(iParam0, unk_0xA0081090911D13E5(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x525584039F375488();
		if (!unk_0x912AD5A10E7633F0(iVar1, 0))
		{
			if (unk_0x4AEC0F4FC7FE62C7(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			if (unk_0x12AE3D700F6A2545(iParam0))
			{
				if (unk_0xEA5E391ACA923D54(iParam0) == unk_0xA0081090911D13E5())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
		{
			if (unk_0x6E07DBF03F3AC258(iParam0, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x3AE0998A8E3C90A5(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x54F35422D2CB3C36(unk_0xA0081090911D13E5()))
	{
		if (unk_0x5E83455CA001686F(iParam0))
		{
			return 1;
		}
	}
	if (func_231(unk_0xA0081090911D13E5(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xFFE4F37124DBE6D9(iParam0) && func_230(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x39FEE545B315414E(iParam0, 0))
		{
			if (unk_0xE2205194B5B97090(unk_0xA0081090911D13E5(), unk_0xF8DB47D339B8B953(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xE2205194B5B97090(unk_0xA0081090911D13E5(), iParam0))
		{
			return 1;
		}
		if (!unk_0x912AD5A10E7633F0(iParam1, 0))
		{
			if (unk_0x4AEC0F4FC7FE62C7(iParam1, unk_0xA0081090911D13E5(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_230(int iParam0, int iParam1)
{
	return func_224(unk_0x21F191D9AFF98B5E(unk_0x4A0FB18E33FE5805()), iParam0, iParam1);
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x79DEFA3570360EAF(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x4B626BBA5EE1CFF0(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iParam0, 1), unk_0xC59DF10B4FC39DF8(iParam1, 1)) < 2.5f)
			{
				if (unk_0x85F24E93D5789C43(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_232(int iParam0, int iParam1, var uParam2)
{
	if (unk_0xD791ED8E9ADE270C(iParam0, 4))
	{
		if (unk_0x4B626BBA5EE1CFF0(iParam0) && !unk_0x4CD028B657AD22EA(iParam0))
		{
			if (unk_0x6E07DBF03F3AC258(iParam1, unk_0xC59DF10B4FC39DF8(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_233(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	if (unk_0xB53CC268A7051C62(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xF833F9BD2A57E1BA(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0xD791ED8E9ADE270C(iParam0, 2))
	{
		if (unk_0x4B626BBA5EE1CFF0(iParam0))
		{
			if (unk_0x6E07DBF03F3AC258(iParam1, unk_0xC59DF10B4FC39DF8(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x85F24E93D5789C43(unk_0x90897FA118314142(iParam1), iParam0, 120f) && unk_0x25138A378B1DA64B(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x39FEE545B315414E(unk_0x90897FA118314142(iParam1), 0))
			{
				iVar3 = unk_0xF8DB47D339B8B953(unk_0x90897FA118314142(iParam1), 0);
			}
			if (unk_0x7DF282A008F6DC55(iParam0) || func_234(iVar3))
			{
				if (unk_0x6E07DBF03F3AC258(iParam1, unk_0xC59DF10B4FC39DF8(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x85F24E93D5789C43(unk_0x90897FA118314142(iParam1), iParam0, 120f) && unk_0x25138A378B1DA64B(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xF9043F0F074A61B5((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (unk_0x1F1B2B6E500380C5(iParam0, 0))
		{
			if (unk_0x8FD32443A080784B(iParam0, -1, 0) != 0)
			{
				if (unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_224(unk_0xA0081090911D13E5(), iParam0, 1) < 40f)
						{
							if (unk_0xA6804C0975090D0A(unk_0x0C1D3C552325765B(), &iVar1))
							{
								if ((unk_0x264883409423C6C3(iVar1) && unk_0x5293F3C38E4842B3(iVar1) == iParam0) || (unk_0x60F161681C368C4E(iVar1) && unk_0x90897FA118314142(iVar1) == unk_0x8FD32443A080784B(iParam0, -1, 0)))
								{
									if ((unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()) && unk_0x7F6103BD34B839B0(0, 24)) || (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && unk_0x7F6103BD34B839B0(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_235(int iParam0, var uParam1)
{
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0xD791ED8E9ADE270C(unk_0xA0081090911D13E5(), 6))
		{
			if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), iParam0) || unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iParam0))
			{
				if (unk_0x85F24E93D5789C43(iParam0, unk_0xA0081090911D13E5(), 90f))
				{
					if (func_230(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xDF658EB6CA91DFBC();
						}
						else if ((unk_0xDF658EB6CA91DFBC() - uParam1->f_1) > uParam1->f_3)
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

void func_236(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x16833EFAA58E63DB(uLocal_282[iParam0]))
	{
		unk_0x0B57C567D698C373(&(uLocal_282[iParam0]));
	}
	uLocal_282[iParam0] = func_237(uLocal_274[iParam0], 0, 145);
	Var0 = { func_68(uLocal_76[iParam0]) };
	unk_0x6F18BFEFE84565FF(uLocal_282[iParam0], &Var0);
}

var func_237(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_238(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x16833EFAA58E63DB(uVar0)) && unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_32740[iParam2 /*29*/].f_3)))
	{
		unk_0x6F18BFEFE84565FF(uVar0, &(Global_101553.f_32740[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_238(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x91B4D18C6AFDC14C(iParam0);
	if (unk_0x264883409423C6C3(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_60(unk_0xA86CA03D9749EEB3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
		}
		else
		{
			unk_0x77804F3DCBA01DB5(uVar0, 2);
		}
	}
	else if (unk_0x60F161681C368C4E(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_60(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
		unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
	}
	else if (unk_0x1FFA71644D1C7C16(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_60(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_239(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	float fVar7;
	
	Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
	Var3 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		uVar6 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		if (unk_0x65333878E8C653BC(iParam0) == func_223())
		{
			if (unk_0x1F1B2B6E500380C5(uVar6, 0))
			{
				if (!unk_0x1FD87E888EB4FC00(iParam0, iVar6, 0) && unk_0x2A488C176D52CCA5(Var0, Var3) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_252(uLocal_333, 2))
	{
		fVar7 = unk_0x7466327978A6A24C((Var0.f_2 - Var3.f_2));
		if (fVar7 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_240()
{
	if (!unk_0x912AD5A10E7633F0(uLocal_274[0], 0))
	{
		if (!unk_0x9726BE1252F8F0B6())
		{
			func_182(uLocal_274[0], unk_0x8461D93FE2207D3A(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}
}

void func_241()
{
	unk_0x527ED47EF44C8E1E();
	func_242();
}

void func_242()
{
	Global_17151.f_134 = 1;
}

int func_243(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_244(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_156(iLocal_73))
	{
		iLocal_73 = func_160();
		func_150(&iLocal_73, 0, 0, unk_0xB5BF1B58C833F7A9(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_252(uLocal_333, 512))
		{
			if (func_251(iLocal_73) && unk_0x460E7746DAC01E79(uLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_76[0], 64);
					func_179(&uLocal_81, 1, 0, func_180(uLocal_76[0]), 0, 1);
					func_250(&uLocal_81, func_108(uLocal_76[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_248();
				}
				func_247(uLocal_274[0]);
				func_27(&uLocal_333, 512);
			}
		}
		else if (func_246())
		{
			func_70(&uLocal_333, 512);
		}
		else if ((!func_162() && func_245()) && !func_246())
		{
			func_227(1);
			func_63(2);
		}
	}
}

int func_245()
{
	if (Global_15745 == 0)
	{
		return 1;
	}
	return 0;
}

int func_246()
{
	if (Global_15794 == 1 || Global_16761 == 1)
	{
		return 1;
	}
	return 0;
}

void func_247(int iParam0)
{
	if (!unk_0xEB361B4BD195A4D3(uParam0))
	{
		unk_0xCC99FC1ABFE3883F(iParam0, 1);
		if (unk_0x21178DF77817BF39(iParam0, 242628503) != 1)
		{
			unk_0x7DFD14B8B873D6B5(&uLocal_339);
			unk_0x95C55738CAE00A20(&uLocal_339);
			unk_0x5F6B2DFB57BBCE9A(0, 8000);
			unk_0x1429584A1E80336C(0, Local_305, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0x70B222EEA46C37FA(uLocal_339);
			unk_0x3998B29E786DFD96(iParam0, uLocal_339);
		}
	}
}

void func_248()
{
	int iVar0;
	
	if (func_249())
	{
		return;
	}
	iVar0 = func_111(uLocal_76[0]);
	func_105(-384575792, iVar0, 6, 3, func_109(), func_108(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_249()
{
	if (func_52() == 0)
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_175(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_168(sParam3, iParam4, bParam7);
}

bool func_251(int iParam0)
{
	return func_155(func_160(), iParam0);
}

bool func_252(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_253(var uParam0, bool bParam1)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	struct<8> Var37;
	
	func_281();
	func_61(&Var0, &uVar3, bParam1);
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (fLocal_329 == -1f)
		{
			fLocal_329 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var0);
		}
		if (iLocal_332 == -1)
		{
			iLocal_332 = uParam0->f_3;
		}
		if (!func_252(uLocal_333, 32))
		{
			func_277(&uLocal_278, func_279((*uParam0)[0], 0));
			func_276(&uLocal_278);
			func_27(&uLocal_333, 32);
			unk_0xA9DC3948106CC3E4("mini@strip_club@idles@stripper");
			unk_0xA9DC3948106CC3E4("gestures@f@standing@casual");
			func_275();
			return 0;
		}
		else if ((!func_274(&uLocal_278) || !unk_0xAD21C77209FD2024("mini@strip_club@idles@stripper")) || !func_273())
		{
			return 0;
		}
		if (bLocal_337)
		{
			if (!unk_0x0C863D3ED919983C(1))
			{
				return 0;
			}
		}
		if (!func_252(uLocal_333, 1024))
		{
			uLocal_76[0] = (*uParam0)[0];
			uLocal_274[0] = unk_0xF8418B3B87CFCCBF(26, func_279((*uParam0)[0], 0), Var0, uVar3, 1, 1);
			func_267(uLocal_274[0], uLocal_76[0], 0);
			unk_0xFF5CE2ECB4FBD4A8(uLocal_274[iVar4], 1);
			unk_0x77637031DE326F70(uLocal_274[0], 1);
			unk_0xC517014488E2DF36(uLocal_274[0], 1);
			func_263(uLocal_274[0]);
			unk_0xC9567EA69F3CC4C2(uLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0xD5DC2873808A9CB5(uLocal_274[iVar4], unk_0xA0081090911D13E5(), -1, 2048, 4);
			unk_0x69AB64EF21C2006E(uLocal_274[0], 0);
			unk_0xD97F9F0D7231AC43(uLocal_274[0], func_180((*uParam0)[0]));
			func_179(&uLocal_81, 1, uLocal_274[0], func_180((*uParam0)[0]), 0, 1);
			func_27(&uLocal_333, 1024);
		}
		if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var0) > 100f)
		{
			if (func_178())
			{
				if (!func_252(uLocal_333, 1))
				{
					func_262(bParam1);
					func_236(0);
					func_27(&uLocal_333, 1);
				}
			}
			if (!func_252(uLocal_333, 64) && !func_252(uLocal_333, 512))
			{
				if (func_261(func_108((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_74() == 2)
					{
						func_179(&uLocal_81, 0, unk_0xA0081090911D13E5(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_74() == 0)
					{
						func_179(&uLocal_81, 0, unk_0xA0081090911D13E5(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_74() == 1)
					{
						func_179(&uLocal_81, 0, unk_0xA0081090911D13E5(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_179(&uLocal_81, 3, 0, func_180((*uParam0)[0]), 0, 1);
					Var21 = { func_260() };
					func_255(&uLocal_81, func_108((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_27(&uLocal_333, 64);
				}
				if (func_156(iLocal_73))
				{
					if (func_251(iLocal_73))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, (*uParam0)[0], 64);
							func_179(&uLocal_81, 1, 0, func_180((*uParam0)[0]), 0, 1);
							func_250(&uLocal_81, func_108((*uParam0)[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_248();
						}
						func_27(&uLocal_333, 512);
					}
				}
			}
			else if (func_246())
			{
				func_70(&uLocal_333, 64);
				func_70(&uLocal_333, 512);
			}
			else if ((!func_162() && func_245()) && !func_246())
			{
				func_254((*uParam0)[0]);
				func_227(1);
				func_63(2);
			}
			if (!func_252(uLocal_333, 128))
			{
				if (!func_33(0))
				{
					func_64("SCLUB_HOME_C_H", uLocal_76[0], 0);
					func_27(&uLocal_333, 128);
				}
			}
			if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var0) > (fLocal_329 + (200f * 3f)))
			{
				func_63(1);
			}
			else if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var0) < fLocal_329)
			{
				fLocal_329 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_74() == 2)
	{
		func_179(&uLocal_81, 0, unk_0xA0081090911D13E5(), "TREVOR", 0, 1);
	}
	else if (func_74() == 0)
	{
		func_179(&uLocal_81, 0, unk_0xA0081090911D13E5(), "MICHAEL", 0, 1);
	}
	else if (func_74() == 1)
	{
		func_179(&uLocal_81, 0, unk_0xA0081090911D13E5(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_254(int iParam0)
{
	if (Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_101553.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_255(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_175(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_259();
	if (iParam8 == 1)
	{
		Global_15757 = 1;
	}
	else
	{
		Global_15757 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_257(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_256(&uVar0, &uVar11, iParam7, bParam11);
}

int func_256(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam2 > Global_15747)
			{
				if (bParam3 == 0)
				{
					unk_0x588D9B1F6CF36C3C(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
				}
				else
				{
					func_174();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_173(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_172();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16741 = Global_16742;
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15364.f_370 = Global_16734;
		Global_15741 = Global_15742;
		Global_15743 = Global_15744;
		if (Global_16003 == 0)
		{
			Global_15899[0 /*6*/] = { Global_15925[0 /*6*/] };
			Global_15899[1 /*6*/] = { Global_15925[1 /*6*/] };
			Global_15951[0 /*6*/] = { Global_15977[0 /*6*/] };
			Global_15951[1 /*6*/] = { Global_15977[1 /*6*/] };
			Global_15912[0 /*6*/] = { Global_15938[0 /*6*/] };
			Global_15912[1 /*6*/] = { Global_15938[1 /*6*/] };
			Global_15964[0 /*6*/] = { Global_15990[0 /*6*/] };
			Global_15964[1 /*6*/] = { Global_15990[1 /*6*/] };
		}
		if (Global_15751)
		{
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam3)
			{
				func_125();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_171())
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (Global_16003 == 0)
					{
						if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
						{
							return 0;
						}
						if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
						{
							return 0;
						}
						if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
						{
							return 0;
						}
						if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
						{
							return 0;
						}
					}
				}
			}
			if (func_23())
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
			}
			func_170();
			Global_15755 = bParam3;
		}
		Global_15747 = iParam2;
		if (Global_15741 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15741)
			{
				StringCopy(&(Global_15364.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15364.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14611 = 0;
		func_169();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15747 || iParam2 == Global_15747)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_174();
	}
	return 0;
}

void func_257(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_258(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_258(var uParam0)
{
	Global_15742 = uParam0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
}

void func_259()
{
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_15759 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
}

struct<16> func_260()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_76[0], 64);
	return Var0;
}

int func_261(int iParam0)
{
	if ((Global_16859 || Global_16858) || Global_16860)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_14443.f_1 == 10)
		{
			if (Global_1628 == iParam0)
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
	return 0;
}

void func_262(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_80("SCLUB_HOME_MEE4", uLocal_76[0]);
			}
			else
			{
				func_80("SCLUB_HOME_MEET", uLocal_76[0]);
			}
			break;
		
		case 8:
			func_80("SCLUB_HOME_LIZ", uLocal_76[0]);
			break;
		
		case 9:
			func_80("SCLUB_HOME_HITCH", uLocal_76[0]);
			break;
	}
}

void func_263(int iParam0)
{
	if (unk_0x705BC1BB91F530B5(uParam0) == joaat("s_f_y_stripper_02"))
	{
		func_266(iParam0, 2, unk_0xB5BF1B58C833F7A9(0, 3));
		func_265(iParam0, 2, unk_0xB5BF1B58C833F7A9(0, 3));
		func_264(iParam0, 0, 0);
	}
}

void func_264(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB80216B463E5B366(uParam0, 6, iParam1, iParam2))
	{
		unk_0xA27FDFE5C0EBB875(uParam0, 6, iParam1, iParam2, 0);
	}
}

void func_265(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB80216B463E5B366(uParam0, 3, iParam1, iParam2))
	{
		unk_0xA27FDFE5C0EBB875(uParam0, 3, iParam1, iParam2, 0);
	}
}

void func_266(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB80216B463E5B366(uParam0, 8, iParam1, iParam2))
	{
		unk_0xA27FDFE5C0EBB875(uParam0, 8, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0xEB361B4BD195A4D3(uParam0))
	{
		unk_0xF3BDAFB717C7FBD5(iParam0);
		bVar0 = false;
		if (unk_0x705BC1BB91F530B5(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, -1, -1);
				}
				else
				{
					func_272(iParam0, 1, 1);
					func_271(iParam0, 2, 0);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_266(iParam0, 1, 0);
					func_268(iParam0, 0, 0);
					func_269(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_264(iParam0, 4, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 1);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, -1, -1);
				}
				else
				{
					func_272(iParam0, 0, 1);
					func_271(iParam0, 1, 1);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 1);
					func_266(iParam0, 1, 0);
					func_268(iParam0, 1, 0);
					func_269(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 1);
					func_265(iParam0, 0, 1);
					func_270(iParam0, 0, 1);
					func_266(iParam0, 0, 0);
					func_269(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 2, 0);
					func_265(iParam0, 0, 2);
					func_270(iParam0, 1, 1);
					func_264(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, -1, -1);
				}
				else
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 2, 1);
					func_265(iParam0, 1, 2);
					func_270(iParam0, 0, 2);
					func_266(iParam0, 1, 0);
					func_268(iParam0, 1, 2);
					func_269(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_272(iParam0, 1, 1);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 0, 1);
					func_270(iParam0, 0, 2);
					func_264(iParam0, 2, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, -1, -1);
				}
				else
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 0, 1);
					func_270(iParam0, 0, 1);
					func_266(iParam0, 1, 0);
					func_268(iParam0, 0, 1);
					func_269(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 1);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 0, 2);
					func_265(iParam0, 1, 1);
					func_270(iParam0, 0, 1);
					func_264(iParam0, 0, 0);
					func_266(iParam0, 1, 0);
					func_269(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0xA27FDFE5C0EBB875(iParam0, 3, 2, 0, 0);
				unk_0xA27FDFE5C0EBB875(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0xA27FDFE5C0EBB875(iParam0, 0, 0, 1, 0);
				unk_0xA27FDFE5C0EBB875(iParam0, 2, 0, 1, 0);
				unk_0xA27FDFE5C0EBB875(iParam0, 3, 0, 0, 0);
				unk_0xA27FDFE5C0EBB875(iParam0, 4, 0, 1, 0);
				unk_0xA27FDFE5C0EBB875(iParam0, 8, 1, 0, 0);
				unk_0xA27FDFE5C0EBB875(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xB80216B463E5B366(uParam0, 11, iParam1, iParam2))
	{
		unk_0xA27FDFE5C0EBB875(uParam0, 11, iParam1, iParam2, 0);
	}
}

void func_269(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x705BC1BB91F530B5(iParam0);
	if (iVar0 == func_243(0, 0) || iVar0 == func_243(0, 1))
	{
		if (bParam1)
		{
			func_265(iParam0, 2, 0);
			func_266(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_243(1, 0) || iVar0 == func_243(1, 1))
	{
		if (bParam1)
		{
			func_265(iParam0, 0, iParam2);
			func_264(iParam0, iParam3, 0);
			func_266(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_266(iParam0, 1, 0);
		}
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xB80216B463E5B366(uParam0, 4, iParam1, iParam2))
	{
		unk_0xA27FDFE5C0EBB875(uParam0, 4, iParam1, iParam2, 0);
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xB80216B463E5B366(uParam0, 2, iParam1, iParam2))
	{
		unk_0xA27FDFE5C0EBB875(uParam0, 2, iParam1, iParam2, 0);
	}
}

void func_272(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xB80216B463E5B366(uParam0, 0, iParam1, iParam2))
	{
		unk_0xA27FDFE5C0EBB875(uParam0, 0, iParam1, iParam2, 0);
	}
}

int func_273()
{
	if (unk_0x509383441597090D(func_190()))
	{
		return 1;
	}
	else if (unk_0x3E85D449D6D4832B(func_190()))
	{
		return 1;
	}
	return 0;
}

int func_274(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x2C1B5A0D3E233FC3((*uParam0)[iVar0]))
			{
				if (!unk_0x2C1B5A0D3E233FC3((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_275()
{
	if (!unk_0x509383441597090D(func_190()))
	{
		unk_0x4D45DF6114075356(func_190());
	}
}

void func_276(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x491067A8E906F22D((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_277(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_278(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_278(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_279(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_108(iParam0);
	if (iVar0 != 145)
	{
		return func_280(iVar0);
	}
	return func_243(0, 0);
}

int func_280(int iParam0)
{
	if (!func_77(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_281()
{
	switch (uLocal_76[0])
	{
		case 1:
			Local_302 = { 128.1002f, -1895.001f, 22.4811f };
			Local_305 = { 128.1059f, -1896.819f, 22.6792f };
			Local_308 = { 133.9411f, -1881.89f, 22.5257f };
			Local_311 = { 130.1663f, -1893.057f, 22.3748f };
			Local_314 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_326 = 330.5705f;
			fLocal_327 = 244f;
			Local_323 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_328 = fLocal_327;
			break;
		
		case 0:
			Local_302 = { -161.9628f, -1636.501f, 33.0339f };
			Local_305 = { -159.9415f, -1637.307f, 33.0339f };
			Local_308 = { -178.6316f, -1629.522f, 32.1789f };
			Local_311 = { -166.1453f, -1633.102f, 32.6574f };
			Local_314 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_326 = 108.072f;
			fLocal_327 = 180.9811f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 4:
			Local_302 = { -198.3824f, 87.8785f, 68.7436f };
			Local_305 = { -197.2292f, 86.3497f, 68.7561f };
			Local_308 = { -200.9078f, 113.537f, 68.5518f };
			Local_311 = { -200.1384f, 96.9809f, 68.5203f };
			Local_314 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_326 = 48.99f;
			fLocal_327 = 64.3f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 5:
			Local_302 = { -849.0348f, 510.6906f, 89.8218f };
			Local_305 = { -849.0408f, 508.5767f, 89.8218f };
			Local_308 = { -846.1005f, 520.2202f, 89.6217f };
			Local_311 = { -851.8972f, 512.73f, 89.6217f };
			Local_314 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_326 = 92.365f;
			fLocal_327 = 293f;
			Local_323 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_328 = fLocal_327;
			break;
		
		case 8:
			Local_302 = { -28.2427f, -1555.892f, 29.6918f };
			Local_305 = { -24.8589f, -1556.846f, 29.6819f };
			Local_308 = { -41.8174f, -1575.609f, 28.2831f };
			Local_311 = { -25.3404f, -1556.341f, 29.6919f };
			Local_314 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_326 = 181.352f;
			fLocal_327 = 47.9206f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 9:
			Local_302 = { 3313.487f, 5175.831f, 18.619f };
			Local_305 = { 3310.816f, 5176.331f, 18.619f };
			Local_308 = { 3334.321f, 5161.122f, 17.2996f };
			Local_311 = { 3317.788f, 5171.707f, 17.4471f };
			Local_314 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_326 = 236.4579f;
			Local_323 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_328 = 310.8648f;
			break;
	}
}

int func_282()
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_337)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_283(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_287();
			}
			else
			{
				return 0;
			}
		}
		if (!func_286())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_287();
					}
					else
					{
						return 0;
					}
				}
				if (func_285())
				{
					if (!bParam2)
					{
						func_287();
					}
					else
					{
						return 0;
					}
				}
				if (func_284(155))
				{
					if (!bParam2)
					{
						func_287();
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
					func_287();
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
				func_287();
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
			func_287();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_284(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_285()
{
	return Global_2442442.f_571;
}

bool func_286()
{
	return Global_1315206;
}

void func_287()
{
	unk_0x78C587487CD40B92();
}

void func_288()
{
	unk_0x81C8659022413FE4(0);
	unk_0xE1A329E99CE31246();
	func_82();
	unk_0x715FC4B638D9A515();
	unk_0x322323456FCFAB4D(uLocal_301, 0);
	unk_0xE4EC3FD6A99953E8(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 1, 1);
	unk_0x1757D2CC022D31AD(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), true, 0);
	}
	unk_0x2D5A415AD869CB5F(false, 0, 3000, 1, 0, 0);
	if (unk_0xD3FACCDA4D66AEAD(uLocal_274[0]))
	{
		if (!unk_0x912AD5A10E7633F0(uLocal_274[0], 0))
		{
			if (!func_252(uLocal_333, 8192))
			{
				unk_0x971ED137B3AF56D8(uLocal_274[0], 1193033728, 0);
			}
			unk_0x77637031DE326F70(uLocal_274[0], 1);
			if (!unk_0x073DE561E3841ECF(iLocal_72))
			{
				unk_0xD8C3303D0A49D05B("BootyCall", &iLocal_72);
			}
			unk_0xFDDE2C1A05E64390(2, iLocal_72, joaat("player"));
			unk_0xFDDE2C1A05E64390(2, joaat("player"), iLocal_72);
			unk_0x65889F26F311FC55(uLocal_274[0], iLocal_72);
		}
		unk_0x0689C659BF2D3BF7(&(uLocal_274[0]));
	}
	if (iLocal_332 != -1)
	{
		func_290(&iLocal_332);
	}
	if (bLocal_71)
	{
		func_134(&uLocal_70);
	}
	unk_0xA34437D4AD022736(unk_0x0C1D3C552325765B(), 0);
	func_117(uLocal_76[0], -1);
	Global_100547 = 0;
	func_289(0);
	unk_0x78C587487CD40B92();
}

void func_289(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_214(iVar0, bParam0);
		iVar0++;
	}
}

void func_290(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35737)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35736 = 0;
	Global_35738 = 0;
	Global_35775 = 15;
	Global_55813 = 0;
	Global_55814 = 0;
}

