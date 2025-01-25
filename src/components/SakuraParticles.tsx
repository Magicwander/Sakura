import { useCallback } from 'react';
import Particles from 'react-tsparticles';
import type { Engine } from 'tsparticles-engine';
import { loadFull } from 'tsparticles';

export const SakuraParticles = () => {
  const particlesInit = useCallback(async (engine: Engine) => {
    await loadFull(engine);
  }, []);

  return (
    <Particles
      id="sakura-particles"
      init={particlesInit}
      options={{
        particles: {
          color: {
            value: "#FFB7C5",
          },
          move: {
            direction: "bottom",
            enable: true,
            random: true,
            speed: 2,
            straight: false,
          },
          number: {
            value: 30,
          },
          opacity: {
            value: 0.7,
          },
          shape: {
            type: "circle",
          },
          size: {
            value: 5,
            random: true,
          },
          rotate: {
            value: 45,
            random: true,
          },
        },
        background: {
          opacity: 0,
        },
      }}
      className="absolute inset-0 pointer-events-none z-10"
    />
  );
};