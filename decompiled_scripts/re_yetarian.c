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
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	struct<20> Local_47[2];
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	struct<3> Local_99 = { 0, 0, 0 } ;
	float fLocal_102 = 0f;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116[2] = { 0, 0 };
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_132[2];
	float fLocal_139[2] = { 0f, 0f };
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char[] cLocal_151[8] = 0;
	var uLocal_152 = 16;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
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
	float fVar0;
	int iVar1;
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
	iLocal_12 = 3;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_97 = -1;
	iLocal_98 = -1;
	iLocal_122 = joaat("p_amb_phone_01");
	Local_126 = { -35.607f, -1110.046f, 26.4364f };
	Local_129 = { -126.1154f, -1129.347f, 23.4329f };
	iLocal_143 = -1;
	iLocal_144 = -1;
	iLocal_145 = -1;
	iLocal_146 = -1;
	cLocal_151 = "REYE_AU";
	func_167(ScriptParam_0.f_1[0 /*3*/]);
	if (unk_0x9CEB376419A71A96(27))
	{
		func_166();
	}
	if (func_139(ScriptParam_0.f_1[0 /*3*/], 30, 0, 0, 0))
	{
		func_137(30);
	}
	else
	{
		unk_0xF5DF8F3392CDD07B();
	}
	func_124();
	while (true)
	{
		if (!func_123())
		{
			if (func_122())
			{
				func_94();
			}
		}
		if (unk_0x35BEE533650C4BBF("DEALERSHIP"))
		{
			if (unk_0xA472659498B908A8("DEALERSHIP"))
			{
				unk_0x9ECF8C009A69E945("DEALERSHIP", 0);
			}
		}
		fVar0 = (unk_0x92F9677C9C3C2C75() + 20f);
		if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Local_99) < (fVar0 * fVar0))
		{
			unk_0xEF5DD6187D500A2E();
		}
		if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Local_103) < (fVar0 * fVar0))
		{
			unk_0xEF5DD6187D500A2E();
		}
		if (unk_0x920167EE0888FA4E())
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				func_91(iVar1);
				iVar1++;
			}
			switch (iLocal_88)
			{
				case 0:
					func_73();
					break;
				
				case 1:
					func_55();
					break;
				
				case 2:
					func_3();
					break;
			}
		}
		else if (bLocal_120)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 2)
			{
				func_91(iVar2);
				iVar2++;
			}
			switch (iLocal_88)
			{
				case 0:
					func_73();
					break;
				
				case 1:
					func_55();
					break;
				
				case 2:
					func_3();
					break;
			}
			if (func_2(uLocal_90))
			{
				if (func_1(uLocal_90, unk_0x06736567F820A39E(), 1) > 120f)
				{
					func_94();
				}
			}
		}
		else
		{
			func_94();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

float func_1(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(uParam0, 0) };
	}
	if (!unk_0xBDA1F5E8A36BFA07(uParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(uParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, iParam2);
}

int func_2(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	switch (iLocal_89)
	{
		case 0:
			if (func_54())
			{
				iLocal_89 = 1;
			}
			func_53();
			break;
		
		case 1:
			func_53();
			if (func_2(uLocal_90))
			{
				if (func_52())
				{
					if (!iLocal_112)
					{
						iLocal_113 = 1;
						iLocal_108 = 1;
						unk_0x1F6717C33A02B7AC(uLocal_90);
						if (unk_0xC1EDB61CE0A4B94E(uLocal_94))
						{
							unk_0xF30CBC00D9F6D48D(&uLocal_94);
						}
						if (!bLocal_110)
						{
							if (!bLocal_111)
							{
								unk_0xD6763C9F81772BAE(&uLocal_147);
								unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 0, 2);
								unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 1500);
								unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 150f, -1, 0, 0);
								unk_0x6F275D9063DAF754(uLocal_147);
							}
							else
							{
								unk_0xD6763C9F81772BAE(&uLocal_147);
								unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 0, 2);
								unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 150f, -1, 0, 0);
								unk_0x6F275D9063DAF754(uLocal_147);
							}
							unk_0x457C4844450FF70E(uLocal_90, uLocal_147);
							unk_0xDD1A4EE55D86FE71(&uLocal_147);
							iLocal_112 = 1;
						}
						else
						{
							if (!bLocal_111)
							{
								unk_0xD6763C9F81772BAE(&uLocal_147);
								unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 0, 2);
								if (func_1(uLocal_90, unk_0x06736567F820A39E(), 1) <= 4f)
								{
									unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 1500);
								}
								unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 150f, -1, 1, 0);
								unk_0x6F275D9063DAF754(uLocal_147);
							}
							else
							{
								unk_0xD6763C9F81772BAE(&uLocal_147);
								unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 0, 2);
								unk_0xFEDD46326A41DB46(0, unk_0x06736567F820A39E(), 150f, -1, 1, 0);
								unk_0x6F275D9063DAF754(uLocal_147);
							}
							unk_0x457C4844450FF70E(uLocal_90, uLocal_147);
							unk_0xDD1A4EE55D86FE71(&uLocal_147);
							iLocal_112 = 1;
						}
					}
					else
					{
						func_35();
						unk_0x472B69600E9FC8CA(uLocal_90, 2f);
						if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(uLocal_90, 0), 1) >= 100f && !unk_0x7515D29C901C4E76(unk_0xF4745590D18D14B8(uLocal_90, 0), 3f))
						{
							unk_0xDAF1451794AD09A3(&uLocal_90);
						}
						if (Local_47[0 /*20*/].f_18 >= 5 && Local_47[1 /*20*/].f_18 >= 5)
						{
							func_4();
						}
					}
				}
				else
				{
					func_35();
					unk_0x472B69600E9FC8CA(uLocal_90, 2f);
					if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(uLocal_90, 0), 1) >= 100f && !unk_0x7515D29C901C4E76(unk_0xF4745590D18D14B8(uLocal_90, 0), 3f))
					{
						unk_0xDAF1451794AD09A3(&uLocal_90);
					}
					if (Local_47[0 /*20*/].f_18 >= 5 && Local_47[1 /*20*/].f_18 >= 5)
					{
						if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
						{
							func_4();
						}
					}
					if (func_2(uLocal_90))
					{
						unk_0xE736C729727B547E(uLocal_90, 60, 1);
					}
				}
			}
			else
			{
				if (unk_0xCDB4C4200A9B478A(uLocal_93))
				{
					unk_0x2239ED27B231AE2E(&uLocal_93);
				}
				if (unk_0xC1EDB61CE0A4B94E(uLocal_90))
				{
					if (unk_0xBDA1F5E8A36BFA07(uLocal_90, 0))
					{
						if (!iLocal_121)
						{
							iLocal_121 = 1;
						}
					}
				}
				iLocal_113 = 1;
				if (Local_47[0 /*20*/].f_18 >= 5 && Local_47[1 /*20*/].f_18 >= 5)
				{
					if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
					{
						func_4();
					}
				}
			}
			break;
	}
}

