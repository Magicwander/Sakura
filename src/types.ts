export interface CppFile {
  name: string;
  path: string;
  content: string;
  timeSpent: number;
  difficulty: 'Beginner' | 'Intermediate' | 'Advanced';
  category: string;
}

export interface UserProgress {
  totalHours: number;
  completedConcepts: number;
  totalConcepts: number;
}