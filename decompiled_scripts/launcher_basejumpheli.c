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
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	float fLocal_117 = 0f;
	bool bLocal_118 = 0;
	var uLocal_119 = 1;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 16;
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
	struct<170> Local_287 = { 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	bLocal_118 = true;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	iLocal_86 = iLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0x2EC83C7ACA23E8A4(114))
	{
		func_160(1);
	}
	uLocal_85 = unk_0x21F191D9AFF98B5E(unk_0x0C1D3C552325765B());
	iLocal_95 = 0;
	func_158(&Global_100206, 0);
	func_152();
	unk_0x767EEB287EFBBF01(1);
	if (func_151(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31550)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_151(uLocal_94, 8))
	{
		if (!func_149(iLocal_100))
		{
			if (func_148(0, iLocal_99))
			{
				func_160(0);
			}
			else
			{
				func_160(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_148(0, iLocal_99))
		{
			bLocal_118 = false;
		}
	}
	if (func_151(uLocal_94, 8388608))
	{
		func_160(1);
	}
	if (func_151(uLocal_94, 524288) && (func_147() && !func_146()))
	{
		func_160(1);
	}
	if (unk_0xA96867DD0A63C62C(unk_0xD24F6522EB082914()) > 1 && !func_151(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_145(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_144(10);
	}
	if (!unk_0xD3FACCDA4D66AEAD(iLocal_86))
	{
		if (func_143() && !Global_100600)
		{
			func_142(1);
		}
		else if (Global_100600)
		{
		}
	}
	while (true)
	{
		if (Global_3)
		{
			func_160(1);
		}
		uLocal_85 = unk_0x21F191D9AFF98B5E(unk_0x0C1D3C552325765B());
		if (func_151(uLocal_94, 1048576))
		{
			if (unk_0x912AD5A10E7633F0(uLocal_85, 0))
			{
				func_160(1);
			}
		}
		if (unk_0xD3FACCDA4D66AEAD(uLocal_85) && !unk_0x912AD5A10E7633F0(iLocal_85, 0))
		{
			Local_87 = { unk_0xC59DF10B4FC39DF8(iLocal_85, 1) };
			fLocal_93 = unk_0xB7A628320EFF8E47(Local_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_111.f_2 = 0f;
			Local_114.f_2 = 0f;
			fLocal_110 = unk_0xB7A628320EFF8E47(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_149(iLocal_100) || (func_151(uLocal_94, 16) && !func_151(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_137();
						func_144(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_145(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_144(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_135())
					{
						iLocal_103 = iLocal_103;
						func_144(3);
					}
					else
					{
						func_137();
					}
					break;
				
				case 3:
					if (unk_0xBB81832DD12D2E73())
					{
						func_160(1);
						return;
					}
					if (!func_149(iLocal_100))
					{
						if (!func_151(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0x28C1B9853548BD8E(&(Global_91406.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_160(0);
								break;
							}
						}
					}
					if (!func_151(uLocal_94, 4))
					{
						func_133();
						func_132(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_91440)
					{
						if (iLocal_105 != 263)
						{
							if (func_131(6) && !func_130(iLocal_105))
							{
							}
							else
							{
								func_145(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_144(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar2 = !func_151(uLocal_94, 64);
						func_158(&uLocal_94, 128);
						if (!func_129(3) && !Global_91440)
						{
							if (func_151(uLocal_94, 2097152))
							{
								if ((!func_151(uLocal_94, 1) || !unk_0xD3FACCDA4D66AEAD(func_128())) && !Global_91440)
								{
									func_144(10);
									break;
								}
							}
						}
						if (func_151(uLocal_94, 524288) && (func_147() && !func_146()))
						{
							func_160(1);
						}
						if (func_127())
						{
							func_160(1);
						}
						if ((!func_119(6) || Global_100600) || func_118())
						{
							bVar2 = false;
						}
						if (!bLocal_118)
						{
							func_116(&uLocal_94, 128);
							bVar2 = false;
						}
						if (func_151(uLocal_94, 1))
						{
							if (!func_115())
							{
								func_116(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_114(1))
						{
							bVar2 = false;
						}
						if (Global_69617)
						{
							bVar2 = false;
						}
						if (func_113())
						{
							bVar2 = false;
						}
						if (unk_0xC740F8182E7E9681())
						{
							bVar2 = false;
						}
						if (func_112() || func_111(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0x42322F841075FF38(unk_0x0C1D3C552325765B()))
						{
							bVar2 = false;
						}
						if (func_110(0) || func_109())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0x912AD5A10E7633F0(iLocal_86, 0))
							{
								func_116(&uLocal_94, 128);
								bVar2 = false;
							}
							else if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
							{
								func_116(&uLocal_94, 128);
								bVar2 = false;
							}
							else
							{
								iVar3 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
								if (bVar2)
								{
									if (iLocal_86 == iVar3)
									{
									}
									else
									{
										func_116(&uLocal_94, 128);
										bVar2 = false;
									}
								}
							}
							if (bVar2)
							{
								unk_0xCEEF85C0FC6A898F(0, 51);
								if (func_108(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_107(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_116(&uLocal_94, 2048);
									}
									else if (!func_151(uLocal_94, 2048) || !unk_0x598A9E990F05F82C())
									{
										func_106(&iLocal_96);
										func_158(&uLocal_94, 2048);
									}
									if (func_104(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_106(&iLocal_96);
										func_158(&uLocal_94, 2048);
										unk_0xE568CE38FF8C1318(&Local_69);
										unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 56);
										func_144(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_106(&iLocal_96);
									func_158(&uLocal_94, 2048);
									unk_0xE568CE38FF8C1318(&Local_69);
									func_144(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								func_106(&iLocal_96);
								func_158(&uLocal_94, 2048);
								unk_0x94724F7C938EBE34(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0xCEEF85C0FC6A898F(0, 51);
					if (unk_0x71DF55A4DE7565D5(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_106(&iLocal_96);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_151(uLocal_94, 1))
						{
							if (func_131(6) || func_131(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_47(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
							{
								unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
							}
							func_46();
							if (Global_36906)
							{
								func_37(unk_0xA0081090911D13E5());
							}
							uLocal_52 = func_27();
							func_158(&uLocal_94, 4);
							func_26();
							func_116(&uLocal_94, 2);
							func_144(6);
							func_22(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_21(iLocal_99);
								func_18(func_20(iLocal_99), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_15();
						}
						else if (iVar4 == 0)
						{
							func_144(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_151(Global_100206, 262144))
					{
						func_158(&Global_100206, 262144);
						func_14();
					}
					if (func_151(uLocal_94, 2097152))
					{
						if (!func_129(3) && !unk_0x96549B1C2E196049(uLocal_52))
						{
							func_144(10);
						}
					}
					if (!unk_0x96549B1C2E196049(uLocal_52))
					{
						unk_0xBDB0B475DF6B7548(unk_0xF2DB717A73826179((func_10(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_9(&uLocal_107);
						func_158(&uLocal_94, 256);
						func_8();
						if (bVar0)
						{
							func_158(&uLocal_94, 2);
						}
						else if (func_151(uLocal_94, 2))
						{
							if (func_151(Global_100206, 0))
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_158(&uLocal_94, 2);
							}
							else
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_158(&uLocal_94, 2);
							}
						}
						func_144(0);
						if (iLocal_99 != -1)
						{
							if (func_151(Global_100206, 0))
							{
								unk_0x77C4120A79EE3365(func_20(iLocal_99), 0, Global_91443, 0);
								func_6(func_20(iLocal_99), 0, Global_91443, 1, 0);
							}
							else
							{
								unk_0x77C4120A79EE3365(func_20(iLocal_99), 0, Global_91443, 0);
								func_6(func_20(iLocal_99), 0, Global_91443, 0, 0);
							}
						}
						func_5();
						func_158(&Global_100206, 0);
						if (func_151(uLocal_94, 16777216))
						{
							func_160(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101553.f_7940)
							{
								if (!func_148(0, iLocal_99))
								{
									func_160(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_144(0);
					break;
				
				case 10:
					func_160(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_145(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_144(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_145(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_106(&iLocal_96);
					}
					if (!unk_0x509383441597090D(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x94724F7C938EBE34(1);
						}
					}
					func_144(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_149(iLocal_100) && func_148(0, iLocal_99))
									{
										func_152();
										if (iLocal_105 != 263)
										{
											func_145(iLocal_105, 1, 0);
										}
										func_144(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_145(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_144(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_152();
									if (iLocal_105 != 263)
									{
										func_145(iLocal_105, 1, 0);
									}
									func_144(0);
								}
							}
						}
						else
						{
							func_145(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_2()
{
	func_3(&uLocal_119);
	unk_0x615DE34FC732CF11(&Local_287);
	unk_0x0689C659BF2D3BF7(&(Local_287.f_3));
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x2C07692AA3545079((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (iLocal_121 == 0)
	{
		unk_0x52B255095342C438();
	}
	unk_0x0756AF366187C194("DisableFlightMusic", 0);
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x509383441597090D(&Global_88809))
	{
		return;
	}
	if (unk_0xF9599AA5A135CE4C(sParam0, &Global_88809, 0, -1) != 0)
	{
		return;
	}
	unk_0x6013749680B4A6E9(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85916);
	StringCopy(&Global_88809, "", 64);
}

void func_7(int iParam0)
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

void func_8()
{
	char cVar0[24];
	
	if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
	{
		unk_0xFF5A30D59D34CC43(StackVal, 0, 0, 0);
	}
	else if (unk_0xBECAD780226FC009() || unk_0xD95D58B9AAC86D55())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xD50C1D58B20E7291(0, &cVar0);
	}
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_11(bool bParam0)
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

bool func_12(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
	func_16(&uLocal_461, Local_287.f_0);
}

void func_16(var uParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0x0D2E3F017CBCB8A8(*uParam0) && unk_0xC0A42281C0F88A94(*uParam0))
	{
		Var6 = { unk_0x9BB4C18693988436(*uParam0) };
		Var0 = { unk_0x8CA90C0D9A0E33D9(*uParam0, 2) };
		if (unk_0x1F1B2B6E500380C5(iParam1, 0))
		{
			Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
		}
		fVar9 = unk_0xD3392FFC0C6A404A((Var3.f_2 - Var6.f_2), unk_0x999A157665D69393(Var3, Var6, 0));
		if (fVar9 > Var0.f_0)
		{
			Var0.f_0 = func_17(Var0.f_0, fVar9, 0.07f);
		}
		unk_0x00D89D1097963F54(*uParam0, Var0, 2);
	}
}

float func_17(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_18(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x509383441597090D(&Global_88809))
	{
		unk_0x6013749680B4A6E9(&Global_88809, 0, 0, 0, 1, 0);
		StringCopy(&Global_88809, "", 64);
	}
	StringCopy(&Global_88809, sParam0, 64);
	unk_0xE4FD630E9165FB5C(sParam0, iParam1, iParam2, func_19(0));
}

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_21(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
	{
		uVar0 = iParam0;
		unk_0xFF5A30D59D34CC43(8, &uVar0, 1, 1);
	}
	else if (unk_0xBECAD780226FC009() || unk_0xD95D58B9AAC86D55())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xD50C1D58B20E7291(8, &cVar1);
	}
}

void func_22(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_25(uParam0);
	}
	else
	{
		func_23(uParam0);
	}
}

void func_23(var uParam0)
{
	func_24(uParam0, 0f);
}

void func_24(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0x08BA6DD398CA197C(*uParam0, 4)) - fParam1);
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_25(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_23(uParam0);
	}
}

void func_26()
{
	if (unk_0xD3FACCDA4D66AEAD(Local_287.f_0) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0xC0A42281C0F88A94(uLocal_461))
	{
		unk_0x07553DAC96600443(uLocal_461, 0);
		unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
		unk_0x50C86ABC13A071F8(uLocal_461, 0);
	}
	func_2();
}

int func_27()
{
	int iVar0;
	
	Global_101553.f_17822 = iLocal_121;
	switch (iLocal_121)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 9:
		case 10:
		case 11:
			func_36();
			break;
		
		case 7:
			func_36();
			func_28(65, 0, 1, 1, 0);
			func_28(66, 0, 1, 1, 0);
			break;
		
		default:
			break;
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_53, &Local_287, 170, iLocal_97);
	unk_0x3CFCF109465A1DA6(&Local_53);
	return iVar0;
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69617)
		{
			Global_2432628.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_101553.f_6116.f_227[iParam0] = iParam1;
		}
		Global_32743[iParam0] = iParam2;
		Global_32942[iParam0] = 1;
		func_31(iParam0, bParam3, iParam4, 0);
		func_29(iParam0, iParam1);
	}
}

void func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xDFEB99FF23FBFA15("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xDFEB99FF23FBFA15("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0xDDF7894250162801("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0xDDF7894250162801("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_30(0, 0);
			}
			else
			{
				func_30(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xDFEB99FF23FBFA15("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xDFEB99FF23FBFA15("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x8CD063048C5E8937("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x32508B8E93AAF2BE("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x32508B8E93AAF2BE("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x32508B8E93AAF2BE("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x32508B8E93AAF2BE("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_30(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&Global_100193, iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_100193, iParam0);
	}
	Global_100192 = 1;
}

bool func_31(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_35(&Var3, iParam0);
	if (func_32())
	{
		iVar1 = Global_101553.f_6116.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2432628.f_74.f_227[iParam0];
	}
	iVar2 = Global_33141[iParam0];
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) != unk_0x3BB8D1C5FAAB25B3("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32743[iParam0] && unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || unk_0x5A2B04607A5BA87C(unk_0xA0081090911D13E5()))
				{
					if (!unk_0x2C22E7D1C80A53EF())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0x9726BE1252F8F0B6() && (!unk_0xC740F8182E7E9681() || unk_0x3FC82179CAE1D56D() != 5))
		{
			bVar99 = false;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0xAF5EF2A48AF80C3A(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x9FFBF9D6DD13FE0B(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34337[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[1 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[1 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x28F28FA21E7B496C(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("REMOVE_ALL_STATES")) && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x28F28FA21E7B496C(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[0 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(""))
						{
							if (!unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xB8289431295C363A(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_34)) != unk_0x3BB8D1C5FAAB25B3(""))
						{
							if (!unk_0x3FD21E1BA0B74B4A(&(Var3.f_34)))
							{
								unk_0xB8289431295C363A(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_34)) != unk_0x3BB8D1C5FAAB25B3(""))
						{
							if (unk_0x3FD21E1BA0B74B4A(&(Var3.f_34)))
							{
								unk_0x28F28FA21E7B496C(&(Var3.f_34));
							}
						}
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[0 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[0 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x28F28FA21E7B496C(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("REMOVE_ALL_STATES")) && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x28F28FA21E7B496C(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[1 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(""))
						{
							if (!unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xB8289431295C363A(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_34)) != unk_0x3BB8D1C5FAAB25B3(""))
						{
							if (unk_0x3FD21E1BA0B74B4A(&(Var3.f_34)))
							{
								unk_0x28F28FA21E7B496C(&(Var3.f_34));
							}
						}
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[0 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[0 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x28F28FA21E7B496C(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[1 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[1 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x28F28FA21E7B496C(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("REMOVE_ALL_STATES"))
						{
							if (!unk_0x3FD21E1BA0B74B4A(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xB8289431295C363A(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34138[iParam0] = 1;
					Global_34337[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0x07BE5BF18FEF759E(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_50)) != unk_0x3BB8D1C5FAAB25B3(""))
						{
							if (unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_50)))
							{
								unk_0xB88B5C1BDC382AEB(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[1 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(""))
							{
								if (unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xB88B5C1BDC382AEB(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("REMOVE_ALL_STATES")) && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xB88B5C1BDC382AEB(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[0 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(""))
							{
								if (!unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xA57D09C0569A13B9(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[0 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(""))
							{
								if (unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xB88B5C1BDC382AEB(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("REMOVE_ALL_STATES")) && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xB88B5C1BDC382AEB(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[1 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(""))
							{
								if (!unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xA57D09C0569A13B9(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[0 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(""))
							{
								if (unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xB88B5C1BDC382AEB(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[1 /*8*/])) != unk_0x3BB8D1C5FAAB25B3(""))
							{
								if (unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xB88B5C1BDC382AEB(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("") && unk_0x3BB8D1C5FAAB25B3(&(Var3.f_8[2 /*8*/])) != unk_0x3BB8D1C5FAAB25B3("REMOVE_ALL_STATES"))
							{
								if (!unk_0xF1A444E9FA0716A5(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xA57D09C0569A13B9(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x44C7C728D0CDD919(iVar100);
						}
					}
					Global_34337[iParam0] = 1;
					Global_34138[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x999A157665D69393(Var3, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), 1) < 250f)
					{
						uVar98 = unk_0x66A41CE547600192(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xBA2D5D1079324E95(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x21F64301ADA0932D(uVar98, 3);
								Global_34337[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x6F9F3E27FD383A91(uVar98) != 6 && unk_0x6F9F3E27FD383A91(uVar98) != 7) && unk_0x6F9F3E27FD383A91(uVar98) != 8)
								{
									unk_0x21F64301ADA0932D(uVar98, 10);
									Global_34337[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0xE6FCD7E2C6B3CE6F(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x09C86C0C5CA26B1E(&(Global_32489[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x02C959EC36DA5520(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x88B0F0DC270164B7(&(Global_32489[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32942[iParam0] = 0;
				Global_33141[iParam0] = iVar1;
				if (!func_32())
				{
					if (!Global_33738[iParam0])
					{
						Global_33738[iParam0] = 1;
						Global_33937++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_32()
{
	if ((func_34() == -1 || func_34() == 999) && !func_33() == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	return Global_25186;
}

int func_34()
{
	return Global_25185;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_36()
{
	unk_0xF215E3B07B7990BC(3000);
	func_16(&uLocal_461, Local_287.f_0);
	while (unk_0x44F90FBF2C1E8021())
	{
		unk_0x4EDE34FBADD967A6(0);
		func_16(&uLocal_461, Local_287.f_0);
	}
	if (unk_0x1F1B2B6E500380C5(Local_287.f_0, 0))
	{
		unk_0xB032923150355520(Local_287.f_0, 1);
	}
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return;
	}
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36709[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36683[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36683[iParam0 /*5*/].f_1 == unk_0xA0081090911D13E5())
		{
			Global_36904 = 0;
		}
	}
	Global_36683[iParam0 /*5*/] = 13;
	Global_36683[iParam0 /*5*/].f_1 = 0;
	Global_36683[iParam0 /*5*/].f_2 = 0;
	Global_36683[iParam0 /*5*/].f_3 = 0;
	Global_36683[iParam0 /*5*/].f_4 = 0;
	Global_36682 = (Global_36682 - 1);
	if (Global_36682 < 0)
	{
		Global_36682 = 0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36683[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36790[iVar0 /*5*/] = iParam0;
	Global_36790[iVar0 /*5*/].f_1 = iParam1;
	Global_36790[iVar0 /*5*/].f_2 = iParam2;
	Global_36790[iVar0 /*5*/].f_3 = iParam3;
	Global_36790[iVar0 /*5*/].f_4 = iParam4;
}

int func_42()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36790[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36790[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36790[iVar0 /*5*/])
			{
				if (iParam1 == Global_36790[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36709[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36709[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_46()
{
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 25);
	unk_0x88B0F0DC270164B7(&Global_2314, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89217.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_49(0))
		{
			return 0;
		}
		Global_35739++;
		*iParam0 = Global_35739;
		unk_0x8F2CF88C37D4A413(unk_0x4A0FB18E33FE5805(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xD74A648A7073D681(8);
		}
		Global_35775 = iParam2;
		Global_35737 = *iParam0;
		Global_35738 = iParam4;
		Global_35736 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35736 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35736)
			{
				if (Global_35742[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35737 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_149(iParam2))
		{
			return 0;
		}
		if (Global_35736 == 8)
		{
			return 0;
		}
		Global_35739++;
		*iParam0 = Global_35739;
		Global_35742[Global_35736 /*4*/] = Global_35739;
		Global_35742[Global_35736 /*4*/].f_1 = iParam1;
		Global_35742[Global_35736 /*4*/].f_2 = iParam2;
		Global_35742[Global_35736 /*4*/].f_3 = 0;
		Global_35736++;
		if (iParam4 != 0)
		{
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35736 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35736)
	{
		if (Global_35742[iVar0 /*4*/] == *uParam0)
		{
			Global_35742[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_49(int iParam0)
{
	if (Global_35775 == 15)
	{
		return 0;
	}
	if (func_149(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()
{
	func_51();
}

void func_51()
{
	int iVar0;
	var uVar1;
	int iVar4;
	var uVar5;
	var uVar6;
	struct<3> Var7;
	float fVar10;
	var uVar11;
	bool bVar12;
	
	if (unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		return;
	}
	uVar11 = func_102(func_103(iLocal_121) == joaat("maverick"), 0.45f, 0.3f);
	iVar4 = unk_0x525584039F375488();
	if (unk_0xD3FACCDA4D66AEAD(iVar4) && iVar4 != iLocal_86)
	{
		Local_287.f_1 = iVar4;
	}
	if (!iLocal_458)
	{
		func_133();
		unk_0x4EDE34FBADD967A6(0);
		return;
	}
	if (func_99(Local_287.f_3, Local_287.f_0, 1, 1, 1, 1, 0) || unk_0xC740F8182E7E9681())
	{
		func_142(0);
		iLocal_458 = 0;
		if (unk_0xD3FACCDA4D66AEAD(Local_287.f_3) && !unk_0xEB361B4BD195A4D3(Local_287.f_3))
		{
			if (unk_0x1F1B2B6E500380C5(Local_287.f_0, 0) && unk_0x1FD87E888EB4FC00(Local_287.f_3, Local_287.f_0, 0))
			{
				unk_0x5DB5C19B077049E6(Local_287.f_3, Local_287.f_0, unk_0xC59DF10B4FC39DF8(Local_287.f_0, 1) + Vector(100f, 100f, 100f) * unk_0xB86A69343E7FBB9A(Local_287.f_0) + Vector(500f, 0f, 0f), 4, unk_0xD6D39532149CE0AF(Local_287.f_0), 262144, 50f, 50f, 1);
			}
			else
			{
				unk_0x69E46DC398F0B2BD(Local_287.f_3, unk_0xA0081090911D13E5(), 1000f, -1, 0, 0);
			}
			unk_0x77637031DE326F70(Local_287.f_3, 1);
			unk_0x705E4255B39314A7(Local_287.f_3, 251, 0);
			unk_0x705E4255B39314A7(Local_287.f_3, 255, 0);
			Local_287.f_3 = 0;
		}
		if (unk_0xD3FACCDA4D66AEAD(Local_287.f_0))
		{
			unk_0x615DE34FC732CF11(&Local_287);
			Local_287.f_0 = 0;
		}
		if (func_1("PLAY_BASEJUMP_S"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return;
	}
	fVar10 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), func_98(iLocal_121));
	if (fVar10 < 11664f)
	{
		if (!iLocal_460)
		{
			unk_0x491067A8E906F22D(func_97(iLocal_121));
			iLocal_460 = 1;
		}
	}
	else if (fVar10 > 13924f)
	{
		if (iLocal_460)
		{
			unk_0x2C07692AA3545079(func_97(iLocal_121));
			iLocal_460 = 0;
		}
	}
	if (fVar10 < 10000f)
	{
		if (!unk_0xD3FACCDA4D66AEAD(Local_287.f_3))
		{
			if ((unk_0x2C1B5A0D3E233FC3(func_97(iLocal_121)) && unk_0xD3FACCDA4D66AEAD(Local_287.f_0)) && unk_0x1F1B2B6E500380C5(Local_287.f_0, 0))
			{
				Local_287.f_3 = unk_0x667A2CFA1914073C(Local_287.f_0, 4, func_97(iLocal_121), -1, 1, 1);
				if (!unk_0xEB361B4BD195A4D3(Local_287.f_3))
				{
					unk_0x4519324BAE580305(Local_287.f_3, 0);
					func_96(Local_287.f_3, iLocal_121);
					func_95();
					unk_0xD97F9F0D7231AC43(Local_287.f_3, func_94(iLocal_121));
					func_92(&uLocal_122, 0, Local_287.f_3, func_93(iLocal_121), 1, 1);
					unk_0x332BEDF7CCD4832D(Local_287.f_3, -1);
					unk_0x705E4255B39314A7(Local_287.f_3, 251, 1);
					unk_0x705E4255B39314A7(Local_287.f_3, 255, 1);
				}
				unk_0x6F40E1EE32FE6A5E(Local_287.f_0, 1, 1, 0);
				unk_0xCC4C5AF88E64862B(Local_287.f_0, uVar11);
			}
		}
		else
		{
			unk_0x7B17650F15A8876D(Local_287.f_3, 1, 0);
			if (!unk_0x0D2E3F017CBCB8A8(uLocal_461) || !unk_0xD369B57993C85A50(uLocal_461))
			{
				unk_0xCC4C5AF88E64862B(Local_287.f_0, uVar11);
			}
			if (!unk_0x08BA6DD398CA197C(Local_287.f_169, 0))
			{
				if (unk_0xB20CA7A3EE29687A())
				{
					if (!unk_0xEB361B4BD195A4D3(Local_287.f_3) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(Local_287.f_3, 1)) < 400f)
						{
							func_76(&uLocal_122, "OJBJAUD", func_90(iLocal_121), 8, 0, 0, 0);
							unk_0xD5DC2873808A9CB5(Local_287.f_3, unk_0xA0081090911D13E5(), 6000, 0, 2);
							unk_0x88B0F0DC270164B7(&(Local_287.f_169), 0);
						}
					}
				}
			}
		}
	}
	else if (fVar10 > 12100f)
	{
		if (unk_0xD3FACCDA4D66AEAD(Local_287.f_3))
		{
			uVar5 = Local_287.f_3;
			unk_0x77637031DE326F70(uVar5, 1);
			if (!unk_0x7DB334F5F834726A(uVar5))
			{
				unk_0x7B17650F15A8876D(uVar5, 1, 0);
				unk_0x4E82D83B086B5C93(&uVar5);
			}
			else
			{
				unk_0x0689C659BF2D3BF7(&uVar5);
			}
		}
	}
	func_16(&uLocal_461, Local_287.f_0);
	if ((unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Local_287.f_0, 1) && !unk_0xE44CFAD9FA539E8A(unk_0xA0081090911D13E5())) && func_74(Local_287.f_3, Local_287.f_0))
	{
		Var7 = { unk_0xDDBED866B22F905C(Local_287.f_0, unk_0x7560B9B6FB83879C(unk_0xA0081090911D13E5(), 0, 0f, 0f, 0f)) };
		if (Var7.f_0 < 0f || Var7.f_1 < 1f)
		{
			unk_0x0756AF366187C194("DisableFlightMusic", 1);
			unk_0x4DA90A8B408EBB18(Local_287.f_0, "OFF");
			func_158(&uLocal_94, 64);
			bVar12 = true;
			if (iLocal_459)
			{
				if (func_1("PLAY_BASEJUMP_B") || func_1("PLAY_BASEJUMP_S"))
				{
					unk_0x94724F7C938EBE34(1);
				}
				iLocal_459 = 0;
			}
			if (!unk_0x0D2E3F017CBCB8A8(uLocal_461))
			{
				func_63(0, 0, 1);
				func_58(1);
				uLocal_461 = unk_0x12F59429E5E012F4(26379945, func_57(iLocal_121), func_56(iLocal_121), func_55(iLocal_121), 0, 2);
				unk_0x07553DAC96600443(uLocal_461, 1);
				unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
				unk_0xE54CCCC537E33A2F(uLocal_461, "HAND_SHAKE", 0.07f);
			}
			if (unk_0x1F1B2B6E500380C5(Local_287.f_0, 0))
			{
				iVar0 = unk_0x21178DF77817BF39(Local_287.f_3, -1273030092);
				if (iVar0 != 0 && iVar0 != 1)
				{
					unk_0x705E4255B39314A7(Local_287.f_3, 134, 1);
					func_23(&uVar1);
					while (func_10(&uVar1) < 1f)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) || unk_0xE44CFAD9FA539E8A(unk_0xA0081090911D13E5()))
						{
							func_54(iLocal_105);
							if (unk_0xD3FACCDA4D66AEAD(Local_287.f_3) && !unk_0xEB361B4BD195A4D3(Local_287.f_3))
							{
								if (unk_0x1F1B2B6E500380C5(Local_287.f_0, 0) && unk_0x1FD87E888EB4FC00(Local_287.f_3, Local_287.f_0, 0))
								{
									unk_0x5DB5C19B077049E6(Local_287.f_3, Local_287.f_0, unk_0xC59DF10B4FC39DF8(Local_287.f_0, 1) + Vector(100f, 100f, 100f) * unk_0xB86A69343E7FBB9A(Local_287.f_0) + Vector(500f, 0f, 0f), 4, unk_0xD6D39532149CE0AF(Local_287.f_0), 262144, 50f, 50f, 1);
								}
								else
								{
									unk_0x69E46DC398F0B2BD(Local_287.f_3, unk_0xA0081090911D13E5(), 1000f, -1, 0, 0);
								}
								unk_0x77637031DE326F70(Local_287.f_3, 1);
								unk_0x705E4255B39314A7(Local_287.f_3, 251, 0);
								unk_0x705E4255B39314A7(Local_287.f_3, 255, 0);
							}
							if (unk_0xD3FACCDA4D66AEAD(Local_287.f_0))
							{
								unk_0x615DE34FC732CF11(&Local_287);
							}
							if (func_1("PLAY_BASEJUMP_S"))
							{
								unk_0x94724F7C938EBE34(1);
							}
							unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
							unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
							return;
						}
						else
						{
							func_16(&uLocal_461, Local_287.f_0);
						}
					}
					func_22(&uLocal_462);
					while (!unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Local_287.f_0, 0) && func_53(&uLocal_462) < 2f)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					func_9(&uLocal_462);
					if (!unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), Local_287.f_0, 0))
					{
						bVar12 = false;
						unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
						if (unk_0x0D2E3F017CBCB8A8(uLocal_461))
						{
							unk_0x50C86ABC13A071F8(uLocal_461, 0);
						}
						unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
						return;
					}
					if (!unk_0x912AD5A10E7633F0(Local_287.f_3, 0) && !unk_0x912AD5A10E7633F0(Local_287.f_0, 0))
					{
						unk_0x95C55738CAE00A20(&uVar6);
						unk_0x332BEDF7CCD4832D(0, 500);
						unk_0x5DB5C19B077049E6(0, Local_287.f_0, unk_0xC59DF10B4FC39DF8(Local_287.f_0, 1) + Vector(100f, 100f, 100f) * unk_0xB86A69343E7FBB9A(Local_287.f_0) + Vector(500f, 0f, 0f), 4, unk_0xD6D39532149CE0AF(Local_287.f_0), 262144, 50f, 50f, 1);
						unk_0x70B222EEA46C37FA(uVar6);
						unk_0x3998B29E786DFD96(Local_287.f_3, uVar6);
						unk_0x7DFD14B8B873D6B5(&uVar6);
						if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
						{
							unk_0x4519324BAE580305(unk_0xA0081090911D13E5(), 0);
							unk_0xF152F4EB3CEAF22E(unk_0xA0081090911D13E5(), 1);
						}
					}
					func_23(&uVar1);
					while (func_10(&uVar1) < 2f)
					{
						unk_0x4EDE34FBADD967A6(0);
						func_16(&uLocal_461, Local_287.f_0);
					}
				}
			}
		}
	}
	if (!bVar12)
	{
		if ((unk_0x1F1B2B6E500380C5(Local_287.f_0, 0) && unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(Local_287.f_0, 1)) < 225f) && !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
		{
			if ((!iLocal_459 || (iLocal_121 == 3 && !func_1("PLAY_BASEJUMP_B"))) || (iLocal_121 != 3 && !func_1("PLAY_BASEJUMP_S")))
			{
				if (iLocal_121 == 3)
				{
					if (!Global_68125)
					{
						func_52("PLAY_BASEJUMP_B");
					}
				}
				else if (!Global_68125)
				{
					func_52("PLAY_BASEJUMP_S");
				}
				iLocal_459 = 1;
			}
		}
		else if (iLocal_459)
		{
			if (func_1("PLAY_BASEJUMP_B") || func_1("PLAY_BASEJUMP_S"))
			{
				unk_0x94724F7C938EBE34(1);
			}
			iLocal_459 = 0;
		}
		if ((!unk_0xEB361B4BD195A4D3(Local_287.f_3) && unk_0x21178DF77817BF39(Local_287.f_3, -982327190) != 0) && unk_0x21178DF77817BF39(Local_287.f_3, -982327190) != 1)
		{
			unk_0x332BEDF7CCD4832D(Local_287.f_3, -1);
		}
	}
}

void func_52(char* sParam0)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

float func_53(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_54(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_145(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_106(&iLocal_96);
		iLocal_95 = 9;
	}
}

float func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 46.7708f;
		
		case 1:
			return 30.5578f;
		
		case 2:
			return 31.1151f;
		
		case 3:
			return 43.4229f;
		
		case 7:
			return 48.6851f;
		
		case 9:
			return 46.947f;
		
		case 10:
			return 40.6109f;
		
		case 11:
			return 32.1049f;
			break;
	}
	return 45f;
}

Vector3 func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6.5672f, 0f, -15.3269f;
		
		case 1:
			return 1.6743f, 0f, 13.7295f;
		
		case 2:
			return 2.2348f, 0f, 141.3733f;
		
		case 3:
			return 0.7682f, 0f, -154.1293f;
		
		case 7:
			return -1.8117f, 0f, 100.4016f;
		
		case 9:
			return 0.7611f, 0f, -71.8023f;
		
		case 10:
			return 2.3742f, 0f, 86.6743f;
		
		case 11:
			return 0.73f, 0f, 109.0678f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -840.2545f, -1317.986f, 6.1066f;
		
		case 1:
			return 1210.955f, 153.4641f, 81.7073f;
		
		case 2:
			return 2489.731f, 1537.972f, 36.1861f;
		
		case 3:
			return -286.5149f, 6665.522f, 6.9225f;
		
		case 7:
			return -714.035f, 4491.083f, 79.9083f;
		
		case 9:
			return -1396.963f, 4363.597f, 43.1246f;
		
		case 10:
			return 2547.738f, 4967.683f, 46.0189f;
		
		case 11:
			return 1091.145f, -169.1484f, 70.757f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
		func_62();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0x88B0F0DC270164B7(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_110(0))
		{
			func_59(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_59(int iParam0)
{
	if (Global_14604)
	{
		func_61(0, 0);
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
	if (!func_60())
	{
		Global_14443.f_1 = 3;
	}
}

int func_60()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_61(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_110(0))
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

void func_62()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_63(int iParam0, int iParam1, int iParam2)
{
	unk_0xFDEC0B505BCB00C0(unk_0x4A0FB18E33FE5805(), 0, iParam0);
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0xBD04C1F04667E915(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 15f);
	}
	unk_0xD88C3482EA86B6F5(iParam1);
	func_59(0);
	func_65(1, 1, iParam2, 0);
	unk_0x627D428B266FEDCA(0);
	unk_0x943A052E20E9C2CE(0);
	func_64(23, 1);
}

void func_64(int iParam0, bool bParam1)
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

void func_65(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x864EAABAADAAA1E3(unk_0x0C1D3C552325765B());
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 1);
		func_73(1);
		unk_0x3437639A811EF082();
		unk_0xB5B3F40B585C8D07();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xC6CB0C1523C73C77())
			{
				unk_0x588D9B1F6CF36C3C(0);
			}
			if (!func_60())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_72(1, iParam3, uParam2, 0);
		Global_55822 = 1;
		Global_68128 = 1;
		Global_69615 = 1;
	}
	else
	{
		func_73(0);
		unk_0x2D1364CCF7771349();
		Global_55822 = 0;
		if (bParam1)
		{
			unk_0xF100005CC9E0A614();
		}
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 0);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 0);
		func_72(0, iParam3, uParam2, 0);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_70(unk_0x0C1D3C552325765B())) && !func_67(unk_0x0C1D3C552325765B(), 0)) && !func_66())
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_70(unk_0x0C1D3C552325765B()))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		}
		Global_69615 = 0;
	}
}

bool func_66()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

bool func_67(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_68(-1, 0) == 8;
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

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_69();
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

int func_69()
{
	return Global_1312731;
}

int func_70(int iParam0)
{
	if (func_67(iParam0, 0))
	{
		return 1;
	}
	if (func_71())
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

bool func_71()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_72(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_73(int iParam0)
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

int func_74(int iParam0, int iParam1)
{
	if (((!unk_0xD3FACCDA4D66AEAD(iParam0) || !unk_0xD3FACCDA4D66AEAD(uParam1)) || unk_0x912AD5A10E7633F0(iParam0, 0)) || unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		return 0;
	}
	if (unk_0x1FD87E888EB4FC00(iParam0, iParam1, 0) && func_75(iParam0, iParam1) == -1)
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	if (!unk_0x912AD5A10E7633F0(iParam0, 0) && !unk_0x912AD5A10E7633F0(uParam1, 0))
	{
		if (unk_0x72550A6F2BC0E12B(iParam0, iParam1))
		{
			if (unk_0x8FD32443A080784B(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x8FD32443A080784B(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x8FD32443A080784B(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x8FD32443A080784B(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_76(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_77(sParam2, iParam3, 0);
}

int func_77(char* sParam0, int iParam1, bool bParam2)
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
					func_88();
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
		if (func_111(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_87();
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
				func_81();
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
				if (func_80())
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
			if (func_60())
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
			func_79();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_78();
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
		func_88();
	}
	return 0;
}

void func_78()
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

void func_79()
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

int func_80()
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

void func_81()
{
	if (func_131(14))
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
		Global_14443 = func_82();
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

var func_82()
{
	func_83();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_83()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_86(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_85(unk_0xA0081090911D13E5());
			if (func_84(iVar0) && (!func_131(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_84(Global_101553.f_1991.f_539.f_3549))
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

bool func_84(int iParam0)
{
	return iParam0 < 3;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_86(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_86(int iParam0)
{
	if (func_84(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_87()
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

void func_88()
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

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_90(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_85(unk_0xA0081090911D13E5()) == true;
	switch (iParam0)
	{
		case 0:
			return func_91(bVar0, "BJ_01F", "BJ_01L");
		
		case 1:
			return func_91(bVar0, "BJ_02F", "BJ_02L");
		
		case 2:
			return func_91(bVar0, "BJ_03F", "BJ_03L");
		
		case 3:
			return func_91(bVar0, "BJ_04FG", "BJ_04L");
		
		case 7:
			return "BJ_08L";
		
		case 9:
			return func_91(bVar0, "BJ_10LF", "BJ_10L");
		
		case 10:
			return func_91(bVar0, "BJ_11LF", "BJ_11L");
		
		case 11:
			return "BJ_12L";
		
		default:
	}
	return "";
}

char* func_91(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_92(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(uParam2))
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

char* func_93(int iParam0)
{
	return "EXT1HELIPILOT";
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EXT1HELIPILOT";
		
		case 1:
			return "EXT1HELIPILOT";
		
		case 2:
			return "EXT1HELIPILOT";
		
		case 3:
			return "EXT1HELIPILOT";
		
		case 7:
			return "BJPilot_Train";
		
		case 9:
			return "EXT1HELIPILOT";
		
		case 10:
			return "EXT1HELIPILOT";
		
		case 11:
			return "BJPilot_Canal";
		
		default:
	}
	return "EXT1HELIPILOT";
}

void func_95()
{
	iLocal_48++;
}

void func_96(int iParam0, int iParam1)
{
	if (unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			unk_0xA27FDFE5C0EBB875(iParam0, 0, 0, 1, 0);
			unk_0xA27FDFE5C0EBB875(iParam0, 2, 1, 0, 0);
			unk_0xA27FDFE5C0EBB875(iParam0, 3, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(iParam0, 4, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(iParam0, 8, 1, 0, 0);
			unk_0xA4C961D96B05ABB2(iParam0, 1, 0, 0, 0);
			break;
		
		case 11:
			unk_0xA27FDFE5C0EBB875(iParam0, 0, 1, 0, 0);
			unk_0xA27FDFE5C0EBB875(iParam0, 2, 2, 0, 0);
			unk_0xA27FDFE5C0EBB875(iParam0, 3, 1, 0, 0);
			unk_0xA27FDFE5C0EBB875(iParam0, 4, 0, 2, 0);
			unk_0xA4C961D96B05ABB2(iParam0, 0, 1, 2, 0);
			unk_0xA4C961D96B05ABB2(iParam0, 1, 1, 0, 0);
			break;
	}
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

Vector3 func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xA0081090911D13E5();
	if (((!unk_0xD3FACCDA4D66AEAD(uParam1) || unk_0x912AD5A10E7633F0(iParam1, 0)) || !unk_0x1F1B2B6E500380C5(iParam1, 0)) || unk_0x601CCD1205C6523F(iParam1))
	{
		return 1;
	}
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			Var1 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
			if (bParam3)
			{
				if (unk_0x019E78F3A1071807(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam5)
			{
				if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
				{
					return 1;
				}
			}
			if (bParam6)
			{
				if (unk_0xE2205194B5B97090(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), iParam0) || unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iParam0))
				{
					if (unk_0x85F24E93D5789C43(iParam0, iVar0, 90f))
					{
						if (func_100(iParam0, 1) < 10f)
						{
							return 1;
						}
					}
				}
			}
			if (unk_0x39FEE545B315414E(iParam0, 0))
			{
				if (unk_0x4AEC0F4FC7FE62C7(unk_0xF8DB47D339B8B953(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0xD791ED8E9ADE270C(iVar0, 4))
			{
				if (unk_0x4B626BBA5EE1CFF0(iVar0))
				{
					if (unk_0x6E07DBF03F3AC258(iParam0, unk_0xC59DF10B4FC39DF8(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0xB53CC268A7051C62(Var1, 4f, 1))
			{
				return 1;
			}
			if (unk_0xF9043F0F074A61B5((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (unk_0x12AE3D700F6A2545(iParam0) || !func_74(iParam0, iParam1))
			{
				return 1;
			}
			if ((unk_0xA0BE515094F295FB(-1, Var1, 25f) && !unk_0xA0BE515094F295FB(11, Var1, 25f)) && !unk_0xA0BE515094F295FB(13, Var1, 25f))
			{
				return 1;
			}
		}
		else if (bParam2)
		{
			return 1;
		}
	}
	return 0;
}

float func_100(var uParam0, int iParam1)
{
	return func_101(unk_0x21F191D9AFF98B5E(unk_0x4A0FB18E33FE5805()), uParam0, iParam1);
}

float func_101(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(uParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, uParam2);
}

float func_102(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

int func_104(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_105(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xC0691D80D21C989D(unk_0x4A0FB18E33FE5805()))
	{
		return 0;
	}
	if (func_110(0))
	{
		return 0;
	}
	if (unk_0x7C0379981B7E6E40())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/] == 1 && Global_36478[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36478[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36478[iVar0 /*32*/].f_5 = 1;
			Global_36478[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36478[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36478[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_106(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_105(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_107(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xA96867DD0A63C62C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xC740F8182E7E9681())
	{
		if (!*iParam0 == -1)
		{
			func_106(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/] = 1;
			Global_36478[iVar0 /*32*/].f_1 = Global_36679;
			Global_36679++;
			Global_36478[iVar0 /*32*/].f_4 = 0;
			Global_36478[iVar0 /*32*/].f_29 = 0;
			Global_36478[iVar0 /*32*/].f_5 = 0;
			Global_36478[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36478[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36478[iVar0 /*32*/].f_6 = iParam3;
			Global_36478[iVar0 /*32*/].f_31 = unk_0xEAE20F1125B83888();
			Global_36478[iVar0 /*32*/].f_7 = 0;
			Global_36478[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x509383441597090D(sParam4))
			{
				Global_36478[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36478[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36478[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36478[iVar0 /*32*/].f_12 = 0;
				Global_36478[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36478[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_108(int iParam0)
{
	return 0;
	return 1;
}

var func_109()
{
	return Global_68125;
}

int func_110(int iParam0)
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

bool func_111(int iParam0, int iParam1)
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

bool func_112()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_113()
{
	if (unk_0xA96867DD0A63C62C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_114(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_115()
{
	return 1;
}

void func_116(var uParam0, int iParam1)
{
	func_117(uParam0, iParam1);
}

void func_117(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_118()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		return ((((bVar1 && unk_0x7F6103BD34B839B0(0, 69)) || (bVar1 && unk_0x7F6103BD34B839B0(0, 70))) || (bVar1 && unk_0x7F6103BD34B839B0(0, 68))) || unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()));
	}
	return (((((bVar1 && unk_0x7F6103BD34B839B0(0, 24)) || (bVar1 && unk_0x7F6103BD34B839B0(0, 25))) || (bVar1 && unk_0x7F6103BD34B839B0(0, 47))) || unk_0xE0D64C0509B5F91D(unk_0xA0081090911D13E5())) || unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()));
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				iVar0 = func_82();
				if (!func_84(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_126()) || Global_100600) || Global_25187) || func_125()) || func_111(8, -1)) || func_124()) || func_123()) || func_122()) || func_113()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1) || func_126()) || Global_25187) || func_125()) || func_111(8, -1)) || func_122()) || func_124()) || func_123()) || func_113()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_126()) || Global_100600) || Global_25187) || func_125()) || func_111(8, -1)) || func_122()) || func_124()) || func_123()) || func_113()) || Global_101553.f_6543.f_919[iVar0] == 5) || Global_36322 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_126()) || Global_100600) || Global_25187) || func_125()) || func_111(8, -1)) || func_124()) || func_123()) || func_113()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_126() || unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0) || func_111(8, -1)) || func_113()) || func_121()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_111(8, -1) || func_124()) || func_123()) || func_121()) || func_120())
						{
							return 0;
						}
						if ((unk_0xC740F8182E7E9681() && unk_0x4067637E264DB8F1() != 3) && unk_0x3FC82179CAE1D56D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
						{
							if ((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || func_126()) || Global_25187) || func_125()) || func_111(8, -1)) || func_123()) || func_122()) || func_113()) || Global_101553.f_6543.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || !unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) || !unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B())) || !unk_0xB20CA7A3EE29687A()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || func_126()) || func_123()) || Global_100600) || Global_25187) || func_125()) || Global_36906) || func_111(8, -1)) || func_122()) || func_121()) || func_113()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || !unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) || !unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B())) || !unk_0xB20CA7A3EE29687A()) || unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0)) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1)) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0x019057DADA219C94(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || func_126()) || Global_100600) || Global_25187) || func_125()) || func_111(8, -1)) || func_122()) || func_121()) || func_124()) || func_123()) || func_113())
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

var func_120()
{
	return Global_91445.f_1;
}

int func_121()
{
	if (Global_88661 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_82527[Global_88661 /*34*/].f_15, 13);
	}
	return 0;
}

int func_122()
{
	if (Global_69877)
	{
		return 1;
	}
	else if (Global_55810 && !Global_55816)
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return Global_91458.f_304 > 0;
}

bool func_124()
{
	return Global_91458.f_303 > 0;
}

var func_125()
{
	return Global_1315229;
}

int func_126()
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return Global_89217.f_44 == 1;
	}
	return 0;
}

int func_127()
{
	if (unk_0xA96867DD0A63C62C(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_128()
{
	return Global_87571;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_131(6) || func_131(7))
			{
				return 1;
			}
			else
			{
				return func_129(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_149(5))
			{
				if (func_119(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x16833EFAA58E63DB(Global_25497[iVar0 /*23*/].f_19);
}

bool func_131(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_133()
{
	if (bLocal_457)
	{
		switch (iLocal_121)
		{
			case 0:
				func_134(-829.3729f, -1289.817f, 4.0005f, 196.9543f);
				break;
			
			case 1:
				func_134(1208.197f, 174.5777f, 81.0003f, 138.8786f);
				break;
			
			case 2:
				func_134(2463.904f, 1509.964f, 35.0372f, 88.9199f);
				break;
			
			case 3:
				func_134(-274.6559f, 6633.891f, 7.5426f, 130.4063f);
				break;
			
			case 7:
				func_134(-742.5047f, 4493.466f, 75.2206f, 180.991f);
				break;
			
			case 9:
				func_134(-1367.687f, 4381.998f, 41.4017f, 277.8339f);
				break;
			
			case 10:
				func_134(2517.962f, 4971.619f, 44.7057f, 15.3895f);
				break;
			
			case 11:
				func_134(1054.534f, -179.6562f, 70.3162f, 30.046f);
				break;
			
			default:
				break;
			}
	}
}

void func_134(struct<3> Param0, float fParam3)
{
	var uVar0;
	bool bVar1;
	
	fLocal_93 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Param0);
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && (fLocal_93 > 25f || unk_0x2C22E7D1C80A53EF()))
	{
		if (fLocal_93 < 25600f)
		{
			if (!unk_0xE514F14357BDEECF(Param0, 6f) || unk_0x2C22E7D1C80A53EF())
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0xD3FACCDA4D66AEAD(Local_287.f_0))
		{
			unk_0xEFA1F34A28EE763C(&Local_287);
		}
		unk_0x0B17BC5D018E224B(Param0, 4f, 1, 0, 0, 0);
		if (iLocal_121 == 0)
		{
			unk_0xE4EC3FD6A99953E8(-835.7629f, -1298.777f, 0f, -815.1855f, -1283.906f, 10f, 0, 1);
		}
		if (iLocal_121 == 3)
		{
			Local_287.f_0 = unk_0xE044C77D0FC9DB66(joaat("frogger"), Param0, fParam3, 1, 1);
			unk_0x15E5515C105AB6C8(Local_287.f_0, 5);
		}
		else
		{
			Local_287.f_0 = unk_0xE044C77D0FC9DB66(joaat("maverick"), Param0, fParam3, 1, 1);
			unk_0x15E5515C105AB6C8(Local_287.f_0, 6);
		}
		iLocal_86 = Local_287.f_0;
		unk_0xB16B53F6FE1ADDB6(iLocal_86, 1);
		if (unk_0x776447CD667051CD(Param0, &uVar0, 0))
		{
			unk_0x74207974B5483203(Local_287.f_0);
		}
		unk_0x6783F2971949E5C2(Local_287.f_0, 1);
		iLocal_458 = 1;
	}
	else
	{
		iLocal_458 = 0;
	}
}

bool func_135()
{
	return func_136(&uLocal_119);
}

int func_136(var uParam0)
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

void func_137()
{
	switch (iLocal_121)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
			func_139();
			break;
		
		default:
			break;
	}
	func_138(&uLocal_119);
}

void func_138(var uParam0)
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

void func_139()
{
	if (iLocal_121 == 3)
	{
		func_140(&uLocal_119, joaat("frogger"));
	}
	else
	{
		func_140(&uLocal_119, joaat("maverick"));
	}
}

int func_140(var uParam0, int iParam1)
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
	iVar1 = func_141(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_141(var uParam0)
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

void func_142(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_143()
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
	fVar3 = unk_0xB7A628320EFF8E47(Var0, Local_90);
	if (fVar3 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar3 < (80f * 80f))
	{
		if (unk_0xE514F14357BDEECF(Local_90, 5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_144(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_145(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x08BA6DD398CA197C(Global_25497[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x08BA6DD398CA197C(Global_25497[iVar0 /*23*/].f_11, 0))
	{
		unk_0x88B0F0DC270164B7(&(Global_25497[iVar0 /*23*/].f_11), 18);
		if (Global_25494 == 1)
		{
			Global_25495 = 1;
		}
		Global_25494 = 1;
	}
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_25497[iVar0 /*23*/].f_11), 0);
		unk_0x88B0F0DC270164B7(&(Global_25497[iVar0 /*23*/].f_11), 15);
		unk_0x88B0F0DC270164B7(&(Global_25497[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_25497[iVar0 /*23*/].f_11), 0);
		unk_0x09C86C0C5CA26B1E(&(Global_25497[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x08BA6DD398CA197C(Global_25497[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x16833EFAA58E63DB(Global_25497[iVar0 /*23*/].f_19))
		{
			unk_0x9B1D45E9C3D735E8(1);
			unk_0x0B57C567D698C373(&(Global_25497[iVar0 /*23*/].f_19));
			unk_0x9B1D45E9C3D735E8(0);
		}
	}
}

int func_146()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xA5F0EF35323210B5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_147()
{
	if (Global_88661 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_82527[Global_88661 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_148(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x08BA6DD398CA197C(Global_101553.f_7940.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_149(int iParam0)
{
	return func_150(iParam0, Global_35775);
}

int func_150(int iParam0, int iParam1)
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

bool func_151(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_152()
{
	iLocal_99 = 0;
	if (unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		func_116(&uLocal_94, 8388608);
		return;
	}
	StringCopy(&Local_53, "bj", 64);
	iLocal_121 = func_156(Local_90, 1);
	func_116(&uLocal_94, 64);
	switch (iLocal_121)
	{
		case 0:
			iLocal_105 = 125;
			break;
		
		case 1:
			iLocal_105 = 126;
			break;
		
		case 2:
			iLocal_105 = 127;
			break;
		
		case 3:
			iLocal_105 = 128;
			break;
		
		case 7:
			iLocal_105 = 132;
			break;
		
		case 9:
			iLocal_105 = 134;
			break;
		
		case 10:
			iLocal_105 = 135;
			break;
		
		case 11:
			iLocal_105 = 136;
			break;
		
		default:
			break;
	}
	if (iLocal_121 == 4)
	{
		if (func_155(19))
		{
			func_116(&uLocal_94, 8388608);
			return;
		}
	}
	if (iLocal_121 == 7)
	{
		if (func_154(16) && !func_154(65))
		{
			func_116(&uLocal_94, 8388608);
			return;
		}
	}
	if (iLocal_121 == 0)
	{
		func_116(&uLocal_94, 524288);
	}
	if (unk_0xC740F8182E7E9681())
	{
		func_116(&uLocal_94, 8388608);
		return;
	}
	func_116(&uLocal_94, 4194304);
	func_116(&uLocal_94, 16);
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_153(iLocal_105)) + 5f);
	if (iLocal_105 != 263)
	{
		if (!func_148(0, iLocal_99))
		{
			bLocal_457 = false;
			func_54(iLocal_105);
		}
		else
		{
			bLocal_457 = true;
		}
	}
	else
	{
		bLocal_457 = false;
	}
	if (unk_0xA96867DD0A63C62C(joaat("bj")) > 0)
	{
	}
	else
	{
		func_158(&uLocal_94, 8);
	}
	if (func_131(12))
	{
		func_116(&uLocal_94, 8);
	}
	iLocal_97 = 19000;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_154(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101553.f_7940.f_330[iParam0 /*6*/];
}

bool func_155(int iParam0)
{
	return Global_100640[iParam0 /*10*/].f_1;
}

int func_156(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_157(iVar3))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param0, func_98(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_158(var uParam0, int iParam1)
{
	func_159(uParam0, iParam1);
}

void func_159(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_160(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_145(iLocal_105, 0, 0);
		}
	}
	func_106(&iLocal_96);
	if (func_151(uLocal_94, 2))
	{
		func_5();
		func_158(&uLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_161();
	unk_0x78C587487CD40B92();
}

void func_161()
{
	func_158(&uLocal_94, 4);
	func_162();
	if (unk_0x96549B1C2E196049(uLocal_52))
	{
		unk_0x0D9F7A81BAC2F752(uLocal_52, 3);
	}
	if (!unk_0xD28EDDD3F7264249(&Local_69))
	{
		if (unk_0x3ACC64D0951B9D26(&Local_69) != 0)
		{
			unk_0x3CFCF109465A1DA6(&Local_69);
		}
	}
}

void func_162()
{
}