void func_4()
{
	func_34(&uLocal_90, 1, 0, 1);
	while (!func_33())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
	{
		unk_0xA83C44759382F7CE("SCRIPTED_SCANNER_REPORT_SIMEON_01", 0f);
	}
	func_8(-1, 0);
	func_5();
	func_94();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_91349.f_8)
	{
		if (Global_91349.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91349.f_10 > 1)
	{
		return 0;
	}
	Global_91349.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_30(iParam0))
	{
		func_29(iParam0, iParam1);
		if (!func_28(51))
		{
			func_19("RE_REWARD", 1, 0, 4000, 10000, func_22(), 0, 138, 0);
			func_18(51);
		}
		if (func_17(iParam0))
		{
			Global_101186.f_29596.f_2 = 3;
		}
		if (func_16(iParam0, iParam1) != 322)
		{
			func_10(func_16(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_101174 = iParam1;
		if (Global_101172 == 0)
		{
			if (((Global_101175 == 1 || Global_101175 == 5) || Global_101175 == 11) || Global_101175 == 25)
			{
				func_9(2);
			}
			else if ((Global_101175 == 26 || Global_101175 == 8) || Global_101175 == 17)
			{
				func_9(7);
			}
			else
			{
				func_9(1);
			}
		}
	}
}

void func_9(int iParam0)
{
	Global_101172 = iParam0;
}

void func_10(int iParam0, var uParam1, var uParam2)
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
		func_14((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101186.f_8960[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101186.f_8960[iParam0 /*12*/].f_6 == 11 || Global_101186.f_8960[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101186.f_8960[iParam0 /*12*/].f_5 = 1;
		Global_101186.f_8960[iParam0 /*12*/].f_10 = uParam1;
		Global_101186.f_8960[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_11();
	}
}

void func_11()
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
	Global_100922 = 0;
	Global_100923 = 0;
	Global_100924 = 0;
	Global_100925 = 0;
	Global_100926 = 0;
	Global_100927 = 0;
	Global_100928 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101186.f_8960.f_3853;
	Global_101186.f_8960.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101186.f_8960[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101186.f_8960[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100922++;
					fVar1 = (fVar1 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100923++;
					fVar2 = (fVar2 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100924++;
					fVar3 = (fVar3 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100925++;
					fVar4 = (fVar4 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100926++;
					fVar5 = (fVar5 + (Global_101186.f_8960[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100927++;
					fVar6 = (fVar6 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100928++;
					fVar7 = (fVar7 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100905 > 0)
	{
		if (Global_100922 == Global_100905)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100906 > 0)
	{
		if (Global_100923 == Global_100906)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100907 > 0)
	{
		if (Global_100924 == Global_100907)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100908 > 0)
	{
		if (Global_100925 == Global_100908)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100909 > 0)
	{
		if (((Global_100926 == Global_100909 || (Global_100909 * 10 / Global_100926) < 41) || Global_100926 > Global_100912) || Global_100926 == Global_100912)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_101186.f_8960.f_3856, 14))
			{
				if (Global_100926 == Global_100909)
				{
					unk_0x1B6939A0FB3A66B3(joaat("num_rndevents_completed"), Global_100909, 0);
					unk_0xE27C8E42A97895CF(&(Global_101186.f_8960.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100910 > 0)
	{
		if (Global_100927 == Global_100910)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100911 > 0)
	{
		if (Global_100928 == Global_100911)
		{
			fVar7 = 5f;
		}
	}
	Global_101186.f_8960.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100926 > Global_100912 || Global_100926 == Global_100912)
	{
		iVar9 = Global_100912;
	}
	else
	{
		iVar9 = Global_100926;
	}
	unk_0x57B5A527FBAC251E(joaat("num_missions_completed"), Global_100922, 1);
	unk_0x57B5A527FBAC251E(joaat("num_missions_available"), Global_100905, 1);
	unk_0x57B5A527FBAC251E(joaat("num_minigames_completed"), Global_100923, 1);
	unk_0x57B5A527FBAC251E(joaat("num_minigames_available"), Global_100906, 1);
	unk_0x57B5A527FBAC251E(joaat("num_oddjobs_completed"), Global_100924, 1);
	unk_0x57B5A527FBAC251E(joaat("num_oddjobs_available"), Global_100907, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndpeople_completed"), Global_100925, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndpeople_available"), Global_100908, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndevents_available"), Global_100912, 1);
	unk_0x57B5A527FBAC251E(joaat("num_misc_completed"), (Global_100928 + Global_100927), 1);
	unk_0x57B5A527FBAC251E(joaat("num_misc_available"), (Global_100911 + Global_100910), 1);
	Global_100929 = (Global_100922 * 100 / Global_100905);
	Global_100931 = ((Global_100924 + Global_100923) * 100 / (Global_100907 + Global_100906));
	Global_100930 = ((Global_100925 + iVar9) * 100 / (Global_100908 + Global_100912));
	Global_100932 = ((Global_100927 + Global_100928) * 100 / (Global_100910 + Global_100911));
	unk_0x81278411EC120DEA(joaat("total_progress_made"), Global_101186.f_8960.f_3853, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_story_missions"), Global_100929, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_ambient_missions"), Global_100930, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_oddjobs"), Global_100931, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853))
	{
		func_13(13, unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853));
	}
	if (!unk_0xD67AADBB828CC3BE())
	{
		if (!Global_69521)
		{
			if (func_12() == 2 == 0 && !unk_0x17CC0D5008835470())
			{
				if (unk_0x614D6A182129DE96())
				{
					Global_100920 = 0;
				}
				if (!Global_55780)
				{
					func_6();
				}
			}
		}
	}
}

int func_12()
{
	return Global_25152;
}

int func_13(int iParam0, int iParam1)
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
	iVar0 = unk_0x752CB313BE10D01F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEFFB38447380C1DE(iParam0, iParam1);
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xEBF0170044DAFCC1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x962F55EEC297B13E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xEBF0170044DAFCC1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x962F55EEC297B13E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xEBF0170044DAFCC1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x962F55EEC297B13E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xEBF0170044DAFCC1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x962F55EEC297B13E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x57523A7BBB9C991D((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x962F55EEC297B13E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x57523A7BBB9C991D((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x962F55EEC297B13E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1DE02059C7818E12((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x962F55EEC297B13E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1DE02059C7818E12((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x962F55EEC297B13E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1DE02059C7818E12((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x962F55EEC297B13E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x1DE02059C7818E12((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x962F55EEC297B13E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x1DE02059C7818E12((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x962F55EEC297B13E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_15()
{
	return Global_1312747;
}

int func_16(int iParam0, int iParam1)
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

int func_17(int iParam0)
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

void func_18(int iParam0)
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
		unk_0xE27C8E42A97895CF(&(Global_101186.f_25011.f_150[iVar1]), iVar0);
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_20(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_20(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2F6869889D97DFED(sParam0, ""))
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
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x2F6869889D97DFED(&(Global_101186.f_25011[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101186.f_25011.f_145 < 9)
	{
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_4), sParam1, 16);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_8 = (unk_0x1ADBAAC322D61F73() + iParam3);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_9 = iParam5;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_11 = iParam6;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_12 = uParam2;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_13 = iParam7;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_14 = iParam8;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = ((unk_0x1ADBAAC322D61F73() + iParam3) + iParam4);
		}
		else
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = -1;
		}
		Global_101186.f_25011.f_145++;
		func_21();
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101186.f_25011.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[0])
			{
				Global_101186.f_25011.f_146[0] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[1])
			{
				Global_101186.f_25011.f_146[1] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[2])
			{
				Global_101186.f_25011.f_146[2] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_22()
{
	func_23();
	switch (Global_101186.f_1902.f_539.f_3549)
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

void func_23()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_27(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_26(unk_0x06736567F820A39E());
			if (func_25(iVar0) && (!func_24(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_25(Global_101186.f_1902.f_539.f_3549))
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

bool func_24(int iParam0)
{
	return Global_35742 == iParam0;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_28(int iParam0)
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
		return unk_0x7DA173D4FD42F36B(Global_101186.f_25011.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_29(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_101186.f_29596.f_8[iParam0]), iParam1);
}

int func_30(int iParam0)
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

int func_31()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x47B34031F915C179(), 64);
	uVar16 = func_32(Var0);
	return uVar16;
}

int func_32(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x9F7CDE7B20BCB675(&cParam0))
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

int func_33()
{
	return 1;
}

void func_34(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xCFC04A38F256EE06(*uParam0))
		{
			unk_0x215FFA3EE011BA3C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFB31564A849CEAF4(*uParam0);
			}
			unk_0x97C5D2BB8E47131D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xBA63517ADBC1E5E3(*uParam0, 0);
			}
		}
		unk_0x5318F6C4C2B82FA7(uParam0);
	}
}

void func_35()
{
	if (iLocal_114 == 0)
	{
		if (!func_51())
		{
			if (func_2(Local_47[0 /*20*/].f_1))
			{
				func_50(&uLocal_152, 5, Local_47[0 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else if (func_2(Local_47[1 /*20*/].f_1))
			{
				func_50(&uLocal_152, 5, Local_47[1 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else
			{
				iLocal_114 = 1;
				iLocal_115 = 1;
			}
			if (iLocal_114 == 0)
			{
				if (func_49() == 0)
				{
					if (func_38(&uLocal_152, cLocal_151, "RE_YETA_MIKE", 7, 0, 0, 0))
					{
						iLocal_114 = 1;
					}
				}
				else if (func_38(&uLocal_152, cLocal_151, "RE_YETA_FRAN", 7, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
		}
	}
	else if (iLocal_115 == 0)
	{
		if (!func_51())
		{
			if (func_2(Local_47[0 /*20*/].f_1))
			{
				func_36(Local_47[0 /*20*/].f_1, "FIGHT", 34);
				iLocal_115 = 1;
			}
			else if (func_2(Local_47[1 /*20*/].f_1))
			{
				func_36(Local_47[1 /*20*/].f_1, "FIGHT", 34);
				iLocal_115 = 1;
			}
			else
			{
				iLocal_115 = 1;
			}
		}
	}
}

void func_36(var uParam0, char* sParam1, int iParam2)
{
	unk_0x6057437695115495(uParam0, sParam1, func_37(iParam2), 1);
}

int func_37(int iParam0)
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

bool func_38(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_48(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_39(sParam2, iParam3, 0);
}

int func_39(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xC48487554D051523(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_47();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x97D4BC3047CEF5DE())
		{
			return 0;
		}
		if (func_46(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_45();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x99BCB15F954AF579(&Global_2283, 20);
			unk_0x99BCB15F954AF579(&Global_2284, 17);
			unk_0x99BCB15F954AF579(&Global_2285, 0);
			if (bParam2)
			{
				func_44();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (func_43())
				{
					return 0;
				}
				if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x5378344F881C2B51(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x206A3BB6682CBCBD(unk_0x06736567F820A39E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69521)
				{
					if (unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
					if (unk_0x973D428626B4A21D(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x4AEBCDB39031E1D4(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
				}
			}
			if (func_42())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
				{
					return 0;
				}
			}
			func_41();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_40();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_47();
	}
	return 0;
}

void func_40()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC48487554D051523(0);
	Global_15712 = 1;
}

void func_41()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x99BCB15F954AF579(&Global_2284, 16);
}

int func_42()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_43()
{
	int iVar0;
	int iVar1;
	
	if (Global_69521)
	{
		iVar0 = 0;
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar1, 1);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA0AA34E1398E91E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x8FE2FBDA23507F78(unk_0x06736567F820A39E(), 78, 1))
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

void func_44()
{
	if (func_24(14))
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
		Global_14413 = func_49();
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

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_46(int iParam0, int iParam1)
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

void func_47()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if ((unk_0x1FB728BC68674B71() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

void func_48(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_49()
{
	func_23();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_50(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(uParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(uParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(uParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(uParam2, 1);
			}
		}
	}
}

int func_51()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

int func_52()
{
	if (func_2(uLocal_90))
	{
		if (!bLocal_110)
		{
			if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(uLocal_90, 0), 1) <= 7f || unk_0xFB900D9EE2ACC400(uLocal_90, 242628503) == 7)
			{
				if (!iLocal_112)
				{
					if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(uLocal_90, 0), 1) <= 7f)
					{
					}
					if (unk_0xFB900D9EE2ACC400(uLocal_90, 242628503) == 7)
					{
					}
				}
				return 1;
			}
		}
		else if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(uLocal_90, 0), 1) <= 4.5f || unk_0xFB900D9EE2ACC400(uLocal_90, 242628503) == 7)
		{
			if (!iLocal_112)
			{
				if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(uLocal_90, 0), 1) <= 4.5f)
				{
				}
				if (unk_0xFB900D9EE2ACC400(uLocal_90, 242628503) == 7)
				{
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	if (func_2(uLocal_90))
	{
		if (unk_0x46E9388908C80483(uLocal_90, "cellphone@", "cellphone_call_out", 3))
		{
			if (unk_0xD26997147908D65E(uLocal_90, "cellphone@", "cellphone_call_out") >= 0.24f)
			{
				if (unk_0xC1EDB61CE0A4B94E(uLocal_94))
				{
					unk_0xF30CBC00D9F6D48D(&uLocal_94);
				}
			}
		}
	}
}

int func_54()
{
	int iVar0;
	
	iVar0 = unk_0xED1A87B65DEE4375(Local_47[0 /*20*/].f_10);
	if (iVar0 != 0)
	{
		unk_0x31492A8A3D9F1577(iVar0);
		if (unk_0xD9A81E12D87866A2(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_55()
{
	switch (iLocal_89)
	{
		case 0:
			iLocal_89 = 1;
			break;
		
		case 1:
			if (func_54())
			{
				if (!unk_0x1A7559C163191E43(-1831288286))
				{
					unk_0x19159DE69BA38661(-1831288286, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, 1, 1, 0);
				}
				else if (unk_0x998C441B6F3E23CC(-1831288286) < 1f)
				{
					unk_0x984B8C8F27BED7C9(-1831288286, 1f, 0, 0);
					unk_0xA78E2D8D6ED49B05(-1831288286, 1, 0, 1);
				}
			}
			func_53();
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				if (func_2(uLocal_91) || func_2(uLocal_92))
				{
					if (func_59())
					{
						if (iLocal_119 == 0)
						{
							if (bLocal_109)
							{
								unk_0x1F6717C33A02B7AC(uLocal_90);
								unk_0xD6763C9F81772BAE(&uLocal_147);
								unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 12, 2);
								unk_0x28B5966B12DC5B0F(0, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
								unk_0x6F275D9063DAF754(uLocal_147);
								unk_0x457C4844450FF70E(uLocal_90, uLocal_147);
								unk_0xDD1A4EE55D86FE71(&uLocal_147);
							}
							else
							{
								unk_0x1F6717C33A02B7AC(uLocal_90);
								unk_0xD6763C9F81772BAE(&uLocal_147);
								unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 12, 2);
								unk_0x28B5966B12DC5B0F(0, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
								unk_0x6F275D9063DAF754(uLocal_147);
								unk_0x457C4844450FF70E(uLocal_90, uLocal_147);
								unk_0xDD1A4EE55D86FE71(&uLocal_147);
							}
							bLocal_120 = true;
							iLocal_119 = 1;
						}
						if (!bLocal_110 && !bLocal_109)
						{
							if (iLocal_97 == -1)
							{
								iLocal_97 = unk_0x1ADBAAC322D61F73();
							}
							if (iLocal_98 == -1)
							{
								iLocal_98 = 4000;
							}
						}
						else
						{
							if (iLocal_97 == -1)
							{
								iLocal_97 = unk_0x1ADBAAC322D61F73();
							}
							if (iLocal_98 == -1)
							{
								iLocal_98 = 1000;
							}
						}
						if (iLocal_97 != -1 && iLocal_98 != 1)
						{
							if ((unk_0x1ADBAAC322D61F73() - iLocal_97) >= iLocal_98)
							{
								func_56();
								unk_0x25B97FB8615971D6("RE9_SPOTTED");
								iLocal_107 = 1;
								iLocal_89 = 2;
							}
						}
					}
				}
				else
				{
					if (unk_0xCDB4C4200A9B478A(uLocal_93))
					{
						unk_0x2239ED27B231AE2E(&uLocal_93);
					}
					if (unk_0xC1EDB61CE0A4B94E(uLocal_90))
					{
						if (unk_0xBDA1F5E8A36BFA07(uLocal_90, 0))
						{
							if (!iLocal_121)
							{
								iLocal_121 = 1;
							}
						}
					}
					iLocal_113 = 1;
					if (Local_47[0 /*20*/].f_18 >= 5 && Local_47[1 /*20*/].f_18 >= 5)
					{
						if (!unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
						{
							func_4();
						}
					}
				}
			}
			break;
		
		case 2:
			iLocal_88 = 2;
			iLocal_89 = 0;
			break;
	}
}

void func_56()
{
	if (func_49() == 1)
	{
		func_50(&uLocal_152, 1, unk_0x06736567F820A39E(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_50(&uLocal_152, 0, unk_0x06736567F820A39E(), "MICHAEL", 0, 1);
	}
	func_50(&uLocal_152, 4, uLocal_90, "SIMEON", 0, 1);
	if (bLocal_111)
	{
		func_38(&uLocal_152, cLocal_151, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
	else if (bLocal_109)
	{
		func_38(&uLocal_152, cLocal_151, "RE_YETA_EXT", 7, 1, 0, 0);
	}
	else if (func_57())
	{
		if (func_49() == 0)
		{
			func_38(&uLocal_152, cLocal_151, "RE_YETAM", 7, 0, 0, 0);
		}
		else if (func_49() == 1)
		{
			func_38(&uLocal_152, cLocal_151, "RE_YETAF", 7, 0, 0, 0);
		}
	}
	else
	{
		func_38(&uLocal_152, cLocal_151, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
}

int func_57()
{
	if ((((((((func_58(unk_0x06736567F820A39E()) != joaat("weapon_unarmed") && func_58(unk_0x06736567F820A39E()) != joaat("object")) && func_58(unk_0x06736567F820A39E()) != joaat("weapon_knife")) && func_58(unk_0x06736567F820A39E()) != joaat("weapon_nightstick")) && func_58(unk_0x06736567F820A39E()) != joaat("weapon_hammer")) && func_58(unk_0x06736567F820A39E()) != joaat("weapon_bat")) && func_58(unk_0x06736567F820A39E()) != joaat("weapon_crowbar")) && func_58(unk_0x06736567F820A39E()) != joaat("weapon_golfclub")) && func_58(unk_0x06736567F820A39E()) != joaat("weapon_bottle"))
	{
		if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			return 0;
		}
		else if (unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
		{
			return 0;
		}
	}
	return 1;
}

int func_58(var uParam0)
{
	var uVar0;
	
	unk_0x47BF380FF078FA9F(uParam0, &uVar0, 1);
	return uVar0;
}

int func_59()
{
	if (!unk_0x88A9836BE9047AA2(Local_126, Local_129) && !(unk_0xD42729B812AEAF19(-61.01321f, -1093.393f, 25.75297f, 2f, 0, 1, 0, 0, 0, 0, 0) && unk_0xD42729B812AEAF19(-38.59683f, -1109.284f, 25.68742f, 2f, 0, 1, 0, 0, 0, 0, 0)))
	{
		if (unk_0x0A91C32B05E9D7D4(unk_0x06736567F820A39E()) == unk_0x9F7CDE7B20BCB675("rm_showroom"))
		{
			if (!func_123())
			{
				if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -41.19015f, -1104.137f, 24.42232f, -33.7943f, -1107.183f, 28.67232f, 8.5f, 0, 1, 0))
				{
					bLocal_110 = true;
					func_71(0);
				}
				else
				{
					bLocal_110 = false;
					func_71(1);
				}
				func_61(1);
			}
			return 1;
		}
	}
	else if (unk_0x88A9836BE9047AA2(Local_126, Local_129) || (unk_0xD42729B812AEAF19(-61.01321f, -1093.393f, 25.75297f, 2f, 0, 1, 0, 0, 0, 0, 0) && unk_0xD42729B812AEAF19(-38.59683f, -1109.284f, 25.68742f, 2f, 0, 1, 0, 0, 0, 0, 0)))
	{
		if (unk_0x0A91C32B05E9D7D4(unk_0x06736567F820A39E()) == unk_0x9F7CDE7B20BCB675("rm_showroom"))
		{
			func_34(&(Local_47[0 /*20*/].f_1), 1, 0, 1);
			func_34(&(Local_47[1 /*20*/].f_1), 1, 0, 1);
			func_60(&uLocal_92);
			func_60(&uLocal_91);
			func_94();
		}
	}
	return 0;
}

void func_60(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(*uParam0, 0))
		{
			unk_0x215FFA3EE011BA3C(*uParam0, 0);
		}
		if (!unk_0xC9A01F9792B3D486(*uParam0))
		{
			unk_0xB7E6C6AE18F1EDA6(*uParam0, 1, 0);
		}
		unk_0xDAF1451794AD09A3(uParam0);
	}
}

int func_61(int iParam0)
{
	if (func_65())
	{
		Global_101176 = 1;
		Global_101173 = unk_0x1ADBAAC322D61F73();
		if (func_17(Global_101175))
		{
			func_62(0);
		}
		unk_0xEEAF3825AA9B5231(1, "RE_TITLE");
		if (iParam0 && func_17(Global_101175))
		{
			unk_0xCB8EBF02739FC8EA();
		}
		return 1;
	}
	return 0;
}

void func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101186.f_29596.f_2 < 3)
			{
				if (!unk_0x02EB4679E7E8BC81())
				{
					func_63(func_64(iParam0), -1);
					Global_101186.f_29596.f_2++;
					unk_0xE27C8E42A97895CF(&Global_101182, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x7DA173D4FD42F36B(Global_101182, 1))
			{
				if (!unk_0x02EB4679E7E8BC81())
				{
					func_63(func_64(iParam0), -1);
					Global_101186.f_29596.f_3++;
					unk_0xE27C8E42A97895CF(&Global_101182, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x7DA173D4FD42F36B(Global_101182, 2))
			{
				if (!unk_0x02EB4679E7E8BC81())
				{
					func_63(func_64(iParam0), -1);
					Global_101186.f_29596.f_4++;
					unk_0xE27C8E42A97895CF(&Global_101182, 2);
				}
			}
			break;
	}
}

void func_63(var uParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(uParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam1);
}

char* func_64(int iParam0)
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

int func_65()
{
	switch (func_66(&Global_25211, 0, 5, 0, unk_0xAE832DCCE9CD3242()))
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

int func_66(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89121.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_70(0))
		{
			return 0;
		}
		Global_35706++;
		*uParam0 = Global_35706;
		unk_0xFEC8E17ADA862FEA(unk_0xBC628C78D8ECD5F1(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x0C174B9E4848D171(8);
		}
		Global_35742 = iParam2;
		Global_35704 = *uParam0;
		Global_35705 = iParam4;
		Global_35703 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35703 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35703)
			{
				if (Global_35709[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35704 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_68(iParam2))
		{
			return 0;
		}
		if (Global_35703 == 8)
		{
			return 0;
		}
		Global_35706++;
		*uParam0 = Global_35706;
		Global_35709[Global_35703 /*4*/] = Global_35706;
		Global_35709[Global_35703 /*4*/].f_1 = iParam1;
		Global_35709[Global_35703 /*4*/].f_2 = iParam2;
		Global_35709[Global_35703 /*4*/].f_3 = 0;
		Global_35703++;
		if (iParam4 != 0)
		{
			func_67(uParam0, iParam4);
		}
	}
	return 2;
}

void func_67(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35703 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35703)
	{
		if (Global_35709[iVar0 /*4*/] == *uParam0)
		{
			Global_35709[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_68(int iParam0)
{
	return func_69(iParam0, Global_35742);
}

int func_69(int iParam0, int iParam1)
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

int func_70(int iParam0)
{
	if (Global_35742 == 15)
	{
		return 0;
	}
	if (func_68(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		if (func_2(uLocal_92))
		{
			unk_0x13B79909077BBD84(uLocal_92, 1, 0);
			unk_0x93F4FB97D1F2E7A1(uLocal_92, 0);
			unk_0x6FB44A9D2C537B29(uLocal_92, 1);
			uLocal_90 = uLocal_92;
			uLocal_94 = uLocal_96;
			func_60(&uLocal_91);
			func_72(&uLocal_95);
		}
	}
	else if (func_2(uLocal_91))
	{
		unk_0x13B79909077BBD84(uLocal_91, 1, 0);
		unk_0x93F4FB97D1F2E7A1(uLocal_91, 0);
		unk_0x6FB44A9D2C537B29(uLocal_91, 1);
		uLocal_90 = uLocal_91;
		uLocal_94 = uLocal_95;
		func_60(&uLocal_92);
		func_72(&uLocal_96);
	}
}

void func_72(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (unk_0xCC30869D6AB6D4ED(*uParam0))
		{
			unk_0xD02CD3284DDA0268(*uParam0, 1, 1);
		}
		unk_0xF30CBC00D9F6D48D(uParam0);
	}
}

void func_73()
{
	switch (iLocal_89)
	{
		case 0:
			if (func_90())
			{
				iLocal_89 = 1;
			}
			else if (func_78())
			{
				func_94();
			}
			unk_0x41BBA77D020A0CEB(-51.89f, -1097.35f, 23.42f, -45.71f, -1092.1f, 27.42f, 0, 1);
			unk_0x18FA64B82A64141F(-53.57574f, -1095.356f, 24.17232f, -46.52551f, -1094.587f, 27.42232f, 3.75f, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			if (!func_2(uLocal_91) || !func_2(uLocal_92))
			{
				func_75(&uLocal_91, 18, Local_99, fLocal_102, 1);
				if (func_2(uLocal_91))
				{
					unk_0x13B79909077BBD84(uLocal_91, 0, 0);
					unk_0x6FB44A9D2C537B29(uLocal_91, 0);
					unk_0xA26A1133034ECD59(uLocal_91, 0);
					unk_0xBA63517ADBC1E5E3(uLocal_91, 1);
					unk_0xDEA5F99894469373(uLocal_91, iLocal_150);
					unk_0x1BBC7C4B775BFAAD(uLocal_91, 1);
					unk_0xF0683EF788D4342B(uLocal_91, joaat("weapon_pistol"), 999, 0, 0);
					unk_0xEA839C4667740EDE(uLocal_91, 0, iLocal_148);
					unk_0x054CBFE90FAA6840(5, iLocal_148, joaat("player"));
					unk_0x215FFA3EE011BA3C(uLocal_91, 1);
					unk_0x6553935614875699(uLocal_91, 104, 1);
					uLocal_95 = unk_0xE6B4261E1DAB4EE0(iLocal_122, unk_0xF4745590D18D14B8(uLocal_91, 1), 1, 1, 0);
					unk_0x4819029CE8AA1780(uLocal_95, uLocal_91, unk_0x1E8E6BB8337EDD5C(uLocal_91, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					unk_0xD6763C9F81772BAE(&uLocal_147);
					unk_0x28B5966B12DC5B0F(0, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x28B5966B12DC5B0F(0, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x28B5966B12DC5B0F(0, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x28B5966B12DC5B0F(0, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x344E2ACA7B8D1157(uLocal_147, 1);
					unk_0x6F275D9063DAF754(uLocal_147);
					unk_0x457C4844450FF70E(uLocal_91, uLocal_147);
					unk_0xDD1A4EE55D86FE71(&uLocal_147);
					unk_0x93F4FB97D1F2E7A1(uLocal_91, 1);
				}
				func_75(&uLocal_92, 18, Local_103, fLocal_106, 1);
				if (func_2(uLocal_92))
				{
					unk_0x13B79909077BBD84(uLocal_92, 0, 0);
					unk_0x6FB44A9D2C537B29(uLocal_92, 0);
					unk_0xA26A1133034ECD59(uLocal_92, 0);
					unk_0xBA63517ADBC1E5E3(uLocal_92, 1);
					unk_0xDEA5F99894469373(uLocal_92, iLocal_150);
					unk_0x1BBC7C4B775BFAAD(uLocal_92, 1);
					unk_0xF0683EF788D4342B(uLocal_92, joaat("weapon_pistol"), 999, 0, 0);
					unk_0xEA839C4667740EDE(uLocal_92, 0, iLocal_148);
					unk_0x054CBFE90FAA6840(5, iLocal_148, joaat("player"));
					unk_0x215FFA3EE011BA3C(uLocal_92, 1);
					unk_0x6553935614875699(uLocal_92, 104, 1);
					uLocal_96 = unk_0xE6B4261E1DAB4EE0(iLocal_122, unk_0xF4745590D18D14B8(uLocal_92, 1), 1, 1, 0);
					unk_0x4819029CE8AA1780(uLocal_96, uLocal_92, unk_0x1E8E6BB8337EDD5C(uLocal_92, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					unk_0xD6763C9F81772BAE(&uLocal_147);
					unk_0x28B5966B12DC5B0F(0, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x28B5966B12DC5B0F(0, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x28B5966B12DC5B0F(0, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x28B5966B12DC5B0F(0, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x344E2ACA7B8D1157(uLocal_147, 1);
					unk_0x6F275D9063DAF754(uLocal_147);
					unk_0x457C4844450FF70E(uLocal_92, uLocal_147);
					unk_0xDD1A4EE55D86FE71(&uLocal_147);
					unk_0x93F4FB97D1F2E7A1(uLocal_91, 1);
				}
			}
			else
			{
				func_74();
				uLocal_123 = unk_0x75409DE1FC985A9D(joaat("baller2"), -46.2722f, -1097.466f, 25.42f, 112.5363f, 1, 1);
				unk_0x5B9D79C27A5B31DC(uLocal_123, 7);
				unk_0xAEFEBAA3958B88B9(uLocal_123, 3);
				unk_0x818E8D7BA45E01E7(uLocal_123, 2);
				unk_0xE83B8F1B51D85699(uLocal_123, 0);
				uLocal_124 = unk_0x75409DE1FC985A9D(joaat("tailgater"), -41.07354f, -1099.567f, 25.42f, 138.4292f, 1, 1);
				unk_0x5B9D79C27A5B31DC(uLocal_124, 12);
				unk_0x818E8D7BA45E01E7(uLocal_124, 2);
				unk_0xE83B8F1B51D85699(uLocal_124, 0);
				uLocal_125 = unk_0x75409DE1FC985A9D(joaat("bjxl"), -36.74456f, -1101.583f, 25.42f, 155.1573f, 1, 1);
				unk_0x5B9D79C27A5B31DC(uLocal_125, 4);
				unk_0xAEFEBAA3958B88B9(uLocal_125, 3);
				unk_0x818E8D7BA45E01E7(uLocal_125, 2);
				unk_0xE83B8F1B51D85699(uLocal_125, 0);
				iLocal_89 = 2;
			}
			break;
		
		case 2:
			iLocal_88 = 1;
			iLocal_89 = 0;
			break;
	}
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_47[iVar0 /*20*/].f_18 = 1;
		iVar0++;
	}
}

int func_75(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_25(iParam1))
	{
		iVar0 = func_77(iParam1);
		unk_0xBECC89ACB4E5D4ED(iVar0);
		if (unk_0x5C9FE32E2FF37989(iVar0))
		{
			if (unk_0xC1EDB61CE0A4B94E(*uParam0))
			{
				unk_0xDAF1451794AD09A3(uParam0);
			}
			*uParam0 = unk_0xB500796AAD639F82(26, iVar0, Param2, fParam5, 0, 0);
			unk_0x6DF76F53F418FB2D(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xBD5A2DDC459E90C6(*uParam0, 3) == 0)
				{
					unk_0x47222A663B914109(*uParam0, 5, 2, 0, 0);
				}
			}
			func_76(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x0B87AFC0B2EECA19(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_76(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_87477[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_77(int iParam0)
{
	if (!func_25(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_78()
{
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_89())
		{
			return 0;
		}
	}
	if (func_85())
	{
		return 1;
	}
	if (func_79(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_79(float fParam0, bool bParam1)
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
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (func_25(func_49()))
		{
			iVar36 = func_22();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_17340[iVar32 /*6*/], 2) && !unk_0x7DA173D4FD42F36B(Global_101186.f_17340[iVar32 /*6*/], 3))
				{
					func_80(iVar32, &Var0);
					fVar35 = unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var0.f_6, 1);
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

void func_80(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_81(uParam1, "Abigail1", func_83(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 1:
			func_81(uParam1, "Abigail2", func_83(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 2:
			func_81(uParam1, "Barry1", func_83(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 3:
			func_81(uParam1, "Barry2", func_83(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_82(iParam0), 1, 1);
			break;
		
		case 4:
			func_81(uParam1, "Barry3", func_83(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 5:
			func_81(uParam1, "Barry3A", func_83(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 6:
			func_81(uParam1, "Barry3C", func_83(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 7:
			func_81(uParam1, "Barry4", func_83(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_82(iParam0), 0, 0);
			break;
		
		case 8:
			func_81(uParam1, "Dreyfuss1", func_83(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 9:
			func_81(uParam1, "Epsilon1", func_83(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 10:
			func_81(uParam1, "Epsilon2", func_83(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 11:
			func_81(uParam1, "Epsilon3", func_83(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 12:
			func_81(uParam1, "Epsilon4", func_83(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 13:
			func_81(uParam1, "Epsilon5", func_83(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 14:
			func_81(uParam1, "Epsilon6", func_83(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 15:
			func_81(uParam1, "Epsilon7", func_83(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 16:
			func_81(uParam1, "Epsilon8", func_83(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 17:
			func_81(uParam1, "Extreme1", func_83(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 18:
			func_81(uParam1, "Extreme2", func_83(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 19:
			func_81(uParam1, "Extreme3", func_83(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 20:
			func_81(uParam1, "Extreme4", func_83(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 21:
			func_81(uParam1, "Fanatic1", func_83(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_82(iParam0), 1, 0);
			break;
		
		case 22:
			func_81(uParam1, "Fanatic2", func_83(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_82(iParam0), 1, 0);
			break;
		
		case 23:
			func_81(uParam1, "Fanatic3", func_83(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_82(iParam0), 0, 1);
			break;
		
		case 24:
			func_81(uParam1, "Hao1", func_83(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_82(iParam0), 0, 1);
			break;
		
		case 25:
			func_81(uParam1, "Hunting1", func_83(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 26:
			func_81(uParam1, "Hunting2", func_83(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 27:
			func_81(uParam1, "Josh1", func_83(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 28:
			func_81(uParam1, "Josh2", func_83(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_82(iParam0), 1, 1);
			break;
		
		case 29:
			func_81(uParam1, "Josh3", func_83(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_82(iParam0), 1, 1);
			break;
		
		case 30:
			func_81(uParam1, "Josh4", func_83(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 31:
			func_81(uParam1, "Maude1", func_83(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 32:
			func_81(uParam1, "Minute1", func_83(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 33:
			func_81(uParam1, "Minute2", func_83(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 34:
			func_81(uParam1, "Minute3", func_83(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 35:
			func_81(uParam1, "MrsPhilips1", func_83(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 36:
			func_81(uParam1, "MrsPhilips2", func_83(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 37:
			func_81(uParam1, "Nigel1", func_83(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 38:
			func_81(uParam1, "Nigel1A", func_83(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_82(iParam0), 1, 1);
			break;
		
		case 39:
			func_81(uParam1, "Nigel1B", func_83(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_82(iParam0), 1, 1);
			break;
		
		case 40:
			func_81(uParam1, "Nigel1C", func_83(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_82(iParam0), 1, 1);
			break;
		
		case 41:
			func_81(uParam1, "Nigel1D", func_83(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_82(iParam0), 1, 1);
			break;
		
		case 42:
			func_81(uParam1, "Nigel2", func_83(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_82(iParam0), 1, 1);
			break;
		
		case 43:
			func_81(uParam1, "Nigel3", func_83(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_82(iParam0), 1, 1);
			break;
		
		case 44:
			func_81(uParam1, "Omega1", func_83(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 45:
			func_81(uParam1, "Omega2", func_83(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 46:
			func_81(uParam1, "Paparazzo1", func_83(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 47:
			func_81(uParam1, "Paparazzo2", func_83(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 48:
			func_81(uParam1, "Paparazzo3", func_83(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 49:
			func_81(uParam1, "Paparazzo3A", func_83(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 50:
			func_81(uParam1, "Paparazzo3B", func_83(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 51:
			func_81(uParam1, "Paparazzo4", func_83(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 52:
			func_81(uParam1, "Rampage1", func_83(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 54:
			func_81(uParam1, "Rampage3", func_83(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 55:
			func_81(uParam1, "Rampage4", func_83(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 56:
			func_81(uParam1, "Rampage5", func_83(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_82(iParam0), 0, 0);
			break;
		
		case 53:
			func_81(uParam1, "Rampage2", func_83(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_82(iParam0), 1, 0);
			break;
		
		case 57:
			func_81(uParam1, "TheLastOne", func_83(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 58:
			func_81(uParam1, "Tonya1", func_83(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 59:
			func_81(uParam1, "Tonya2", func_83(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 60:
			func_81(uParam1, "Tonya3", func_83(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 61:
			func_81(uParam1, "Tonya4", func_83(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		case 62:
			func_81(uParam1, "Tonya5", func_83(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_82(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_81(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_82(int iParam0)
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

struct<2> func_83(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_84(iParam0) };
	if (unk_0x226FA58470A21AEF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_84(int iParam0)
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

int func_85()
{
	if (func_88() && !func_89())
	{
		return 1;
	}
	if (func_87() && func_86())
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return Global_100904 > 0;
}

int func_87()
{
	if (Global_88565 != -1)
	{
		return 1;
	}
	return 0;
}

int func_88()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 20);
	}
	return 0;
}

int func_89()
{
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x02DE5BF2453C475D() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_90()
{
	if (((((((((((unk_0x5C9FE32E2FF37989(Local_47[0 /*20*/]) && unk_0x5C9FE32E2FF37989(Local_47[1 /*20*/])) && unk_0xBE17C5B77DABDDAB(Local_47[0 /*20*/].f_17)) && unk_0xBE17C5B77DABDDAB(Local_47[1 /*20*/].f_17)) && func_54()) && unk_0x7B43775D6E0D7325("cellphone@")) && unk_0x7B43775D6E0D7325("cellphone@str")) && unk_0x2AC46029737589CC("reyetarian_simeonoffice")) && unk_0x5C9FE32E2FF37989(iLocal_122)) && unk_0x5C9FE32E2FF37989(joaat("bjxl"))) && unk_0x5C9FE32E2FF37989(joaat("tailgater"))) && unk_0x5C9FE32E2FF37989(joaat("baller2")))
	{
		return 1;
	}
	return 0;
}

void func_91(int iParam0)
{
	switch (Local_47[iParam0 /*20*/].f_18)
	{
		case 0:
			break;
		
		case 1:
			if (!Local_47[iParam0 /*20*/].f_19)
			{
				if (!func_2(Local_47[iParam0 /*20*/].f_1))
				{
					Local_47[iParam0 /*20*/].f_1 = unk_0xB500796AAD639F82(22, Local_47[iParam0 /*20*/], Local_47[iParam0 /*20*/].f_10, Local_47[iParam0 /*20*/].f_13, 1, 1);
					if (func_2(Local_47[iParam0 /*20*/].f_1))
					{
						if (iParam0 == 0)
						{
							unk_0x9333F12697885478(Local_47[iParam0 /*20*/].f_1, "PROP_HUMAN_SEAT_CHAIR", Local_132[iParam0 /*3*/], fLocal_139[iParam0], 0, 0, 1);
							unk_0x9C5431DCBA6382D7(Local_47[iParam0 /*20*/].f_1);
							unk_0x67B49D4E454FC061(Local_47[iParam0 /*20*/].f_1, 1);
							unk_0x7BCBC6B8F89A88C1(Local_47[iParam0 /*20*/].f_1, -37.34785f, -1102.022f, 25.42232f, 3f, 0, 0);
							unk_0xD14E5ED9D5665519(Local_47[iParam0 /*20*/].f_1, 37, 1);
						}
						unk_0xBA63517ADBC1E5E3(Local_47[iParam0 /*20*/].f_1, 1);
						unk_0xDEA5F99894469373(Local_47[iParam0 /*20*/].f_1, iLocal_148);
						unk_0xEA839C4667740EDE(Local_47[iParam0 /*20*/].f_1, 0, iLocal_148);
						unk_0xD14E5ED9D5665519(Local_47[iParam0 /*20*/].f_1, 23, 0);
						unk_0xD14E5ED9D5665519(Local_47[iParam0 /*20*/].f_1, 1, 0);
						unk_0xD14E5ED9D5665519(Local_47[iParam0 /*20*/].f_1, 28, 1);
						unk_0x69C53B3D9B12E3C3(Local_47[iParam0 /*20*/].f_1, 0.7f, 0.3f);
						iLocal_116[iParam0] = 0;
						if (func_49() == 0)
						{
							unk_0xF0683EF788D4342B(Local_47[iParam0 /*20*/].f_1, Local_47[iParam0 /*20*/].f_17, -1, 1, 1);
						}
						unk_0x0B87AFC0B2EECA19(Local_47[iParam0 /*20*/]);
						Local_47[iParam0 /*20*/].f_19 = 1;
						Local_47[iParam0 /*20*/].f_18 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_2(Local_47[iParam0 /*20*/].f_1))
			{
				if (iLocal_113)
				{
					func_93(Local_47[iParam0 /*20*/].f_1, &(Local_47[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1);
					unk_0x1F6717C33A02B7AC(Local_47[iParam0 /*20*/].f_1);
					unk_0x435B5D99ADECF01C(Local_47[iParam0 /*20*/].f_1, 1, -1, "DEFAULT_ACTION");
					unk_0xD6763C9F81772BAE(&uLocal_147);
					unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 12, 2);
					unk_0xDCA5DDD55544BA21(0, Local_47[iParam0 /*20*/].f_14, 1f, -1, 3f, 0, 1193033728);
					unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
					unk_0x6F275D9063DAF754(uLocal_147);
					unk_0x457C4844450FF70E(Local_47[iParam0 /*20*/].f_1, uLocal_147);
					unk_0xDD1A4EE55D86FE71(&uLocal_147);
					Local_47[iParam0 /*20*/].f_18 = 3;
				}
				if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(Local_47[iParam0 /*20*/].f_1, 0), 1) >= 250f)
				{
					Local_47[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_47[iParam0 /*20*/].f_18 = 5;
			}
			break;
		
		case 3:
			if (func_2(Local_47[iParam0 /*20*/].f_1))
			{
				func_93(Local_47[iParam0 /*20*/].f_1, &(Local_47[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1);
				if (unk_0xFB900D9EE2ACC400(Local_47[iParam0 /*20*/].f_1, 242628503) == 7 || unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(Local_47[iParam0 /*20*/].f_1, 0), 1) <= 5f)
				{
					unk_0x3195125C126B79C6(Local_47[iParam0 /*20*/].f_1, unk_0x06736567F820A39E(), -1, 0, 2);
					unk_0xFB9941AAF643A23C(Local_47[iParam0 /*20*/].f_1, unk_0x06736567F820A39E(), 0, 16);
					unk_0x7BFFBE86C0ABFC36(Local_47[iParam0 /*20*/].f_1, 3);
					unk_0x97C5D2BB8E47131D(Local_47[iParam0 /*20*/].f_1, 1);
					Local_47[iParam0 /*20*/].f_18 = 4;
				}
				if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(Local_47[iParam0 /*20*/].f_1, 0), 1) >= 250f)
				{
					Local_47[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_47[iParam0 /*20*/].f_18 = 5;
			}
			break;
		
		case 4:
			func_93(Local_47[iParam0 /*20*/].f_1, &(Local_47[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1);
			if (!func_2(Local_47[iParam0 /*20*/].f_1))
			{
				Local_47[iParam0 /*20*/].f_18 = 5;
			}
			else
			{
				if (iLocal_116[iParam0] == 0)
				{
					if (!func_57() || func_49() == 0)
					{
						unk_0xF0683EF788D4342B(Local_47[iParam0 /*20*/].f_1, Local_47[iParam0 /*20*/].f_17, -1, 0, 1);
						iLocal_116[iParam0] = 1;
					}
				}
				if (unk_0xFB900D9EE2ACC400(Local_47[iParam0 /*20*/].f_1, 780511057) == 7)
				{
					unk_0xFB9941AAF643A23C(Local_47[iParam0 /*20*/].f_1, unk_0x06736567F820A39E(), 0, 16);
				}
				if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(Local_47[iParam0 /*20*/].f_1, 0), 1) >= 75f)
				{
					Local_47[iParam0 /*20*/].f_18 = 5;
				}
			}
			break;
		
		case 5:
			func_92(&(Local_47[iParam0 /*20*/].f_2));
			if (unk_0xC1EDB61CE0A4B94E(Local_47[iParam0 /*20*/].f_1))
			{
				unk_0x5318F6C4C2B82FA7(&(Local_47[iParam0 /*20*/].f_1));
			}
			Local_47[iParam0 /*20*/].f_18 = 6;
			break;
		
		case 6:
			break;
	}
}

void func_92(var uParam0)
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

int func_93(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
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
		if (!unk_0xE60A28942E3AC2F4(uParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x02301F37BFDE4853(uParam0, 1);
			}
			else
			{
				unk_0x1BFD1B2D060B4D7B(uParam0, 1, iParam8);
			}
			uParam1->f_7 = uParam0;
			unk_0x64C4679AB573D014(uParam0, iParam2);
			unk_0x8071A84CFEF9473E(uParam0, fParam6);
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				unk_0xA4E8F868373B09C0(*uParam1, 7);
			}
		}
		unk_0x4E4EE0053F5CC360(uParam0, iParam4);
		unk_0xD8980636C77E9E15(uParam0, iParam5);
		*uParam1 = unk_0x02474D0091F9C4C7(uParam0);
		if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 2))
		{
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				if (!unk_0x226FA58470A21AEF(iParam7))
				{
					unk_0x029684F77EB71B8F("MCUSTBLIP");
					unk_0x9C174A0D56FFB64A(iParam7);
					unk_0xA16AF6FEBF65A3F0(*uParam1);
				}
				unk_0xE27C8E42A97895CF(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x0FDFEC0DD29106EE(uParam0, 0))
		{
			uParam1->f_1 = unk_0xC449C2B2F01617A0(uParam0);
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

void func_94()
{
	int iVar0;
	
	if (func_123())
	{
		func_121(&Global_25211);
	}
	else
	{
		func_121(&Global_25211);
	}
	func_95(-1);
	unk_0x50C99396AA9E5449(iLocal_148);
	unk_0x50C99396AA9E5449(uLocal_149);
	unk_0x50C99396AA9E5449(iLocal_150);
	if (iLocal_107 == 0)
	{
		unk_0x6555D0270D9BE11C("RE9_SPOTTED");
	}
	if (unk_0xC1EDB61CE0A4B94E(uLocal_90))
	{
		unk_0x5318F6C4C2B82FA7(&uLocal_90);
		if (unk_0xCDB4C4200A9B478A(uLocal_93))
		{
			unk_0x2239ED27B231AE2E(&uLocal_93);
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_47[iVar0 /*20*/].f_18 = 5;
		iVar0++;
	}
	unk_0x8659A4920DA95096(uLocal_142, 0);
	unk_0x9D02631D6BB6AA31();
	if (iLocal_143 != -1)
	{
		unk_0x86E82CAE762490FA(iLocal_143);
	}
	if (iLocal_144 != -1)
	{
		unk_0x86E82CAE762490FA(iLocal_144);
	}
	if (iLocal_145 != -1)
	{
		unk_0x86E82CAE762490FA(iLocal_145);
	}
	if (iLocal_146 != -1)
	{
		unk_0x86E82CAE762490FA(iLocal_146);
	}
	if (unk_0x35BEE533650C4BBF("DEALERSHIP"))
	{
		if (!unk_0xA472659498B908A8("DEALERSHIP"))
		{
			unk_0x9ECF8C009A69E945("DEALERSHIP", 1);
		}
	}
	unk_0x41BBA77D020A0CEB(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, 1, 1);
	unk_0xF5DF8F3392CDD07B();
}

void func_95(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_123())
	{
		func_99(iParam0);
		unk_0xEEAF3825AA9B5231(0, 0);
		Global_101177 = unk_0x1ADBAAC322D61F73();
		func_98(30000);
		StringCopy(&cVar0, func_97(Global_101175, 1), 64);
		if (func_30(Global_101175) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101174, 64);
		}
		unk_0x659BEAF3C40E9AAB(&cVar0, Global_101172, (unk_0x1ADBAAC322D61F73() - Global_101173), 0);
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101182, 0) && Global_101186.f_29596.f_2 < 3)
	{
		unk_0x99BCB15F954AF579(&Global_101182, 0);
	}
	func_121(&Global_25211);
	Global_101176 = 0;
	func_96(-1);
}

void func_96(int iParam0)
{
	Global_101175 = iParam0;
}

char* func_97(int iParam0, bool bParam1)
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

void func_98(int iParam0)
{
	Global_36293 = (unk_0x1ADBAAC322D61F73() + iParam0);
}

void func_99(int iParam0)
{
	func_100(iParam0, 0, func_120(iParam0));
}

void func_100(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_119();
	func_110(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_109(iParam0, &uVar0);
	Var1 = { func_101(&uVar0) };
}

struct<16> func_101(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_108(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_107(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_106(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_105(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_104(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_102(*uParam0), 64);
	return Var0;
}

int func_102(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_103(unk_0x7DA173D4FD42F36B(iParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_104(int iParam0)
{
	return iParam0 & 15;
}

int func_105(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_106(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_107(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_108(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_109(int iParam0, var uParam1)
{
	Global_101186.f_29596.f_43[iParam0] = *uParam1;
}

void func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	iVar2 = func_105(*uParam0);
	iVar3 = func_108(*uParam0);
	iVar4 = func_107(*uParam0);
	iVar5 = func_106(*uParam0);
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
	iVar6 = func_118(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_118(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_111(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_111(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_117(uParam0, iParam1);
	func_116(uParam0, iParam2);
	func_115(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_113(uParam0, iParam4);
	func_112(uParam0, iParam6);
}

void func_112(var uParam0, int iParam1)
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

void func_113(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_118(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_118(int iParam0, int iParam1)
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

int func_119()
{
	var uVar0;
	
	func_117(&uVar0, unk_0xF14A94DD5AC25E5A());
	func_116(&uVar0, unk_0x4DD90C24B73F9042());
	func_115(&uVar0, unk_0xEC5C0F25A9A364A0());
	func_113(&uVar0, unk_0xED13857F967C0912());
	func_114(&uVar0, unk_0x39BDC971C31BA81C());
	func_112(&uVar0, unk_0x6EBF2ECA5972D1E7());
	return uVar0;
}

int func_120(int iParam0)
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

void func_121(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35704)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35703 = 0;
	Global_35705 = 0;
	Global_35742 = 15;
	Global_55777 = 0;
	Global_55778 = 0;
}

int func_122()
{
	if (!func_68(5))
	{
		return 1;
	}
	if (func_85())
	{
		return 1;
	}
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_89())
		{
			return 0;
		}
	}
	if (func_79(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_123()
{
	if ((Global_101175 == func_31() && unk_0x8B2C262B815BC3D1()) && Global_101176)
	{
		return 1;
	}
	return 0;
}

void func_124()
{
	Local_99 = { -45.97f, -1095.58f, 25.42f };
	fLocal_102 = 105.42f;
	Local_103 = { -33.39f, -1101.79f, 25.42f };
	fLocal_106 = 184.5161f;
	Local_47[0 /*20*/].f_10 = { -29.66f, -1103.44f, 26.42f };
	Local_47[0 /*20*/].f_13 = 58.7988f;
	Local_47[0 /*20*/].f_14 = { -35.19f, -1101.72f, 25.42f };
	Local_47[0 /*20*/] = joaat("g_m_m_armgoon_01");
	Local_47[0 /*20*/].f_17 = joaat("weapon_pistol");
	Local_132[0 /*3*/] = { -30.35f, -1104.29f, 25.89f };
	fLocal_139[0] = 177.22f;
	Local_47[1 /*20*/].f_10 = { -36.8032f, -1090.619f, 25.4223f };
	Local_47[1 /*20*/].f_13 = 257.6675f;
	Local_47[1 /*20*/].f_14 = { -34.66f, -1097.23f, 25.42f };
	Local_47[1 /*20*/] = joaat("g_m_y_armgoon_02");
	Local_47[1 /*20*/].f_17 = joaat("weapon_pistol");
	Local_132[1 /*3*/] = { -29.11f, -1104.99f, 25.89f };
	fLocal_139[1] = 136.57f;
	unk_0x3ECE0E645B1530B3("GoonGroup", &iLocal_148);
	unk_0x3ECE0E645B1530B3("PlayerGroup", &iLocal_149);
	unk_0x3ECE0E645B1530B3("YetarianGroup", &iLocal_150);
	unk_0x054CBFE90FAA6840(1, iLocal_150, joaat("player"));
	unk_0x054CBFE90FAA6840(1, joaat("player"), iLocal_150);
	unk_0x054CBFE90FAA6840(5, iLocal_148, joaat("player"));
	unk_0x054CBFE90FAA6840(5, joaat("player"), iLocal_148);
	unk_0x41BBA77D020A0CEB(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, 0, 1);
	uLocal_142 = unk_0x33189531E55C7E33(-79.95f, -1126.33f, 20.65f, -3.5f, -1081.6f, 30.67f, 0, 1, 1, 1);
	unk_0x0FE1D2A687D1444F(-34.2476f, -1107.283f, 24.9621f, -24.7924f, -1102.557f, 29.8287f, 1, 1, 1, 0);
	if (iLocal_146 == -1)
	{
		iLocal_146 = unk_0x548EF4440C828F1D(-29.3f, -1086.35f, 25.57f, 5.5f, 3f, 2f, -10f, 0, 7);
	}
	func_125(196, 0);
	func_125(197, 0);
	func_125(194, 0);
	func_125(195, 0);
	unk_0xBECC89ACB4E5D4ED(Local_47[0 /*20*/]);
	unk_0xBECC89ACB4E5D4ED(Local_47[1 /*20*/]);
	unk_0xBECC89ACB4E5D4ED(iLocal_122);
	unk_0xBECC89ACB4E5D4ED(joaat("bjxl"));
	unk_0xBECC89ACB4E5D4ED(joaat("tailgater"));
	unk_0xBECC89ACB4E5D4ED(joaat("baller2"));
	unk_0x1A424F495840678C(Local_47[0 /*20*/].f_17, 31, 0);
	unk_0x1A424F495840678C(Local_47[1 /*20*/].f_17, 31, 0);
	unk_0x198E497B820DA913("cellphone@");
	unk_0x198E497B820DA913("cellphone@str");
	unk_0x53CCB63EA1A462EE("reyetarian_simeonoffice");
	unk_0xAA821ECDF67A2A25("RE9_SPOTTED");
}

void func_125(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_69521)
		{
			iVar0 = Global_2428549.f_74[iParam0];
		}
		else
		{
			iVar0 = Global_101186.f_6027[iParam0];
		}
		if (iVar0 != iParam1 || unk_0x7DA173D4FD42F36B(Global_31530[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0xE27C8E42A97895CF(&(Global_31539[(iParam0 / 32)]), (iParam0 % 32));
				Global_32002[iParam0] = iParam1;
			}
			else if (Global_69521)
			{
				Global_2428549.f_74[iParam0] = iParam1;
			}
			else
			{
				Global_101186.f_6027[iParam0] = iParam1;
			}
			unk_0xE27C8E42A97895CF(&(Global_31530[(iParam0 / 32)]), (iParam0 % 32));
			func_127(iParam0);
			if (unk_0x7DA173D4FD42F36B(Global_31530[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_126(iParam0);
			}
		}
	}
}

void func_126(int iParam0)
{
	if (!unk_0x7DA173D4FD42F36B(Global_32473.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0xE27C8E42A97895CF(&(Global_32473.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_32473[Global_32473.f_227] = iParam0;
		Global_32473.f_227++;
	}
}

void func_127(int iParam0)
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!func_135())
	{
		return;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return;
	}
	Var0 = { func_134(iParam0) };
	if (unk_0x7DA173D4FD42F36B(Var0.f_4, 2))
	{
		func_132(iParam0, &Var0);
	}
	if (!unk_0x1A7559C163191E43(Var0.f_5))
	{
		if (unk_0xEE448F70B7098781())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0xA1F52EC3ECE1D42E(Var0, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 1);
	if ((unk_0x7DA173D4FD42F36B(Global_31539[(iParam0 / 32)], (iParam0 % 32)) && Global_32002[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0x99BCB15F954AF579(&(Global_31539[(iParam0 / 32)]), (iParam0 % 32));
		Global_31548[iParam0] = 0;
	}
	if (unk_0x98934607F8D0FB03(joaat("startup_positioning")) == 0)
	{
		if (unk_0x7DA173D4FD42F36B(Global_31775[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_91362.f_294 == 0)
				{
					if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
					{
						Global_91362.f_294 = unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E());
					}
				}
				iVar11 = Global_91362.f_294;
				iVar12 = unk_0xED1A87B65DEE4375(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0xE27C8E42A97895CF(&(Global_31539[(iParam0 / 32)]), (iParam0 % 32));
					Global_32002[iParam0] = 3;
					unk_0xE27C8E42A97895CF(&(Global_31530[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x99BCB15F954AF579(&(Global_31775[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_31539[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_32002[iParam0];
	}
	else if (unk_0x7DA173D4FD42F36B(Var0.f_4, 0))
	{
		if (Global_101186.f_7851)
		{
			iVar9 = func_129(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_24(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0x7DA173D4FD42F36B(Var0.f_4, 1) && unk_0x98934607F8D0FB03(joaat("ambient_solomon")) == 0)
	{
		if (func_128())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_101186.f_6027[iParam0];
	}
	if (Global_32229[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0x7DA173D4FD42F36B(Global_31530[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0x7DA173D4FD42F36B(Global_31539[(iParam0 / 32)], (iParam0 % 32)) || (Global_31548[iParam0] == 0 && Global_32002[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_31529)
		{
		}
		else
		{
			if (!unk_0x1A7559C163191E43(Var0.f_5))
			{
				unk_0x19159DE69BA38661(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0x7DA173D4FD42F36B(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0xF87C669B882D93C0(unk_0x998C441B6F3E23CC(Var0.f_5)) <= 0.015f)
					{
						iVar14 = unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E());
						iVar15 = unk_0xED1A87B65DEE4375(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x6A66F98AC4CF6423(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0xA78E2D8D6ED49B05(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x6A66F98AC4CF6423(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xA78E2D8D6ED49B05(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x6A66F98AC4CF6423(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xA78E2D8D6ED49B05(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x6A66F98AC4CF6423(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0xA78E2D8D6ED49B05(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x6A66F98AC4CF6423(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xA78E2D8D6ED49B05(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x6A66F98AC4CF6423(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xA78E2D8D6ED49B05(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x6A66F98AC4CF6423(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xA78E2D8D6ED49B05(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x6A66F98AC4CF6423(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xA78E2D8D6ED49B05(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0x99BCB15F954AF579(&(Global_31530[(iParam0 / 32)]), (iParam0 % 32));
			Global_32229[iParam0] = iVar9;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_31539[(iParam0 / 32)], (iParam0 % 32)) && Global_32002[iParam0] != 2)
	{
		unk_0xE27C8E42A97895CF(&(Global_31530[(iParam0 / 32)]), (iParam0 % 32));
		func_126(iParam0);
		if (Global_31548[iParam0] < 2)
		{
			Global_31548[iParam0]++;
		}
	}
}

int func_128()
{
	if (unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return 0;
	}
	switch (func_49())
	{
		case 0:
			if (Global_101186.f_7851.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_101186.f_7851.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_101186.f_7851.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = func_49();
	if (func_130(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0x7DA173D4FD42F36B(Global_101186.f_5995[5], 0) || unk_0x7DA173D4FD42F36B(Global_101186.f_5995[6], 0))
			{
				return 0;
			}
		}
		if (func_25(iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Global_86670[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_5995[0], 0))
				{
					return 0;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_86670[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_5995[5], 0))
				{
					return 0;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_86670[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_5995[6], 0))
				{
					return 0;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_86670[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_5995[2], 0))
				{
					return 0;
				}
				if (func_25(iVar0))
				{
					if (unk_0x7DA173D4FD42F36B(Global_86670[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_5995[1], 0))
				{
					return 0;
				}
				if (func_25(iVar0))
				{
					if (unk_0x7DA173D4FD42F36B(Global_86670[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_5995[3], 0))
				{
					return 0;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_86670[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
			{
				iVar0 = unk_0x79469DA5833EACA8(func_131(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_131(var uParam0)
{
	return uParam0;
}

void func_132(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7DA173D4FD42F36B(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_119();
	iVar1 = func_108(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_133(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_101186.f_6027[iParam0] = 0;
						unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), *uParam1) >= 12f)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), *uParam1) >= 12f)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_133(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_101186.f_6027[iParam0] = 0;
						unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), *uParam1) >= 12f)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), *uParam1) >= 12f)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_133(iParam0))
			{
				if ((unk_0x98934607F8D0FB03(joaat("jewelry_heist")) == 0 && unk_0x98934607F8D0FB03(joaat("jewelry_setup1")) == 0) && !Global_101186.f_7851.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_101186.f_6027[iParam0] = 0;
							unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_101186.f_7851.f_99.f_58[4])
				{
					Global_101186.f_6027[iParam0] = 0;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else if (Global_101186.f_7851.f_99.f_58[4])
			{
				Global_101186.f_6027[iParam0] = 1;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			else if (unk_0x98934607F8D0FB03(joaat("jewelry_heist")) == 0 && unk_0x98934607F8D0FB03(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), *uParam1) >= 18f)
					{
						Global_101186.f_6027[iParam0] = 1;
						unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), *uParam1) >= 18f)
					{
						Global_101186.f_6027[iParam0] = 1;
						unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_133(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_101186.f_6027[iParam0] = 0;
						unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), *uParam1) >= 40f)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), *uParam1) >= 40f)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_133(iParam0))
			{
				Global_101186.f_6027[iParam0] = 1;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_133(iParam0))
			{
				if (unk_0x98934607F8D0FB03(joaat("assassin_valet")) == 0)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else if (unk_0x98934607F8D0FB03(joaat("assassin_valet")) > 0)
			{
				Global_101186.f_6027[iParam0] = 0;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x98934607F8D0FB03(Global_82431[70 /*34*/].f_6) == 0)
			{
				if (!func_133(iParam0))
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x98934607F8D0FB03(joaat("omega2")) == 0)
			{
				if (!func_133(iParam0))
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_133(iParam0) && unk_0x98934607F8D0FB03(Global_82431[26 /*34*/].f_6) == 0)
			{
				Global_101186.f_6027[iParam0] = 1;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_133(iParam0))
			{
				if (unk_0x98934607F8D0FB03(Global_82431[43 /*34*/].f_6) == 0)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_133(iParam0))
			{
				Global_101186.f_6027[iParam0] = 1;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_133(iParam0))
			{
				if (unk_0x98934607F8D0FB03(Global_82431[93 /*34*/].f_6) > 0)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_133(iParam0))
			{
				Global_101186.f_6027[iParam0] = 1;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_133(iParam0))
			{
				if (unk_0x98934607F8D0FB03(Global_82431[8 /*34*/].f_6) == 0 && unk_0x98934607F8D0FB03(Global_82431[10 /*34*/].f_6) == 0)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_133(iParam0))
			{
				if (unk_0x98934607F8D0FB03(Global_82431[47 /*34*/].f_6) == 0)
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x98934607F8D0FB03(Global_82431[70 /*34*/].f_6) == 0)
			{
				if (!func_133(iParam0))
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x98934607F8D0FB03(Global_82431[48 /*34*/].f_6) == 0)
			{
				if (!func_133(iParam0))
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x98934607F8D0FB03(Global_82431[39 /*34*/].f_6) == 0)
			{
				if (!func_133(iParam0))
				{
					Global_101186.f_6027[iParam0] = 1;
					unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_133(iParam0))
			{
				Global_101186.f_6027[iParam0] = 1;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_133(iParam0))
			{
				Global_101186.f_6027[iParam0] = 1;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_133(iParam0))
			{
				Global_101186.f_6027[iParam0] = 0;
				unk_0xA78E2D8D6ED49B05(uParam1->f_5, Global_101186.f_6027[iParam0], 1, 1);
			}
			break;
	}
}

bool func_133(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_134(iParam0) };
	iVar7 = unk_0xA8028F6B65261E0D(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

struct<7> func_134(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0xE27C8E42A97895CF(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_135()
{
	if ((func_12() == -1 || func_12() == 999) && !func_136() == 0)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	return Global_25153;
}

void func_137(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_96(iParam0);
	unk_0x3DD2E6934C5B4B1B(0);
	unk_0xCD2EAE5EF958BEB1(1);
	Global_101172 = 0;
	func_138();
}

void func_138()
{
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			unk_0x2CC3164B94BF6E73(unk_0x79469DA5833EACA8(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0)), 1);
		}
		unk_0x6553935614875699(unk_0x06736567F820A39E(), 32, 0);
	}
}

int func_139(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138130)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_31();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_165())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			Var1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_89())
			{
				return 0;
			}
		}
		if (!Global_101186.f_7851)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_85())
		{
			return 0;
		}
		if (func_164())
		{
			return 0;
		}
		if (Global_101175 != -1)
		{
			return 0;
		}
		if (func_25(func_49()))
		{
			if (func_79(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_163(iParam3))
		{
			return 0;
		}
		if (func_25(func_49()))
		{
			if (func_162(func_49()) == 4 || func_162(func_49()) == 5)
			{
				return 0;
			}
		}
		if (func_25(func_49()))
		{
			if (!func_161(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_160(Global_101186.f_29596.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x1ADBAAC322D61F73() - Global_101177) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_159())
		{
			return 0;
		}
		if (unk_0x80C449C5D85C42A1())
		{
			return 0;
		}
		if (unk_0x8B2C262B815BC3D1())
		{
			return 0;
		}
		if (!func_150(4))
		{
			return 0;
		}
		if (!func_68(5))
		{
			return 0;
		}
		if (func_149(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x80B7B1E21DC40E6E(unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E())))
		{
			if ((unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == unk_0xED1A87B65DEE4375(377.153f, -717.567f, 10.0536f) || unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == unk_0xED1A87B65DEE4375(320.9934f, 265.2515f, 82.1221f)) || unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == unk_0xED1A87B65DEE4375(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_149(0, 0))
		{
			return 0;
		}
		if (Global_25298)
		{
			return 0;
		}
		if (func_163(30) && !func_149(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_25(func_49()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_101186.f_1902.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101186.f_1902.f_539.f_1524[iVar4];
				if (func_148(iVar8))
				{
					if (func_141(iVar4))
					{
						if (!func_140(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var5) < (210f * 210f))
							{
								if (func_49() != iVar4)
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

bool func_140(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_141(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101186.f_1902.f_539.f_1524[iParam0];
	return func_142(iVar0);
}

int func_142(int iParam0)
{
	return func_143(iParam0, 1);
}

int func_143(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_148(iParam0))
	{
		return 0;
	}
	func_144(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_144(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_145(func_119(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_145(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_147(iParam0, iParam1))
	{
		iVar0 = func_104(iParam1);
		iVar1 = func_102(iParam0);
		iVar2 = (func_102(iParam0) - func_102(iParam1));
		iVar3 = (func_104(iParam0) - func_104(iParam1));
		iVar4 = (func_105(iParam0) - func_105(iParam1));
		iVar5 = (func_108(iParam0) - func_108(iParam1));
		iVar6 = (func_107(iParam0) - func_107(iParam1));
		iVar7 = (func_106(iParam0) - func_106(iParam1));
	}
	else
	{
		iVar0 = func_104(iParam0);
		iVar1 = func_102(iParam1);
		iVar2 = (func_102(iParam1) - func_102(iParam0));
		iVar3 = (func_104(iParam1) - func_104(iParam0));
		iVar4 = (func_105(iParam1) - func_105(iParam0));
		iVar5 = (func_108(iParam1) - func_108(iParam0));
		iVar6 = (func_107(iParam1) - func_107(iParam0));
		iVar7 = (func_106(iParam1) - func_106(iParam0));
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
		iVar4 = (iVar4 + func_118(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_146(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_146(float fParam0, float fParam1, float fParam2)
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

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_148(iParam1) || !func_148(iParam0))
	{
		return 1;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0)
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
	iVar0 = func_106(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_107(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_108(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_105(iParam0);
	if (iVar5 < 1 || iVar5 > func_118(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, int iParam1)
{
	if (unk_0x7DA173D4FD42F36B(Global_101186.f_29596.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				iVar0 = func_49();
				if (!func_25(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_158()) || Global_100233) || Global_25154) || func_157()) || func_46(8, -1)) || func_156()) || func_155()) || func_154()) || func_153()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1) || func_158()) || Global_25154) || func_157()) || func_46(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_158()) || Global_100233) || Global_25154) || func_157()) || func_46(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_101186.f_6454.f_919[iVar0] == 5) || Global_36289 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_158()) || Global_100233) || Global_25154) || func_157()) || func_46(8, -1)) || func_156()) || func_155()) || func_153()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_158() || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || func_46(8, -1)) || func_153()) || func_152()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_46(8, -1) || func_156()) || func_155()) || func_152()) || func_151())
						{
							return 0;
						}
						if ((unk_0xAD79840A082ADD7F() && unk_0xCB6A4452D5152B74() != 3) && unk_0xA4D01763320ADBAE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
						{
							if ((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_158()) || Global_25154) || func_157()) || func_46(8, -1)) || func_155()) || func_154()) || func_153()) || Global_101186.f_6454.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || func_158()) || func_155()) || Global_100233) || Global_25154) || func_157()) || Global_36870) || func_46(8, -1)) || func_154()) || func_152()) || func_153()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0)) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1)) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x8B69AEF6B3EE75BF(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_158()) || Global_100233) || Global_25154) || func_157()) || func_46(8, -1)) || func_154()) || func_152()) || func_156()) || func_155()) || func_153())
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

var func_151()
{
	return Global_91349.f_1;
}

int func_152()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 13);
	}
	return 0;
}

int func_153()
{
	if (unk_0x98934607F8D0FB03(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	if (Global_69781)
	{
		return 1;
	}
	else if (Global_55774 && !Global_55780)
	{
		return 1;
	}
	return 0;
}

bool func_155()
{
	return Global_91362.f_297 > 0;
}

bool func_156()
{
	return Global_91362.f_296 > 0;
}

var func_157()
{
	return Global_1315913;
}

int func_158()
{
	if (!unk_0x17CC0D5008835470())
	{
		return Global_89121.f_44 == 1;
	}
	return 0;
}

int func_159()
{
	func_44();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_160(int iParam0)
{
	return func_147(func_119(), iParam0);
}

int func_161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_49();
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

int func_162(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 7;
	}
	return Global_101186.f_6454.f_919[iParam0];
}

bool func_163(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_165())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x7DA173D4FD42F36B(Global_101186.f_29596, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x7DA173D4FD42F36B(Global_101186.f_29596.f_1, iVar0);
	}
	return bVar1;
}

int func_164()
{
	var uVar0;
	
	if (Global_25302)
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			uVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
			if (unk_0x1B6292EA51632C25(uVar0, 0))
			{
				if (!unk_0xCFC04A38F256EE06(unk_0x4321FC7479614822(uVar0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_165()
{
	var uVar0;
	
	if (unk_0x37C879A6840008F2())
	{
		if (unk_0x8885412CB28B8667())
		{
			if (unk_0x85D4C81816DC7E73())
			{
				unk_0xFF4D252D25F54A29(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xE27C8E42A97895CF(&uVar0, 2);
				unk_0xE27C8E42A97895CF(&uVar0, 4);
				unk_0xE27C8E42A97895CF(&uVar0, 6);
				unk_0xE27C8E42A97895CF(&Global_25, 2);
				unk_0xE27C8E42A97895CF(&Global_25, 4);
				unk_0xE27C8E42A97895CF(&Global_25, 6);
				unk_0x57B5A527FBAC251E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x68BFEB8408A751AF())
				{
					iVar0 = unk_0x424297F730B39FD1(866);
					unk_0xE27C8E42A97895CF(&iVar0, 0);
					unk_0x57EDFB763ADA5656(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138382 == 2)
	{
		return 1;
	}
	else if (Global_138382 == 3)
	{
		return 0;
	}
	if (unk_0x68BFEB8408A751AF())
	{
		if (unk_0x7DA173D4FD42F36B(unk_0x424297F730B39FD1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_166()
{
	func_94();
}

void func_167(struct<3> Param0)
{
	if (unk_0x2A488C176D52CCA5(Param0, Param0) > 1f)
	{
	}
}

